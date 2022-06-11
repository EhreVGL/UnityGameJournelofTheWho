using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossProperties : MonoBehaviour
{
    private GameObject player;
    private Rigidbody2D rb;
    private Animator animator;
    [HideInInspector] public int health;
    private int health_hafiza = 150;
    private GameObject deathPrefab;
    [SerializeField] private GameObject talk;
    // Orc öldüðünde düþüreceði item'lar ile ilgili deðiþkenler.
    [SerializeField] private GameObject Items;
    [SerializeField] private int ItemRandom = 2;
    // Mermi prefab'ý
    [SerializeField] private GameObject bulletPrefab;
    private float bulletForce = 20f;
    private float bulletForce_hafiza = 20f;
    private float bullet_rate_timer;
    private float bullet_rate_timer_hafiza = 0.25f;
    private int mermi_modu_degisim_sayac = 5;
    private int mermi_modu_degisim_sayac2 = 5;
    private Vector3 bullet_movement2;
    // Ýlk konuþma sahnesi için timer
    private float talking_timer = 5;

    // Hangi duvara dayanacak hesabý.
    private Vector2 duvar_hesap;
    // Ýlerleme Yönü
    private Vector2 movement;
    // Mermi atýþ yönü
    private Vector3 bullet_movement;
    // Hesabý her seferinde tek bir kere yapar. Her düþman spawn ettikten sonra tekrar false olur.
    private bool duvar_hesap_bool= false;
    // Fector'un hýzý.
    private float moveSpeed = 2f;



    // Ýkinci Mekanik Deðiþkenleri
    private bool isSpawnEnemies = false;
    private Vector2 spawnNoktasi;
    private Vector2 movement2;
    [SerializeField] private GameObject[] Enemies;
    private int whichEnemies = 0;
    private bool spawning = false;
    private Vector3 spawn_distance;
    private float timer_spawning;
    private int timer_spawning_hafiza = 5;

    private void Start()
    {
        deathPrefab = Resources.Load("Death") as GameObject;
        rb = gameObject.GetComponent<Rigidbody2D>();
        animator = gameObject.GetComponent<Animator>();
        health = health_hafiza;
        bullet_rate_timer = bullet_rate_timer_hafiza;
        spawnNoktasi.x = 1;
        spawnNoktasi.y = -1;
        timer_spawning = timer_spawning_hafiza;
    }
    // Update is called once per frame
    void Update()
    {
        player = GameObject.Find("Oyuncu");
    }
    private void FixedUpdate()
    {
        talking_timer -= Time.fixedDeltaTime;
        bullet_rate_timer -= Time.fixedDeltaTime;

        if (talking_timer > 0)
        {

        }
        else
        {
            if(health % 30 == 0 || isSpawnEnemies==true)
            {
                isSpawnEnemies=true;
                SpawnEnemies();
            }
            else
            {
                talk.SetActive(false);
                this.gameObject.GetComponent<Renderer>().enabled = true;
                spawning = false;
                if(isSpawnEnemies == false)
                {
                    animator.SetBool("spawnEnemies", false);
                    DuvaraGitme();
                    if (bullet_rate_timer <= 0)
                    {
                        Shooting();
                    }
                }
            }

        }

    }

    private void DuvaraGitme()
    {
        if(duvar_hesap_bool == false)
        {
            duvar_hesap.x = this.gameObject.transform.position.x - player.transform.position.x;
            duvar_hesap.y = this.gameObject.transform.position.y - player.transform.position.y;
            duvar_hesap_bool = true;

            if (Mathf.Abs(duvar_hesap.x) > Mathf.Abs(duvar_hesap.y))
            {
                if (this.gameObject.transform.position.x > player.transform.position.x)
                {
                    movement.x = 1;
                    movement.y = 0;

                    bullet_movement.x = -1;
                    bullet_movement.y = 0;
                }
                else
                {
                    movement.x = -1;
                    movement.y = 0;

                    bullet_movement.x = 1;
                    bullet_movement.y = 0;
                }
            }
            else
            {
                if (this.gameObject.transform.position.y > player.transform.position.y)
                {
                    movement.x = 0;
                    movement.y = 1;

                    bullet_movement.x = 0;
                    bullet_movement.y = -1;
                }
                else
                {
                    movement.x = 0;
                    movement.y = -1;

                    bullet_movement.x = 0;
                    bullet_movement.y = 1;
                }

            }

        }
        rb.MovePosition(rb.position + movement * moveSpeed * Time.fixedDeltaTime);
    }

    private void Shooting()
    {
        mermi_modu_degisim_sayac--;
        if(mermi_modu_degisim_sayac > 0)
        {
            bullet_rate_timer = bullet_rate_timer_hafiza;
            bulletForce = bulletForce_hafiza;
            GameObject bullet = Instantiate(bulletPrefab, (this.gameObject.transform.position + (bullet_movement * 1f)), (this.gameObject.transform.rotation));
            Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
            rb.AddForce(bullet_movement * bulletForce * 0.88f, ForceMode2D.Impulse);
        }
        else if (mermi_modu_degisim_sayac2 > 0)
        {
            mermi_modu_degisim_sayac2--;
            bullet_rate_timer = Random.Range(bullet_rate_timer_hafiza + 0.1f, bullet_rate_timer_hafiza + 0.3f);
            bulletForce = Random.Range(bulletForce_hafiza - 2, bulletForce_hafiza + 2);
            bullet_movement2 = bullet_movement;
            if(bullet_movement2.x != 0)
            {
                bullet_movement2.y = Random.Range(-0.66f, 0.66f);
            }
            else
            {
                bullet_movement2.x = Random.Range(-0.66f, 0.66f);
            }
            GameObject bullet = Instantiate(bulletPrefab, (this.gameObject.transform.position + (bullet_movement2 * 1f)), (this.gameObject.transform.rotation));
            Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
            rb.AddForce(bullet_movement2 * bulletForce * 0.88f, ForceMode2D.Impulse);
        }
        else
        {
            mermi_modu_degisim_sayac = 5;
            mermi_modu_degisim_sayac2 = 5;
        }

    }

    private void SpawnEnemies()
    {
        movement2.x = spawnNoktasi.x - transform.position.x;
        movement2.y = spawnNoktasi.y - transform.position.y;

        timer_spawning -= Time.fixedDeltaTime;

        if (spawnNoktasi.x - transform.position.x == 0)
        {
            movement2.x = 0;
        }
        else
        {
            movement2.x = movement2.x / Mathf.Abs(movement2.x);
        }
        if (spawnNoktasi.y - transform.position.y == 0)
        {
            movement2.y = 0;
        }
        else
        {
            movement2.y = movement2.y / Mathf.Abs(movement2.y);
        }

        if ((int)(spawnNoktasi.x - transform.position.x) == 0 && (int)(spawnNoktasi.y - transform.position.y) == 0)
        {
            this.gameObject.GetComponent<Renderer>().enabled = false;
            if (timer_spawning <= 0)
            {
                if (spawning == false)
                {
                    spawning = true;
                    if (whichEnemies == 0)
                    {
                        spawn_distance.x = 1;
                        spawn_distance.y = 0;
                        GameObject enemy = Instantiate(Enemies[0], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
                        spawn_distance.x = -1;
                        spawn_distance.y = 0;
                        GameObject enemy2 = Instantiate(Enemies[0], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
                        spawn_distance.x = 0;
                        spawn_distance.y = 1;
                        GameObject enemy3 = Instantiate(Enemies[0], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
                        spawn_distance.x = 0;
                        spawn_distance.y = -1;
                        GameObject enemy4 = Instantiate(Enemies[0], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));

                        whichEnemies++;
                    }
                    else if (whichEnemies == 1)
                    {
                        spawn_distance.x = 1;
                        spawn_distance.y = 0;
                        GameObject enemy = Instantiate(Enemies[0], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
                        spawn_distance.x = -1;
                        spawn_distance.y = 0;
                        GameObject enemy2 = Instantiate(Enemies[0], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
                        spawn_distance.x = 0;
                        spawn_distance.y = 1;
                        GameObject enemy3 = Instantiate(Enemies[1], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
                        spawn_distance.x = 0;
                        spawn_distance.y = -1;
                        GameObject enemy4 = Instantiate(Enemies[1], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));

                        whichEnemies++;
                    }
                    else if (whichEnemies == 2)
                    {
                        spawn_distance.x = 1;
                        spawn_distance.y = 0;
                        GameObject enemy = Instantiate(Enemies[0], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
                        spawn_distance.x = -1;
                        spawn_distance.y = 0;
                        GameObject enemy2 = Instantiate(Enemies[0], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
                        spawn_distance.x = 0;
                        spawn_distance.y = 1;
                        GameObject enemy3 = Instantiate(Enemies[2], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
                        spawn_distance.x = 0;
                        spawn_distance.y = -1;
                        GameObject enemy4 = Instantiate(Enemies[2], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));

                        whichEnemies++;
                    }
                    else if (whichEnemies == 3)
                    {
                        spawn_distance.x = 1;
                        spawn_distance.y = 0;
                        GameObject enemy = Instantiate(Enemies[2], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
                        spawn_distance.x = -1;
                        spawn_distance.y = 0;
                        GameObject enemy2 = Instantiate(Enemies[2], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
                        spawn_distance.x = 0;
                        spawn_distance.y = 1;
                        GameObject enemy3 = Instantiate(Enemies[2], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
                        spawn_distance.x = 0;
                        spawn_distance.y = -1;
                        GameObject enemy4 = Instantiate(Enemies[2], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));

                        whichEnemies++;
                    }
                    else
                    {

                    }
                    isSpawnEnemies = false;
                    timer_spawning = timer_spawning_hafiza;
                    duvar_hesap_bool = false;
                }
            }
        }
        else
        {
            if (movement2.x != 0 && movement2.y != 0)
            {
                rb.MovePosition(rb.position + movement2 * (moveSpeed / 0.835f) * Time.fixedDeltaTime);
            }
            else
            {
                rb.MovePosition(rb.position + movement2 * moveSpeed * Time.fixedDeltaTime);
            }
        }
    }



    private void OnCollisionEnter2D(Collision2D collision)
    {
        // Eðer çarpýþma mermiyle mi gerçekleþti sorgusu yapýlýyor.
        if (collision.gameObject.tag == "bullet")
        {
            // Mermiyle çarpýþtýysa caný azalýyor ve hasar animasyonuna giriyor.
            health -= collision.gameObject.GetComponent<Bullet_Collider>().bulletPower;
            // Çarpan mermi siliniyor.
            Destroy(collision.gameObject);
            // Caný sýfýrlandýysa ölüm animasyonu giriyor ve siliniyor.
            if (health <= 0)
            {
                GameObject death = Instantiate(deathPrefab, transform.position, transform.rotation);
                this.gameObject.SetActive(false);
                droppingItem();
            }
        }
    }



    private void droppingItem()
    {
        if (ItemRandom == 2)
        {
            GameObject Item = Instantiate(Items, this.gameObject.transform.position, this.gameObject.transform.rotation);
        }
    }
}
