using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpikeballProperties : MonoBehaviour
{
    private float moveSpeed = 2f;
    private Rigidbody2D rb;
    private Animator animator;
    [HideInInspector] public int health;
    private GameObject deathPrefab;
    [HideInInspector] public bool smokebomb = false;
    // Doðduðunda random gideceði nokta için gerekli deðiþkenler.
    private bool checkResult = true;
    private Vector3 new_position_loc;
    [HideInInspector] public bool health_buff = false;
    // Orc öldüðünde düþüreceði item'lar ile ilgili deðiþkenler.
    [SerializeField] private GameObject[] Items;
    [SerializeField] private int ItemRandom = 2;

    // takýlmayý engelleme
    private float timeCounter = 2;
    private float timeCounterStorage = 0.5f;
    private Vector2 movementStorage;

    Vector2 movement;

    private void Start()
    {
        deathPrefab = Resources.Load("Death") as GameObject;
        rb = gameObject.GetComponent<Rigidbody2D>();
        animator = gameObject.GetComponent<Animator>();
        health = 2;
    }
    // Update is called once per frame
    void Update()
    {

    }

    private void FixedUpdate()
    {
        // gidilebilecek random noktayý bulur.
        while (checkResult == true)
        {
            new_position_loc.x = Random.Range(-2, 2);
            new_position_loc.y = Random.Range(-2, 2);
            new_position_loc.z = 0;
            checkResult = false;
        }

        movement.x = new_position_loc.x - transform.position.x;
        movement.y = new_position_loc.y - transform.position.y;

        if (new_position_loc.x - transform.position.x == 0)
        {
            movement.x = 0;
        }
        else
        {
            movement.x = movement.x / Mathf.Abs(movement.x);
        }
        if (new_position_loc.y - transform.position.y == 0)
        {
            movement.y = 0;
        }
        else
        {
            movement.y = movement.y / Mathf.Abs(movement.y);
        }
        // belirlenen konuma geldiyse yerleþmesi için çalýþacak fonksiyona götürür.
        if ((int)(new_position_loc.x - transform.position.x) == 0 && (int)(new_position_loc.y - transform.position.y) == 0)
        {
            buildBall();
        }
        else
        {
            if (smokebomb == true)
            {

            }
            else
            {
                if (movement.x != 0 && movement.y != 0)
                {
                    rb.MovePosition(rb.position + movement * (moveSpeed / 0.835f) * Time.fixedDeltaTime);
                }
                else
                {
                    rb.MovePosition(rb.position + movement * moveSpeed * Time.fixedDeltaTime);
                }

                timeCounterStorage -= Time.fixedDeltaTime;
                timeCounter -= Time.fixedDeltaTime;
                if (timeCounterStorage <= 0)
                {
                    movementStorage = movement;
                    timeCounterStorage = 99999f;
                }
                if (timeCounter <= 0)
                {
                    if (movementStorage == movement)
                    {
                        checkResult = true;
                    }
                    timeCounter = 2f;
                    timeCounterStorage = 0.5f;
                }
            }
            
        }
        

        animator.SetBool("takeDamage", false);
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        // Eðer çarpýþma mermiyle mi gerçekleþti sorgusu yapýlýyor.
        if (collision.gameObject.tag == "bullet")
        {
            // Mermiyle çarpýþtýysa caný azalýyor ve hasar animasyonuna giriyor.
            health -= collision.gameObject.GetComponent<Bullet_Collider>().bulletPower;
            animator.SetBool("takeDamage", true);
            // Çarpan mermi siliniyor.
            Destroy(collision.gameObject);
            // Caný sýfýrlandýysa ölüm animasyonu giriyor ve siliniyor.
            if (health <= 0)
            {
                GameObject death = Instantiate(deathPrefab, transform.position, transform.rotation);
                Destroy(gameObject, 0.2f);
                droppingItem();
            }
        }
    }

    private void droppingItem()
    {
        if (ItemRandom == Random.Range(0, 3))
        {
            GameObject Item = Instantiate(Items[Random.Range(0, 11)], this.gameObject.transform.position, this.gameObject.transform.rotation);
        }
    }

    private void buildBall()
    {
        if(health_buff == false)
        {
            health += 5;
            health_buff = true;
        }
        animator.SetBool("isThere", true);
        rb.bodyType = RigidbodyType2D.Static;

    }
}
