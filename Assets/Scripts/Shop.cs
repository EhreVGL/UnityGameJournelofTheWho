using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Shop : MonoBehaviour
{
    // Tuccar GameObject'i
    [SerializeField] private GameObject tuccar;
    // Oyuncu nesnesi
    [SerializeField] private GameObject player;
    // Tuccar i�in kullan�lan Rigidbody2d
    private Rigidbody2D rb;
    // Tuccar animatoru
    private Animator animator;
    // Tuccar hk.
    private Vector2 movement;
    // Tuccar hk.
    private float location;
    // Shop ekran�
    [SerializeField] private GameObject ShopWindow;
    // Sat�n al�nabilir itemlerin listesi.
    [SerializeField] private GameObject[] sellingItemsSlot1;
    [SerializeField] private GameObject[] sellingItemsSlot2;
    [SerializeField] private GameObject[] sellingItemsSlot3;
    [SerializeField] private GameObject sellingItemsSlotAll;
    // Sat�n al�nm�� itemler
    [SerializeField] private GameObject soldItems;
    // Sat�n al�nabilir itemlerin fiyat textleri
    [SerializeField] private Text[] priceTexts;
    // Saya�
    private int i;
    // Shop ekran�nda hangi itemlerin ��kaca��n� ��renmekte kullan�lan de�i�ken
    private int[] hafizaslot = new int[3];
    // Shop ekran�nda g�sterilecek itemlar�n pozisyonlar�
    private Vector2 position;
    // Sat�n al�nabilir itemler eklendi�inde true olan bool
    private bool itemlerEklendi = false;

    // al�nan item'in ad�n� PlayerMovement() script'inden alan string.
    private string collision_name;

    //timer
    public double time;

    // Start is called before the first frame update
    void Start()
    {
        rb = tuccar.GetComponent<Rigidbody2D>();
        animator = tuccar.GetComponent<Animator>();
        location = 3;
        movement.x = 0;
        movement.y = -1;
        hafizaslot[0] = 5;
        hafizaslot[1] = 5;
        hafizaslot[2] = 5;
        time = Time.time;
    }

    // Update is called once per frame
    void Update()
    {
        time += Time.deltaTime;

        // T�ccar belirtilen konuma geldikten sonra shop ekran� olu�uyor.
        if (tuccar.transform.position.y <= 3.5)
        {
            animator.SetBool("waiting", true);
            Animasyon();
            if (itemlerEklendi == false)
            {
                ShopWindow.SetActive(true);
                ShopSistemi();
                itemlerEklendi = true;
            }
            SatinAlim();

        }
    }
    private void FixedUpdate()
    {
        if (this.gameObject.GetComponent<TimerBar>().tuccar == true)
        {
            // Tuccar aktif ediliyor ve belirtilen konuma ilerliyor.
            tuccar.SetActive(true);

            if (tuccar.transform.position.y > 3.5)
            {
                rb.MovePosition(rb.position + movement * 2f * Time.fixedDeltaTime);
            }

        }
        SatinAlim();
    }

    // T�ccar�n animasyonlar�
    private void Animasyon()
    {
        location = this.gameObject.GetComponent<TimerBar>().player_x_konum;
        if (tuccar.transform.position.x - location > 1.5)
        {
            animator.SetInteger("location", 0);
        }
        else if (tuccar.transform.position.x - location < -1.5)
        {
            animator.SetInteger("location", 2);
        }
        else
        {
            animator.SetInteger("location", 1);
        }
    }

    // Shop itemlerinin yerle�tirildi�i k�s�m
    private void ShopSistemi()
    {
        // �nceden al�nan item varsa onun bir sonraki itemini se�en k�s�m
        foreach(Transform child in soldItems.transform)
        {
            // 1.Slot i�in
            for (i = 0; i < 2; i++)
            {
                if (child.name == sellingItemsSlot1[i].name)
                {
                    hafizaslot[0] = i;
                    break;
                }
            }

            // 2.Slot i�in
            for(i = 0; i < 3; i++)
            {
                if (child.name == sellingItemsSlot2[i].name)
                {
                    hafizaslot[1] = i;
                    break;
                }
            }

            // 3.Slot i�in
            for (i = 0; i < 3; i++)
            {
                if (child.name == sellingItemsSlot3[i].name)
                {
                    hafizaslot[2] = i;
                    break;
                }
            }
        }

        // �nceden al�nan item varsa onun bir sonraki itemini koyan k�s�m
        // 1.Slot i�in
        position.x = -0.43f;
        position.y = 2.29f;
        if( hafizaslot[0] == 1)
        {
            GameObject Slot1 = Instantiate(sellingItemsSlotAll, ShopWindow.transform);
            Slot1.transform.position = position;
            priceTexts[0].text = "10";
        }
        else if (hafizaslot[0] == 5)
        {
            GameObject Slot1 = Instantiate(sellingItemsSlot1[0], ShopWindow.transform);
            Slot1.transform.position = position;
            priceTexts[0].text = "8";
        }
        else
        {
            GameObject Slot1 = Instantiate(sellingItemsSlot1[hafizaslot[0] + 1], ShopWindow.transform);
            Slot1.transform.position = position;
            priceTexts[0].text = "8";

        }

        // 2.Slot i�in
        position.x = 0.77f;
        position.y = 2.29f;
        transform.position = position;
        if (hafizaslot[1] == 2)
        {
            GameObject Slot2 = Instantiate(sellingItemsSlotAll, ShopWindow.transform);
            Slot2.transform.position = position;
            priceTexts[1].text = "10";

        }
        else if (hafizaslot[1] == 5)
        {
            GameObject Slot2 = Instantiate(sellingItemsSlot2[0], ShopWindow.transform);
            Slot2.transform.position = position;
            priceTexts[1].text = "10";

        }
        else
        {
            GameObject Slot2 = Instantiate(sellingItemsSlot2[hafizaslot[1] + 1], ShopWindow.transform);
            Slot2.transform.position = position;
            priceTexts[1].text = "10";

        }

        // 3.Slot i�in
        position.x = 1.87f;
        position.y = 2.29f;
        transform.position = position;
        if (hafizaslot[2] == 2)
        {
            GameObject Slot3 = Instantiate(sellingItemsSlotAll, ShopWindow.transform);
            Slot3.transform.position = position;
            priceTexts[2].text = "10";
        }
        else if (hafizaslot[2] == 5)
        {
            GameObject Slot3 = Instantiate(sellingItemsSlot3[0], ShopWindow.transform);
            Slot3.transform.position = position;
            priceTexts[2].text = "15";
        }
        else
        {
            GameObject Slot3 = Instantiate(sellingItemsSlot3[hafizaslot[2] + 1], ShopWindow.transform);
            Slot3.transform.position = position;
            priceTexts[2].text = "15";

        }
    }

    private void SatinAlim()
    {
        // Oyuncu e�yay� se�ti�inde se�ilen e�yan�n �zelli�inin eklendi�i k�s�m
        collision_name = player.GetComponent<PlayerMovement>().sellingItem.Substring(0, player.GetComponent<PlayerMovement>().sellingItem.IndexOf("_"));
        if (collision_name == "Health")
        {
            collision_name = "null_1";
            SaveObject.singleton.HealthUp();
            SatinAlindi();
            player.GetComponent<PlayerMovement>().sellingItem = "null_1";
        }
        else if(collision_name == "Boot")
        {
            collision_name = "null_1";
            SaveObject.singleton.SetCurrentBoot();
            player.GetComponent<PlayerMovement>().bootSpeed += 0.225f;
            SatinAlindi();
            player.GetComponent<PlayerMovement>().sellingItem = "null_1";
        }
        else if (collision_name == "Gun")
        {
            collision_name = "null_1";
            SaveObject.singleton.SetCurrentGun();
            player.GetComponent<Shoot>().gunShootingSpeed -= 0.15f;
            SatinAlindi();
            player.GetComponent<PlayerMovement>().sellingItem = "null_1";
        }
        else if (collision_name == "Ammo")
        {
            collision_name = "null_1";
            SaveObject.singleton.SetCurrentAmmo();
            player.GetComponent<Shoot>().bulletPower += 1;
            SatinAlindi();
            player.GetComponent<PlayerMovement>().sellingItem = "null_1";
        }
    }

    // �tem al�nd�ktan sonra Shop'un silindi�i k�s�m
    private void SatinAlindi()
    {
        ShopWindow.SetActive(false);
        for(i = 0; i < 3; i++)
        {
            priceTexts[i].enabled = false;
        }
    }
}
