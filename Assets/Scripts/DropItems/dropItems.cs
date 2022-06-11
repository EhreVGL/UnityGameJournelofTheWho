using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class dropItems : MonoBehaviour
{
    // Envanter ile ilgili
    // PlayerMovement script'inden collision olan itemi alan deðiþken.
    [HideInInspector] public GameObject collision_item;
    // Envanterin dolu olduðunu belirten deðiþken.
    private bool envanter = false;
    // collision_item için boþ gameobject. Olmazsa hata alýnýyor.
    private GameObject null_inventory;
    // Oyundaki Envanter görselinin bulunduðu yer.
    [SerializeField] private GameObject Inventory;
   
    // space'e basýldýðýnda gelen deðiþken.
    [HideInInspector] public bool UseInSlot = false;


    // COFFEE
    // item'in Coffee olup olmadýðýný tutan deðiþken
    private bool isCoffee = false;
    // Coffee timer'ý
    private float timer_Coffee;
    private int timer_Coffee_Hafiza = 8;
    // Coffee'nin hareket hýzlandýrma çarpaný
    [HideInInspector] public float movement_speed_multiplier = 1;


    // HEAVYMACHINEGUN
    // item'in HeavyMachineGun olup olmadýðýný tutan deðiþken
    private bool isHeavyMachineGun = false;
    // HeavyMachineGun timer'ý
    private float timer_HeavyMachineGun;
    private int timer_HeavyMachineGun_Hafiza = 6;
    // HeavyMachineGun'nin hareket hýzlandýrma çarpaný
    [HideInInspector] public float shooting_speed = 1;

    // SHOTGUN
    // item'in HeavyMachineGun olup olmadýðýný tutan deðiþken
    [HideInInspector] public bool isShotgun = false;
    // HeavyMachineGun timer'ý
    private float timer_Shotgun;
    private int timer_Shotgun_Hafiza = 6;
    [HideInInspector] public float shotgun_Shooting_Speed = 1;


    // WAGONWHEEL
    // item'in HeavyMachineGun olup olmadýðýný tutan deðiþken
    [HideInInspector] public bool isWagonWheel = false;
    // HeavyMachineGun timer'ý
    private float timer_WagonWheel;
    private int timer_WagonWheel_Hafiza = 6;

    // SHERIFFBADGE
    // item'in SheriffBadge olup olmadýðýný tutan deðiþken
    [HideInInspector] public bool isSheriffBadge = false;
    // SheriffBadge timer'ý
    private float timer_SheriffBadge;
    private int timer_SheriffBadge_Hafiza = 8;
    // SheriffBadge'nin hareket hýzlandýrma çarpaný
    [HideInInspector] public float SheriffBadge_movement_speed_multiplier = 1;
    [HideInInspector] public float SheriffBadge_Shooting_Speed = 1;
    
    // SCREENBOMB
    [HideInInspector] public bool isScreenBomb = false;
    [SerializeField] private GameObject deathPrefab;

    // SMOKEBOMB
    // item'in SmokeBomb olup olmadýðýný tutan deðiþken
    [HideInInspector] public bool isSmokeBomb = false;
    private int[] new_position;
    // SmokeBomb timer'ý
    private float timer_SmokeBomb;
    private int timer_SmokeBomb_Hafiza = 2;
    private Vector3 new_position_loc;
    private bool checkResult = true;
    private bool checkTeleporting = false;

    // TOMBSTONE
    [HideInInspector] public bool isTombstone = false;
    // Tombstone timer'ý
    private float timer_Tombstone;
    private int timer_Tombstone_Hafiza = 4;
    

    // Start is called before the first frame update
    void Start()
    {
        // timerlarýn set ediliþi.
        timer_Coffee = timer_Coffee_Hafiza;
        timer_HeavyMachineGun = timer_HeavyMachineGun_Hafiza;
        timer_Shotgun = timer_Shotgun_Hafiza;
        timer_WagonWheel = timer_WagonWheel_Hafiza;
        timer_SheriffBadge = timer_SheriffBadge_Hafiza;
        timer_SmokeBomb = timer_SmokeBomb_Hafiza;
        timer_Tombstone = timer_Tombstone_Hafiza;
        // Envantere boþ bir gameobject ekliyoruz ve bu gameobject'i collision_item ile eþitliyoruz. Aksi halde collision_item tanýmsýz
        // diye hata veriyor.
        null_inventory = new GameObject("null_Inventory");
        null_inventory.transform.parent = Inventory.transform;
        null_inventory.transform.position = Inventory.transform.position;
        collision_item = null_inventory;
    }

    // Update is called once per frame
    void Update()
    {
        // Oyuncunun çarpýþtýðý itemi envantere mi koyacaðýz yoksa çalýþtýracak mýyýz sorgulama.
        if(collision_item.name != "null_Inventory" && envanter == false)
        {
            envanter = true;
            EnvantereEkleme();
        }
        else
        {
            // collision_item envanterdekinden farklý ise item'i kullanmasý saðlanýr.
            foreach (Transform child in Inventory.transform)
            {
                if (child.name != "null_Inventory")
                {
                    if (collision_item.name != child.name)
                    {
                        UseItem();
                    }
                }
            }
        }

        // Bu kýsým playerMovement scriptinden Space'e basýldýðý zaman true'ya dönüþtürülüyor ve koþul saðlanýyor. 
        // Envanterde hangi item varsa onun deðeri true yapýlýyor.
        if (UseInSlot == true)
        {
            UseInSlot = false;
            // Envanterdeki item'ý buluyoruz.
            foreach (Transform child in Inventory.transform)
            {
                if (child.name != "null_Inventory")
                {
                    // Coffee ise Coffee bool'unu true yapar.
                    if (child.name.Substring(0, child.name.IndexOf("_")) == "Coffee")
                    {
                        isCoffee = true;
                    }
                    // HeavyMachineGun ise HeavyMachineGun bool'unu true yapar.
                    if (child.name.Substring(0, child.name.IndexOf("_")) == "HeavyMachineGun")
                    {
                        isHeavyMachineGun = true;
                    }
                    // Shotgun ise Shotgun bool'unu true yapar.
                    if (child.name.Substring(0, child.name.IndexOf("_")) == "Shotgun")
                    {
                        isShotgun = true;
                    }
                    // WagonWheel ise WagonWheel bool'unu true yapar.
                    if (child.name.Substring(0, child.name.IndexOf("_")) == "WagonWheel")
                    {
                        isWagonWheel = true;
                    }
                    // SheriffBadge ise SheriffBadge bool'unu true yapar.
                    if (child.name.Substring(0, child.name.IndexOf("_")) == "SheriffBadge")
                    {
                        isSheriffBadge = true;
                    }
                    // ScreenBomb ise ScreenBomb bool'unu true yapar.
                    if (child.name.Substring(0, child.name.IndexOf("_")) == "ScreenBomb")
                    {
                        isScreenBomb = true;
                    }
                    // SmokeBomb ise SmokeBomb bool'unu true yapar.
                    if (child.name.Substring(0, child.name.IndexOf("_")) == "SmokeBomb")
                    {
                        isSmokeBomb = true;
                    }
                    // Tombstone ise SmokeBomb bool'unu true yapar.
                    if (child.name.Substring(0, child.name.IndexOf("_")) == "Tombstone")
                    {
                        isTombstone = true;
                    }
                    Destroy(child.gameObject);
                    
                }
            }

            collision_item = null_inventory;
            envanter = false;
        }


        // Envanterdeki item'ýn kullanýldýðý fonksiyon.
        UseItemInInventory();


    }

    // burada envantere item ekleniyor.
    private void EnvantereEkleme()
    {
        collision_item.transform.parent = Inventory.transform;
        collision_item.transform.position = Inventory.transform.position;
        collision_item = null_inventory;

        // Biriken itemler alýndýðýnda envanter boþ ise bu iþlem ile envanterin boþ kalmasý saðlanýr.
        foreach (Transform child in Inventory.transform)
        {
            if(child.name.Substring(0,child.name.IndexOf("_")) != "null")
            {
                // 1-Up ise health'ý 1 arttýrýr.
                if (child.name.Substring(0, child.name.IndexOf("_")) == "1-Up")
                {
                    Destroy(child.gameObject);
                    envanter = false;
                    SaveObject.singleton.HealthUp();
                }
                // 1Coin ise Coin'i 1 arttýrýr.
                else if (child.name.Substring(0, child.name.IndexOf("_")) == "1Coin")
                {
                    Destroy(child.gameObject);
                    envanter = false;
                    SaveObject.singleton.CoinUp(1);
                }
                // 5Coin ise Coin'i 5 arttýrýr.
                else if (child.name.Substring(0, child.name.IndexOf("_")) == "5Coin")
                {
                    Destroy(child.gameObject);
                    envanter = false;
                    SaveObject.singleton.CoinUp(5);
                }
                else
                {
                    SaveObject.singleton.SetCurrentEnvanter(child.name);
                }
            }
           
        }
    }

    // Space'e basýldýðýnda envanterin içindeki item'ý kullanmasý saðlanýr.
    private void UseItemInInventory()
    {

        // Envanterdeki kahveyse kahveyi kullan.
        if (isCoffee == true)
        {
            Coffee();
        }
        if(isHeavyMachineGun == true)
        {
            HeavyMachineGun();
        }
        if (isShotgun == true)
        {
            Shotgun();
        }
        if (isWagonWheel == true)
        {
            WagonWheel();
        }
        if (isSheriffBadge == true)
        {
            SheriffBadge();
        }
        if (isScreenBomb == true)
        {
            ScreenBomb();
        }
        if (isSmokeBomb == true)
        {
            SmokeBomb();
        }
        if (isTombstone == true)
        {
            Tombstone();
        }
    }

    // Envanter doluyken Item'ýn kullanýldýðý fonksiyon.
    // (ÞÝMDÝLÝK SADECE SÝLÝYOR.)
    private void UseItem()
    {
        
        // Envantere eklenerek kullanýlmasý saðlanýyor. Eklenen kýsým.
        collision_item.transform.parent = Inventory.transform;
        collision_item.transform.position = Inventory.transform.position;
        collision_item = null_inventory;
        // Silinen kýsým
        if(Inventory.transform.childCount > 2)
        {
            // Coffee ise Coffee bool'unu true yapar.
            if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "Coffee")
            {
                isCoffee = true;
            }
            // HeavyMachineGun ise HeavyMachineGun bool'unu true yapar.
            if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "HeavyMachineGun")
            {
                isHeavyMachineGun = true;
            }
            // Shotgun ise Shotgun bool'unu true yapar.
            if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "Shotgun")
            {
                isShotgun = true;
            }
            // WagonWheel ise WagonWheel bool'unu true yapar.
            if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "WagonWheel")
            {
                isWagonWheel = true;
            }
            // SheriffBadge ise SheriffBadge bool'unu true yapar.
            if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "SheriffBadge")
            {
                isSheriffBadge = true;
            }
            // SheriffBadge ise SheriffBadge bool'unu true yapar.
            if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "ScreenBomb")
            {
                isScreenBomb = true;
            }
            // SmokeBomb ise SmokeBomb bool'unu true yapar.
            if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "SmokeBomb")
            {
                isSmokeBomb = true;
            }
            // Tombstone ise Tombstone bool'unu true yapar.
            if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "Tombstone")
            {
                isTombstone = true;
            }
            // 1-Up ise health'ý 1 arttýrýr.
            if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "1-Up")
            {
                SaveObject.singleton.HealthUp();
            }
            // 1Coin ise Coin'i 1 arttýrýr.
            if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "1Coin")
            {
                SaveObject.singleton.CoinUp(1);
            }
            // 5Coin ise Coin'i 5 arttýrýr.
            if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "5Coin")
            {
                SaveObject.singleton.CoinUp(5);
            }
            DestroyImmediate(Inventory.transform.GetChild(2).gameObject);
        }

    }

    private void Coffee()
    {
        // timer burada bir özellik baþlatýldýðýnda o özelliðin sayacý olarak kabul ediliyor. Birden fazla item'ýn kullanýlmasý için
        // birden fazla timer gerekli.
        timer_Coffee -= Time.deltaTime;
        // Bu kýsýmda deðer deðiþtiriliyor ve timer sýfýrlanana kadar kalýyor. timer sýfýrlanýnca deðiþkenler geri alýnýyor.
        movement_speed_multiplier = 1.5f;

        if (timer_Coffee <= 0)
        {
            isCoffee = false;
            timer_Coffee = timer_Coffee_Hafiza;
            movement_speed_multiplier = 1;
        }
    }

    private void HeavyMachineGun()
    {
        // timer burada bir özellik baþlatýldýðýnda o özelliðin sayacý olarak kabul ediliyor. Birden fazla item'ýn kullanýlmasý için
        // birden fazla timer gerekli.
        timer_HeavyMachineGun -= Time.deltaTime;
        // atýþ hýzýnýn artýrýldýðý kýsým.
        shooting_speed = 0.5f;

        // deðerleri sýfýrlayan koþul.
        if (timer_HeavyMachineGun <= 0)
        {
            isHeavyMachineGun = false;
            timer_HeavyMachineGun = timer_HeavyMachineGun_Hafiza;
            shooting_speed = 1f;
        }
    }

    private void Shotgun()
    {
        // timer burada bir özellik baþlatýldýðýnda o özelliðin sayacý olarak kabul ediliyor. Birden fazla item'ýn kullanýlmasý için
        // birden fazla timer gerekli.
        timer_Shotgun -= Time.deltaTime;
        // atýþ hýzýnýn ayarlandýðý satýr.
        shotgun_Shooting_Speed = 1.33f;

        // deðerleri sýfýrlayan koþul.
        if (timer_Shotgun <= 0)
        {
            isShotgun = false;
            timer_Shotgun = timer_Shotgun_Hafiza;
            shotgun_Shooting_Speed = 1f;
        }
    }

    private void WagonWheel()
    {
        // timer burada bir özellik baþlatýldýðýnda o özelliðin sayacý olarak kabul ediliyor. Birden fazla item'ýn kullanýlmasý için
        // birden fazla timer gerekli.
        timer_WagonWheel -= Time.deltaTime;

        // deðerleri sýfýrlayan koþul.
        if (timer_WagonWheel <= 0)
        {
            isWagonWheel = false;
            timer_WagonWheel = timer_WagonWheel_Hafiza;
        }
    }

    private void SheriffBadge()
    {
        // timer burada bir özellik baþlatýldýðýnda o özelliðin sayacý olarak kabul ediliyor. Birden fazla item'ýn kullanýlmasý için
        // birden fazla timer gerekli.
        timer_SheriffBadge -= Time.deltaTime;
        // Hareket Hýzý:
        if (isCoffee == true)
        {
            SheriffBadge_movement_speed_multiplier = 1.1725f;
        }
        else
        {
            SheriffBadge_movement_speed_multiplier = 1.5f;
        }
        // Atýþ Hýzý:
        if (isHeavyMachineGun == true)
        {
            SheriffBadge_Shooting_Speed = 0.8775f;
        }
        else
        {
            SheriffBadge_Shooting_Speed = 0.5f;
        }

        // deðerleri sýfýrlayan koþul.
        if (timer_SheriffBadge <= 0)
        {
            isSheriffBadge = false;
            timer_SheriffBadge = timer_SheriffBadge_Hafiza;
            SheriffBadge_movement_speed_multiplier = 1f;
            SheriffBadge_Shooting_Speed = 1f;
        }
    }

    private void ScreenBomb()
    {
        foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
        {
            GameObject death = Instantiate(deathPrefab, enemy.transform.position, enemy.transform.rotation);
            Destroy(enemy);
        }
        isScreenBomb = false;
    }

    private void SmokeBomb()
    {
        // timer burada bir özellik baþlatýldýðýnda o özelliðin sayacý olarak kabul ediliyor. Birden fazla item'ýn kullanýlmasý için
        // birden fazla timer gerekli.
        timer_SmokeBomb -= Time.deltaTime;

        // düþmanlarý durdurmaya yarar.
        foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
        {
            if(enemy.name.Substring(0, enemy.name.IndexOf("(")) == "Orc")
            {
                enemy.GetComponent<OrcProperties>().smokebomb = true;
            }
            else if (enemy.name.Substring(0, enemy.name.IndexOf("(")) == "Spikeball")
            {
                enemy.GetComponent<SpikeballProperties>().smokebomb = true;
            }
            else if (enemy.name.Substring(0, enemy.name.IndexOf("(")) == "Ogre")
            {
                enemy.GetComponent<OgreProperties>().smokebomb = true;
            }
        }

        if (checkTeleporting == false)
        {
            // Iþýnlanacak location ayarlanýyor.
            while (checkResult == true)
            {
                new_position_loc.x = Random.Range(-6, 6);
                new_position_loc.y = Random.Range(-6, 6);
                new_position_loc.z = 0;

                checkResult = Physics2D.OverlapCircle(new_position_loc, 1);
            }
            this.gameObject.GetComponent<Transform>().position = new_position_loc;
            checkTeleporting = true;
        }

        // deðerleri sýfýrlayan koþul.
        if (timer_SmokeBomb <= 0)
        {
            isSmokeBomb = false;
            timer_SmokeBomb = timer_SmokeBomb_Hafiza;
            checkTeleporting = false;
            checkResult = true;
            // düþmanlarý hareket ettirmeye yarar.
            foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
            {
                if (enemy.name.Substring(0, enemy.name.IndexOf("(")) == "Orc")
                {
                    enemy.GetComponent<OrcProperties>().smokebomb = false;
                }
                else if (enemy.name.Substring(0, enemy.name.IndexOf("(")) == "Spikeball")
                {
                    enemy.GetComponent<SpikeballProperties>().smokebomb = false;
                }
                else if (enemy.name.Substring(0, enemy.name.IndexOf("(")) == "Ogre")
                {
                    enemy.GetComponent<OgreProperties>().smokebomb = false;
                }
            }
        }
    }

    private void Tombstone()
    {
        // timer burada bir özellik baþlatýldýðýnda o özelliðin sayacý olarak kabul ediliyor. Birden fazla item'ýn kullanýlmasý için
        // birden fazla timer gerekli.
        timer_Tombstone -= Time.deltaTime;
        // Bu kýsýmda deðer deðiþtiriliyor ve timer sýfýrlanana kadar kalýyor. timer sýfýrlanýnca deðiþkenler geri alýnýyor.
        movement_speed_multiplier = 1.5f;

        // düþmanlarý kaçýrmaya yarar.
        foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
        {
            if (enemy.name.Substring(0, enemy.name.IndexOf("(")) == "Orc")
            {
                enemy.GetComponent<OrcProperties>().player_zombie = true;
            }
            else if (enemy.name.Substring(0, enemy.name.IndexOf("(")) == "Ogre")
            {
                enemy.GetComponent<OgreProperties>().player_zombie = true;
            }
            else if (enemy.name == "Fector")
            {
                
            }
        }

        // deðerleri sýfýrlayan koþul.
        if (timer_Tombstone <= 0)
        {
            isTombstone = false;
            timer_Tombstone = timer_Tombstone_Hafiza;
            movement_speed_multiplier = 1;

            // düþmanlarý hareket ettirmeye yarar.
            foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
            {
                if (enemy.name.Substring(0, enemy.name.IndexOf("(")) == "Orc")
                {
                    enemy.GetComponent<OrcProperties>().player_zombie = false;
                }
                else if (enemy.name.Substring(0, enemy.name.IndexOf("(")) == "Ogre")
                {
                    enemy.GetComponent<OgreProperties>().player_zombie = false;
                }
            }
        }
    }
}


