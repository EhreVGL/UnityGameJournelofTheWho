using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class dropItems : MonoBehaviour
{
    // Envanter ile ilgili
    // PlayerMovement script'inden collision olan itemi alan de�i�ken.
    [HideInInspector] public GameObject collision_item;
    // Envanterin dolu oldu�unu belirten de�i�ken.
    private bool envanter = false;
    // collision_item i�in bo� gameobject. Olmazsa hata al�n�yor.
    private GameObject null_inventory;
    // Oyundaki Envanter g�rselinin bulundu�u yer.
    [SerializeField] private GameObject Inventory;
   
    // space'e bas�ld���nda gelen de�i�ken.
    [HideInInspector] public bool UseInSlot = false;


    // COFFEE
    // item'in Coffee olup olmad���n� tutan de�i�ken
    private bool isCoffee = false;
    // Coffee timer'�
    private float timer_Coffee;
    private int timer_Coffee_Hafiza = 8;
    // Coffee'nin hareket h�zland�rma �arpan�
    [HideInInspector] public float movement_speed_multiplier = 1;


    // HEAVYMACHINEGUN
    // item'in HeavyMachineGun olup olmad���n� tutan de�i�ken
    private bool isHeavyMachineGun = false;
    // HeavyMachineGun timer'�
    private float timer_HeavyMachineGun;
    private int timer_HeavyMachineGun_Hafiza = 6;
    // HeavyMachineGun'nin hareket h�zland�rma �arpan�
    [HideInInspector] public float shooting_speed = 1;

    // SHOTGUN
    // item'in HeavyMachineGun olup olmad���n� tutan de�i�ken
    [HideInInspector] public bool isShotgun = false;
    // HeavyMachineGun timer'�
    private float timer_Shotgun;
    private int timer_Shotgun_Hafiza = 6;
    [HideInInspector] public float shotgun_Shooting_Speed = 1;


    // WAGONWHEEL
    // item'in HeavyMachineGun olup olmad���n� tutan de�i�ken
    [HideInInspector] public bool isWagonWheel = false;
    // HeavyMachineGun timer'�
    private float timer_WagonWheel;
    private int timer_WagonWheel_Hafiza = 6;

    // SHERIFFBADGE
    // item'in SheriffBadge olup olmad���n� tutan de�i�ken
    [HideInInspector] public bool isSheriffBadge = false;
    // SheriffBadge timer'�
    private float timer_SheriffBadge;
    private int timer_SheriffBadge_Hafiza = 8;
    // SheriffBadge'nin hareket h�zland�rma �arpan�
    [HideInInspector] public float SheriffBadge_movement_speed_multiplier = 1;
    [HideInInspector] public float SheriffBadge_Shooting_Speed = 1;
    
    // SCREENBOMB
    [HideInInspector] public bool isScreenBomb = false;
    [SerializeField] private GameObject deathPrefab;

    // SMOKEBOMB
    // item'in SmokeBomb olup olmad���n� tutan de�i�ken
    [HideInInspector] public bool isSmokeBomb = false;
    private int[] new_position;
    // SmokeBomb timer'�
    private float timer_SmokeBomb;
    private int timer_SmokeBomb_Hafiza = 2;
    private Vector3 new_position_loc;
    private bool checkResult = true;
    private bool checkTeleporting = false;

    // TOMBSTONE
    [HideInInspector] public bool isTombstone = false;
    // Tombstone timer'�
    private float timer_Tombstone;
    private int timer_Tombstone_Hafiza = 4;
    

    // Start is called before the first frame update
    void Start()
    {
        // timerlar�n set edili�i.
        timer_Coffee = timer_Coffee_Hafiza;
        timer_HeavyMachineGun = timer_HeavyMachineGun_Hafiza;
        timer_Shotgun = timer_Shotgun_Hafiza;
        timer_WagonWheel = timer_WagonWheel_Hafiza;
        timer_SheriffBadge = timer_SheriffBadge_Hafiza;
        timer_SmokeBomb = timer_SmokeBomb_Hafiza;
        timer_Tombstone = timer_Tombstone_Hafiza;
        // Envantere bo� bir gameobject ekliyoruz ve bu gameobject'i collision_item ile e�itliyoruz. Aksi halde collision_item tan�ms�z
        // diye hata veriyor.
        null_inventory = new GameObject("null_Inventory");
        null_inventory.transform.parent = Inventory.transform;
        null_inventory.transform.position = Inventory.transform.position;
        collision_item = null_inventory;
    }

    // Update is called once per frame
    void Update()
    {
        // Oyuncunun �arp��t��� itemi envantere mi koyaca��z yoksa �al��t�racak m�y�z sorgulama.
        if(collision_item.name != "null_Inventory" && envanter == false)
        {
            envanter = true;
            EnvantereEkleme();
        }
        else
        {
            // collision_item envanterdekinden farkl� ise item'i kullanmas� sa�lan�r.
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

        // Bu k�s�m playerMovement scriptinden Space'e bas�ld��� zaman true'ya d�n��t�r�l�yor ve ko�ul sa�lan�yor. 
        // Envanterde hangi item varsa onun de�eri true yap�l�yor.
        if (UseInSlot == true)
        {
            UseInSlot = false;
            // Envanterdeki item'� buluyoruz.
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


        // Envanterdeki item'�n kullan�ld��� fonksiyon.
        UseItemInInventory();


    }

    // burada envantere item ekleniyor.
    private void EnvantereEkleme()
    {
        collision_item.transform.parent = Inventory.transform;
        collision_item.transform.position = Inventory.transform.position;
        collision_item = null_inventory;

        // Biriken itemler al�nd���nda envanter bo� ise bu i�lem ile envanterin bo� kalmas� sa�lan�r.
        foreach (Transform child in Inventory.transform)
        {
            if(child.name.Substring(0,child.name.IndexOf("_")) != "null")
            {
                // 1-Up ise health'� 1 artt�r�r.
                if (child.name.Substring(0, child.name.IndexOf("_")) == "1-Up")
                {
                    Destroy(child.gameObject);
                    envanter = false;
                    SaveObject.singleton.HealthUp();
                }
                // 1Coin ise Coin'i 1 artt�r�r.
                else if (child.name.Substring(0, child.name.IndexOf("_")) == "1Coin")
                {
                    Destroy(child.gameObject);
                    envanter = false;
                    SaveObject.singleton.CoinUp(1);
                }
                // 5Coin ise Coin'i 5 artt�r�r.
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

    // Space'e bas�ld���nda envanterin i�indeki item'� kullanmas� sa�lan�r.
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

    // Envanter doluyken Item'�n kullan�ld��� fonksiyon.
    // (��MD�L�K SADECE S�L�YOR.)
    private void UseItem()
    {
        
        // Envantere eklenerek kullan�lmas� sa�lan�yor. Eklenen k�s�m.
        collision_item.transform.parent = Inventory.transform;
        collision_item.transform.position = Inventory.transform.position;
        collision_item = null_inventory;
        // Silinen k�s�m
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
            // 1-Up ise health'� 1 artt�r�r.
            if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "1-Up")
            {
                SaveObject.singleton.HealthUp();
            }
            // 1Coin ise Coin'i 1 artt�r�r.
            if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "1Coin")
            {
                SaveObject.singleton.CoinUp(1);
            }
            // 5Coin ise Coin'i 5 artt�r�r.
            if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "5Coin")
            {
                SaveObject.singleton.CoinUp(5);
            }
            DestroyImmediate(Inventory.transform.GetChild(2).gameObject);
        }

    }

    private void Coffee()
    {
        // timer burada bir �zellik ba�lat�ld���nda o �zelli�in sayac� olarak kabul ediliyor. Birden fazla item'�n kullan�lmas� i�in
        // birden fazla timer gerekli.
        timer_Coffee -= Time.deltaTime;
        // Bu k�s�mda de�er de�i�tiriliyor ve timer s�f�rlanana kadar kal�yor. timer s�f�rlan�nca de�i�kenler geri al�n�yor.
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
        // timer burada bir �zellik ba�lat�ld���nda o �zelli�in sayac� olarak kabul ediliyor. Birden fazla item'�n kullan�lmas� i�in
        // birden fazla timer gerekli.
        timer_HeavyMachineGun -= Time.deltaTime;
        // at�� h�z�n�n art�r�ld��� k�s�m.
        shooting_speed = 0.5f;

        // de�erleri s�f�rlayan ko�ul.
        if (timer_HeavyMachineGun <= 0)
        {
            isHeavyMachineGun = false;
            timer_HeavyMachineGun = timer_HeavyMachineGun_Hafiza;
            shooting_speed = 1f;
        }
    }

    private void Shotgun()
    {
        // timer burada bir �zellik ba�lat�ld���nda o �zelli�in sayac� olarak kabul ediliyor. Birden fazla item'�n kullan�lmas� i�in
        // birden fazla timer gerekli.
        timer_Shotgun -= Time.deltaTime;
        // at�� h�z�n�n ayarland��� sat�r.
        shotgun_Shooting_Speed = 1.33f;

        // de�erleri s�f�rlayan ko�ul.
        if (timer_Shotgun <= 0)
        {
            isShotgun = false;
            timer_Shotgun = timer_Shotgun_Hafiza;
            shotgun_Shooting_Speed = 1f;
        }
    }

    private void WagonWheel()
    {
        // timer burada bir �zellik ba�lat�ld���nda o �zelli�in sayac� olarak kabul ediliyor. Birden fazla item'�n kullan�lmas� i�in
        // birden fazla timer gerekli.
        timer_WagonWheel -= Time.deltaTime;

        // de�erleri s�f�rlayan ko�ul.
        if (timer_WagonWheel <= 0)
        {
            isWagonWheel = false;
            timer_WagonWheel = timer_WagonWheel_Hafiza;
        }
    }

    private void SheriffBadge()
    {
        // timer burada bir �zellik ba�lat�ld���nda o �zelli�in sayac� olarak kabul ediliyor. Birden fazla item'�n kullan�lmas� i�in
        // birden fazla timer gerekli.
        timer_SheriffBadge -= Time.deltaTime;
        // Hareket H�z�:
        if (isCoffee == true)
        {
            SheriffBadge_movement_speed_multiplier = 1.1725f;
        }
        else
        {
            SheriffBadge_movement_speed_multiplier = 1.5f;
        }
        // At�� H�z�:
        if (isHeavyMachineGun == true)
        {
            SheriffBadge_Shooting_Speed = 0.8775f;
        }
        else
        {
            SheriffBadge_Shooting_Speed = 0.5f;
        }

        // de�erleri s�f�rlayan ko�ul.
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
        // timer burada bir �zellik ba�lat�ld���nda o �zelli�in sayac� olarak kabul ediliyor. Birden fazla item'�n kullan�lmas� i�in
        // birden fazla timer gerekli.
        timer_SmokeBomb -= Time.deltaTime;

        // d��manlar� durdurmaya yarar.
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
            // I��nlanacak location ayarlan�yor.
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

        // de�erleri s�f�rlayan ko�ul.
        if (timer_SmokeBomb <= 0)
        {
            isSmokeBomb = false;
            timer_SmokeBomb = timer_SmokeBomb_Hafiza;
            checkTeleporting = false;
            checkResult = true;
            // d��manlar� hareket ettirmeye yarar.
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
        // timer burada bir �zellik ba�lat�ld���nda o �zelli�in sayac� olarak kabul ediliyor. Birden fazla item'�n kullan�lmas� i�in
        // birden fazla timer gerekli.
        timer_Tombstone -= Time.deltaTime;
        // Bu k�s�mda de�er de�i�tiriliyor ve timer s�f�rlanana kadar kal�yor. timer s�f�rlan�nca de�i�kenler geri al�n�yor.
        movement_speed_multiplier = 1.5f;

        // d��manlar� ka��rmaya yarar.
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

        // de�erleri s�f�rlayan ko�ul.
        if (timer_Tombstone <= 0)
        {
            isTombstone = false;
            timer_Tombstone = timer_Tombstone_Hafiza;
            movement_speed_multiplier = 1;

            // d��manlar� hareket ettirmeye yarar.
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


