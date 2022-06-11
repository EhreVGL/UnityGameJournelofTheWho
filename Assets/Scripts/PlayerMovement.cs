using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class PlayerMovement : MonoBehaviour
{
    [SerializeField] private Text healthText;
    [SerializeField] private Text coinText;

    [SerializeField] private float moveSpeed = 4f;
    [HideInInspector] public int health;
    [HideInInspector] public int coin;
    [SerializeField] private Rigidbody2D rb;
    [SerializeField] private Animator animator;
    [SerializeField] private Animator animator2;
    [SerializeField] private Sprite[] sprite;
    [HideInInspector] public bool isDamage = false;
    [SerializeField] private SpriteRenderer spriteRenderer;
    [SerializeField] private GameObject deathPrefab;
    private float damageTime = 0.5f;
    private int collusion_enemy_health = 0;
    Vector2 movement;

    // Oyun sonu bool'u
    [HideInInspector] public bool scene_collide = false;

    // Shop deðiþkenleri
    [HideInInspector] public string sellingItem = "null_1";
    [HideInInspector] public float bootSpeed;
    [SerializeField] private GameObject AlinanItems;
    Vector2 AlinanItemPosition;
    [HideInInspector] public bool theEnd = false;
    private void Start()
    {
        AlinanItemPosition.x = -9.66f;
        AlinanItemPosition.y = -8.93f;
        sellingItem = "null_1;";

        bootSpeed = 0.775f + (SaveObject.singleton.GetCurrentBoot()*0.225f);
        health = SaveObject.singleton.GetCurrentHealth();
        coin = SaveObject.singleton.GetCurrentCoin();
    }

    // Update is called once per frame
    void Update()
    {
        health = SaveObject.singleton.GetCurrentHealth();
        coin = SaveObject.singleton.GetCurrentCoin();
        healthText.text = "x" + health.ToString();
        coinText.text = "x" + coin.ToString();
        moveSpeed = 4f * this.gameObject.GetComponent<dropItems>().movement_speed_multiplier * this.gameObject.GetComponent<dropItems>().SheriffBadge_movement_speed_multiplier * bootSpeed;

        // oyuncunun hareketi ayarlanýr.
        movement.x = Input.GetAxisRaw("Horizontal");
        movement.y = Input.GetAxisRaw("Vertical");
        // oyuncunun hareket yönüne göre alacaðý görüntü ayarlanýr.
        BodyImage();

        // Tombstone kýsmý
        if (this.gameObject.GetComponent<dropItems>().isTombstone == true)
        {
            this.gameObject.transform.GetChild(0).gameObject.SetActive(false);
            animator2.enabled = true;

        }
        else
        {
            this.gameObject.transform.GetChild(0).gameObject.SetActive(true);
            animator2.enabled = false;
        }
    }

    private void FixedUpdate()
    {

        // oyuncu hareket ettirilir.
        if(movement.x != 0 && movement.y != 0)
        {
            rb.MovePosition(rb.position + movement * (moveSpeed * 0.835f) * Time.fixedDeltaTime);
        }
        else
        {
            rb.MovePosition(rb.position + movement * moveSpeed * Time.fixedDeltaTime);
        }
        // oyuncunun hareket animasyonu iþlenir.
        animator.SetFloat("speed", Mathf.Abs(Input.GetAxisRaw("Horizontal")) + Mathf.Abs(Input.GetAxisRaw("Vertical")));
        // oyuncu hasar aldýysa konumu düzenlenir.
        if(damageTime >= 0.5)
        {
            if (isDamage == true)
            {
                isDamage = false;
                damageTime = 0;
                if (damageTime <= 0)
                {
                    movement.x = 0;
                    movement.y = 0;
                    transform.position = movement;
                }

            }
        }
        else
        {
            damageTime += Time.deltaTime;
        }

        if (Input.GetKey(KeyCode.Space))
        {
            this.gameObject.GetComponent<dropItems>().UseInSlot = true;
            SaveObject.singleton.UsedCurrentEnvanter();
        }

    }
    // Oyuncunun gövde görselinin ayarlandýðý kýsým. Basýlan tuþa göre görsel deðiþir.
    private void BodyImage()
    {
        // BodyImage Change
        if (Input.GetKey(KeyCode.D))
        {
            spriteRenderer.sprite = sprite[1];
        }
        else if (Input.GetKey(KeyCode.A))
        {
            spriteRenderer.sprite = sprite[3];
        }
        else if (Input.GetKey(KeyCode.W))
        {
            spriteRenderer.sprite = sprite[0];
        }
        else if (Input.GetKey(KeyCode.S))
        {
            spriteRenderer.sprite = sprite[2];
        }
        else
        {
            spriteRenderer.sprite = sprite[4];

        }
    }

    // oyuncunun çarpýþtýðý nesnelerle girilecek etkileþimlerin uygulandýðý fonksiyon.
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if(collision.gameObject.tag == "Enemies")
        {
            // Zombi itemi kullanýmdaysa çarpýlan düþmanlar ölür.
            if(this.gameObject.GetComponent<dropItems>().isTombstone == true)
            {
                GameObject death = Instantiate(deathPrefab, collision.gameObject.transform.position, collision.gameObject.transform.rotation);
                Destroy(collision.gameObject);
            }
            else
            {
                // Çarptýðý düþmanýn caný sýfýrlandýysa ama animasyondaysa hasar yememesi için sorgu oluþturuluyor.
                if(collision.gameObject.name.Substring(0, collision.gameObject.name.IndexOf("(")) == "Orc")
                {
                    collusion_enemy_health = collision.gameObject.GetComponent<OrcProperties>().health;
                    if (collusion_enemy_health > 0)
                    {
                        // Caný azalýyor ve bütün düþmanlar siliniyor.
                        
                        health = SaveObject.singleton.TakeDamage();

                        isDamage = true;
                        foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
                        {
                            if(enemy.name != "Fector")
                            {
                                GameObject death = Instantiate(deathPrefab, enemy.transform.position, enemy.transform.rotation);
                                Destroy(enemy);
                            }
                        }
                    }
                }
                else if (collision.gameObject.name.Substring(0, collision.gameObject.name.IndexOf("(")) == "Spikeball")
                {
                    collusion_enemy_health = collision.gameObject.GetComponent<SpikeballProperties>().health;
                    if (collusion_enemy_health > 0)
                    {
                        // Caný azalýyor ve bütün düþmanlar siliniyor.
                        health = SaveObject.singleton.TakeDamage();

                        isDamage = true;
                        foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
                        {
                            GameObject death = Instantiate(deathPrefab, enemy.transform.position, enemy.transform.rotation);
                            Destroy(enemy);
                        }
                    }
                }
                else if (collision.gameObject.name.Substring(0, collision.gameObject.name.IndexOf("(")) == "Ogre")
                {
                    collusion_enemy_health = collision.gameObject.GetComponent<OgreProperties>().health;
                    if (collusion_enemy_health > 0)
                    {
                        // Caný azalýyor ve bütün düþmanlar siliniyor.
                        health = SaveObject.singleton.TakeDamage();

                        isDamage = true;
                        foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
                        {
                            GameObject death = Instantiate(deathPrefab, enemy.transform.position, enemy.transform.rotation);
                            Destroy(enemy);
                        }
                    }
                }
                if (health <= 0)
                {
                    SceneManager.LoadScene(0);
                }
            }
        }
        
        if(collision.gameObject.tag == "Item")
        {
            if (collision.gameObject.name.Substring(0,collision.gameObject.name.IndexOf("_")) == "ThirdBossItem")
            {
                theEnd = true;
                Destroy(collision.gameObject);
            }
            else
            {
                this.gameObject.GetComponent<dropItems>().collision_item = collision.gameObject;
            }
        }

        // Sahne sonunda sahneler arasý geçiþe yönlendirilen collision. TimerBar script'i için.
        if(collision.gameObject.name == "SahneGecisiColide")
        {
            scene_collide = true;
        }

        // shopItem'larý ile collision yaþanýrsa collision yaþanan item'ýn adý Shop script'ine gönderilir.
        if(collision.gameObject.tag == "shopItem")
        {
            if(collision.gameObject.name.Substring(0, collision.gameObject.name.IndexOf("_")) == "Boot")
            {
                if (coin >= 8)
                {
                    coin = SaveObject.singleton.payedCoin(8);
                    AlinanItemPosition.y += 1f;
                    sellingItem = collision.gameObject.name;
                    collision.gameObject.transform.parent = AlinanItems.transform;
                    collision.gameObject.transform.position = AlinanItemPosition;
                }
            }
            else if (collision.gameObject.name.Substring(0, collision.gameObject.name.IndexOf("_")) == "Gun")
            {
                if (coin >= 10)
                {
                    coin = SaveObject.singleton.payedCoin(10);
                    AlinanItemPosition.y += 1f;
                    sellingItem = collision.gameObject.name;
                    collision.gameObject.transform.parent = AlinanItems.transform;
                    collision.gameObject.transform.position = AlinanItemPosition;
                }
            }
            else if (collision.gameObject.name.Substring(0, collision.gameObject.name.IndexOf("_")) == "Ammo")
            {
                if (coin >= 15)
                {
                    coin = SaveObject.singleton.payedCoin(15);
                    AlinanItemPosition.y += 1f;
                    sellingItem = collision.gameObject.name;
                    collision.gameObject.transform.parent = AlinanItems.transform;
                    collision.gameObject.transform.position = AlinanItemPosition;
                }
            }
        }

        if(collision.gameObject.tag == "bossBullet")
        {
            // Caný azalýyor ve bütün düþmanlar siliniyor.
            health = SaveObject.singleton.TakeDamage();
            Destroy(collision.gameObject);
            isDamage = true;
            foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
            {
                if (enemy.name != "Fector")
                {
                    GameObject death = Instantiate(deathPrefab, enemy.transform.position, enemy.transform.rotation);
                    Destroy(enemy);
                }
            }

            if (health <= 0)
            {
                SceneManager.LoadScene(0);
            }
        }
    }
}
