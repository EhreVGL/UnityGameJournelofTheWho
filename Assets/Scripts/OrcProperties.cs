using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OrcProperties : MonoBehaviour
{
    private GameObject player;
    private Transform playerTransform;
    private float moveSpeed = 2f;
    private Rigidbody2D rb;
    private Animator animator;
    [HideInInspector] public int health;
    [HideInInspector] public bool player_zombie;
    private GameObject deathPrefab;
    [HideInInspector] public bool smokebomb = false;

    // Orc öldüðünde düþüreceði item'lar ile ilgili deðiþkenler.
    [SerializeField] private GameObject[] Items;
    [SerializeField] private int ItemRandom = 2;

    Vector2 movement;

    private void Start()
    {
        deathPrefab = Resources.Load("Death") as GameObject;
        rb = gameObject.GetComponent<Rigidbody2D>();
        animator = gameObject.GetComponent<Animator>();
        health = 1;
    }
    // Update is called once per frame
    void Update()
    {
        player = GameObject.Find("Oyuncu");
        playerTransform = player.transform;

        // Oyuncu Zombiye dönüþtüðü zaman burasý aktif olup PlayerProperties script'inden zombie deðerini almasý lazým ama þimdilik 
        // nasýl olacaðýný düþünmediðim için el ile deðeri 'false' yapýyorum.
        //player_zombie = player.GetComponent<PlayerProperties>().zombie;
        player_zombie = false;

        // düþmanlarýn oyuncuya doðru ilerlemesi için ayarlanan parça.
        movement.x = playerTransform.position.x - transform.position.x;
        if(playerTransform.position.x - transform.position.x == 0) 
        { 
            movement.x = 0; 
        }
        else
        {
            movement.x = movement.x / Mathf.Abs(movement.x);
        }
        movement.y = playerTransform.position.y - transform.position.y;
        if(playerTransform.position.y - transform.position.y == 0)
        {
            movement.y = 0;
        }
        else
        {
            movement.y = movement.y / Mathf.Abs(movement.y);
        }
    }
    private void FixedUpdate()
    {
        // düþmanlarýn oyuncuya doðru ilerlediði parça.
        if (player_zombie == true)
        {
            if (movement.x != 0 && movement.y != 0)
            {
                rb.MovePosition(rb.position + -1 * movement * (moveSpeed / 0.835f) * Time.fixedDeltaTime);
            }
            else
            {
                rb.MovePosition(rb.position + -1 * movement * moveSpeed * Time.fixedDeltaTime);
            }
        }
        else if(smokebomb == true)
        {
            
        }
        else
        {
            if(movement.x != 0 && movement.y != 0)
            {
                rb.MovePosition(rb.position + movement * (moveSpeed / 0.835f) * Time.fixedDeltaTime);
            }
            else
            {
                rb.MovePosition(rb.position + movement * moveSpeed * Time.fixedDeltaTime);
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
            if(health <= 0)
            {
                GameObject death = Instantiate(deathPrefab, transform.position, transform.rotation);
                Destroy(gameObject,0.2f);
                droppingItem();
            }
        }
    }

    private void droppingItem()
    {
        if(ItemRandom == Random.Range(0, 3))
        {
            GameObject Item = Instantiate(Items[Random.Range(0, 11)], this.gameObject.transform.position, this.gameObject.transform.rotation);
        }
    }
}
