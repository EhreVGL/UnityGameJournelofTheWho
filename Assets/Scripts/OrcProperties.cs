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

    // Orc �ld���nde d���rece�i item'lar ile ilgili de�i�kenler.
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

        // Oyuncu Zombiye d�n��t��� zaman buras� aktif olup PlayerProperties script'inden zombie de�erini almas� laz�m ama �imdilik 
        // nas�l olaca��n� d���nmedi�im i�in el ile de�eri 'false' yap�yorum.
        //player_zombie = player.GetComponent<PlayerProperties>().zombie;
        player_zombie = false;

        // d��manlar�n oyuncuya do�ru ilerlemesi i�in ayarlanan par�a.
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
        // d��manlar�n oyuncuya do�ru ilerledi�i par�a.
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
        // E�er �arp��ma mermiyle mi ger�ekle�ti sorgusu yap�l�yor.
        if (collision.gameObject.tag == "bullet")
        {
            // Mermiyle �arp��t�ysa can� azal�yor ve hasar animasyonuna giriyor.
            health -= collision.gameObject.GetComponent<Bullet_Collider>().bulletPower;
            animator.SetBool("takeDamage", true);
            // �arpan mermi siliniyor.
            Destroy(collision.gameObject);
            // Can� s�f�rland�ysa �l�m animasyonu giriyor ve siliniyor.
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
