using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TimerBar : MonoBehaviour
{
    // level s�resi
    private int time = 30;
    private float time_count;
    private int instant_time;

    // TimerBar'�n Transform bilgisini al�r.
    [SerializeField] private Transform transform;

    // Player ile ilgili k�sm�n de�i�kenleri.
    // Oyuncudan isDamage de�erini almak i�in gerekli
    [SerializeField] private GameObject player;
    // player'dan isDamage bilgisine e�itlenir.
    private bool isPlayerTakeDamage = false;
    // time art���n� fixlemek i�in eklenen countdown
    private float countdownPlayerDamage = 0;
    // zaman art�� miktar�n� g�steren de�i�ken
    private int time_increment = 15;

    // D��man Yaratma k�sm� i�in
    // private bool duration = false;
    // respawnerlar�n bulundu�u array
    [SerializeField] private GameObject[] Respawner;
    // d��man prefabri�inin bulundu�u yer. Birden fazla d��man oldu�u zaman burada prefabrikler g�nderip i�lerinde oran uygulayaca��z.
    [SerializeField] private GameObject[] enemyPrefab;
    // Ka� tane d��man ��kaca��n� zarlar.
    int random2;
    // hangi spawner'da spawn olaca��n� belirliyor.
    int randomNumber;
    // hangi enemy'i spawn edece�ini belirliyor.
    int randomEnemy;
    // �st �ste spawn olmalar ya�anmas�n diye haf�za tutuluyor.
    int[] respawner_hafiza = new int[12];

    // Level Sonu ile ilgili de�i�kenler
    // Sahne TileMap �zelliklerinin al�nd��� gameObject.
    [SerializeField] private GameObject tilemapObject;
    [SerializeField] private GameObject nextSceneArrow;
    private float timer_nextSceneArrow = 1;
    private float timer2_nextSceneArrow = 1;

    // Tuccarla Alakal� bool (Tuccar olacak olan levellarda kullan�l�r.)
    [HideInInspector] public bool tuccar = false;
    [HideInInspector] public float player_x_konum;


    // Start is called before the first frame update
    private void Start()
    {
        // time_count'u ba�lang��ta time kadar yapar.
        time_count = time;
        instant_time = time;
    }

    // Update is called once per frame
    void Update()
    {

    }
    private void FixedUpdate()
    {

        // Bu k�s�m isPlayerTakeDamage de�eri yava� g�ncellendi�i i�in eklendi. isPlayerTakeDamage true oldu�u zaman 1 saniyelik zaman a��m�na giriyor ve tekrar engelleniyor.
        if (countdownPlayerDamage <= 0)
        {
            //isPlayerTakeDamage de�i�keni player gameobject'inden al�n�yor.
            isPlayerTakeDamage = player.GetComponent<PlayerMovement>().isDamage;
        }
        else
        {
            countdownPlayerDamage -= Time.fixedDeltaTime;
        }
        // isPlayerTakeDamage true sorgusu al�n�yor. countdownPlayerDamage de�i�keni bekleme i�in ayarlan�yor ve gerekli di�er zaman i�lemleri yap�l�yor.
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
        // 100'den (time'dan) geriye say�l�yor. Her seferinde ye�il bar k�salt�l�yor.
        if (time_count > 0)
        {
            time_count -= Time.fixedDeltaTime;
            transform.localScale = new Vector3(time_count * 17 / time, 0.34f, 1);
            transform.localPosition = new Vector3((time_count * 17 / time / 2) - 8.46f, 9.11f, 0);

            // Bu k�s�m D��man olu�umunu sayar. Her 5 saniyede bir aktif olur.
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
            //time_count s�f�rland���nda time'a tekrar e�itlenip TimeBar eski haline getiriliyor.
            //time_count = time;
            //instant_time = time;
            transform.localScale = new Vector3(17, 0.34f, 1);
            transform.localPosition = new Vector3((17 / 2) - 8f, 9.11f, 1);

            // Spikeball'lar�n can� 1'e d���r�l�r.

            if (GameObject.FindGameObjectsWithTag("Enemies").Length == 0)
            {
                tuccar = true;
                player_x_konum = player.transform.transform.position.x;
                SahneGecis();
            }
        }
    }

    // D��man yaratma fonksiyonu.
    private void CreateEnemy()
    {
        //respawner_hafiza'y� s�f�rlar.
        for (int j = 0; j < 12; j++) { respawner_hafiza[j] = 0; }
        //random2 adet d��man yarat�r.
        for (int i = 0; i < random2; i++)
        {
            //hangi spawn noktas�nda d��man olu�aca��n� zarlar.
            randomNumber = Random.Range(0, 12);
            randomEnemy = Random.Range(0, 5);
            //haf�zay� tarar.
            if (respawner_hafiza[randomNumber] == 1)
            {
                i--;
                continue;
            }
            else
            {
                respawner_hafiza[randomNumber] = 1;
                //d��man� se�ilen spawn noktas�nda yarat�r.
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
