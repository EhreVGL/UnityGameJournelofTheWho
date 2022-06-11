using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TimerBar : MonoBehaviour
{
    // level süresi
    private int time = 30;
    private float time_count;
    private int instant_time;

    // TimerBar'ýn Transform bilgisini alýr.
    [SerializeField] private Transform transform;

    // Player ile ilgili kýsmýn deðiþkenleri.
    // Oyuncudan isDamage deðerini almak için gerekli
    [SerializeField] private GameObject player;
    // player'dan isDamage bilgisine eþitlenir.
    private bool isPlayerTakeDamage = false;
    // time artýþýný fixlemek için eklenen countdown
    private float countdownPlayerDamage = 0;
    // zaman artýþ miktarýný gösteren deðiþken
    private int time_increment = 15;

    // Düþman Yaratma kýsmý için
    // private bool duration = false;
    // respawnerlarýn bulunduðu array
    [SerializeField] private GameObject[] Respawner;
    // düþman prefabriðinin bulunduðu yer. Birden fazla düþman olduðu zaman burada prefabrikler gönderip içlerinde oran uygulayacaðýz.
    [SerializeField] private GameObject[] enemyPrefab;
    // Kaç tane düþman çýkacaðýný zarlar.
    int random2;
    // hangi spawner'da spawn olacaðýný belirliyor.
    int randomNumber;
    // hangi enemy'i spawn edeceðini belirliyor.
    int randomEnemy;
    // üst üste spawn olmalar yaþanmasýn diye hafýza tutuluyor.
    int[] respawner_hafiza = new int[12];

    // Level Sonu ile ilgili deðiþkenler
    // Sahne TileMap özelliklerinin alýndýðý gameObject.
    [SerializeField] private GameObject tilemapObject;
    [SerializeField] private GameObject nextSceneArrow;
    private float timer_nextSceneArrow = 1;
    private float timer2_nextSceneArrow = 1;

    // Tuccarla Alakalý bool (Tuccar olacak olan levellarda kullanýlýr.)
    [HideInInspector] public bool tuccar = false;
    [HideInInspector] public float player_x_konum;


    // Start is called before the first frame update
    private void Start()
    {
        // time_count'u baþlangýçta time kadar yapar.
        time_count = time;
        instant_time = time;
    }

    // Update is called once per frame
    void Update()
    {

    }
    private void FixedUpdate()
    {

        // Bu kýsým isPlayerTakeDamage deðeri yavaþ güncellendiði için eklendi. isPlayerTakeDamage true olduðu zaman 1 saniyelik zaman aþýmýna giriyor ve tekrar engelleniyor.
        if (countdownPlayerDamage <= 0)
        {
            //isPlayerTakeDamage deðiþkeni player gameobject'inden alýnýyor.
            isPlayerTakeDamage = player.GetComponent<PlayerMovement>().isDamage;
        }
        else
        {
            countdownPlayerDamage -= Time.fixedDeltaTime;
        }
        // isPlayerTakeDamage true sorgusu alýnýyor. countdownPlayerDamage deðiþkeni bekleme için ayarlanýyor ve gerekli diðer zaman iþlemleri yapýlýyor.
        if (isPlayerTakeDamage == true)
        {
            countdownPlayerDamage = 1;
            isPlayerTakeDamage = false;
            if (time_count + time_increment >= time)
            {
                time_count = time;
                instant_time = time;
            }
            else
            {
                time_count += time_increment;
                instant_time += time_increment;
            }
            transform.localScale = new Vector3(time_count * 17 / time, 0.34f, 1);
            transform.localPosition = new Vector3((time_count * 17 / time / 2) - 8.46f, 9.11f, 0);
        }
        // 100'den (time'dan) geriye sayýlýyor. Her seferinde yeþil bar kýsaltýlýyor.
        if (time_count > 0)
        {
            time_count -= Time.fixedDeltaTime;
            transform.localScale = new Vector3(time_count * 17 / time, 0.34f, 1);
            transform.localPosition = new Vector3((time_count * 17 / time / 2) - 8.46f, 9.11f, 0);

            // Bu kýsým Düþman oluþumunu sayar. Her 5 saniyede bir aktif olur.
            if ((int)time_count < instant_time)
            {
                instant_time = (int)time_count;
                if (instant_time % 5 == 0)
                {
                    random2 = Random.Range(4, 9);
                    CreateEnemy();
                }
            }
            player.GetComponent<PlayerMovement>().scene_collide = false;
        }
        else
        {
            //time_count sýfýrlandýðýnda time'a tekrar eþitlenip TimeBar eski haline getiriliyor.
            //time_count = time;
            //instant_time = time;
            transform.localScale = new Vector3(17, 0.34f, 1);
            transform.localPosition = new Vector3((17 / 2) - 8f, 9.11f, 1);

            // Spikeball'larýn caný 1'e düþürülür.

            if (GameObject.FindGameObjectsWithTag("Enemies").Length == 0)
            {
                tuccar = true;
                player_x_konum = player.transform.transform.position.x;
                SahneGecis();
            }
        }
    }

    // Düþman yaratma fonksiyonu.
    private void CreateEnemy()
    {
        //respawner_hafiza'yý sýfýrlar.
        for (int j = 0; j < 12; j++) { respawner_hafiza[j] = 0; }
        //random2 adet düþman yaratýr.
        for (int i = 0; i < random2; i++)
        {
            //hangi spawn noktasýnda düþman oluþacaðýný zarlar.
            randomNumber = Random.Range(0, 12);
            randomEnemy = Random.Range(0, 5);
            //hafýzayý tarar.
            if (respawner_hafiza[randomNumber] == 1)
            {
                i--;
                continue;
            }
            else
            {
                respawner_hafiza[randomNumber] = 1;
                //düþmaný seçilen spawn noktasýnda yaratýr.
                GameObject Enemy = Instantiate(enemyPrefab[randomEnemy], Respawner[randomNumber].transform.position, Respawner[randomNumber].transform.rotation);

            }
        }
    }

    private void SahneGecis()
    {
        tilemapObject.transform.GetChild(3).gameObject.SetActive(true);

        if (timer_nextSceneArrow > 0)
        {
            timer_nextSceneArrow -= Time.fixedDeltaTime;
            nextSceneArrow.SetActive(true);
        }
        else if (timer2_nextSceneArrow > 0)
        {
            timer2_nextSceneArrow -= Time.fixedDeltaTime;
            nextSceneArrow.SetActive(false);
        }
        else
        {
            timer_nextSceneArrow = 1;
            timer2_nextSceneArrow = 0.5f;
        }

        if(player.GetComponent<PlayerMovement>().scene_collide == true)
        {
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
        }

    }
}
