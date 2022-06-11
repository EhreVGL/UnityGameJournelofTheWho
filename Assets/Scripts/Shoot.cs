using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
 * �oklu ate� itemleri kullan�ld��� zaman Shooting() fonksiyonu �a�r�ld��� k�s�mda ko�ullar olu�turulacak ve kullan�lan iteme g�re 
 * TribleShooting() PolygonShooting() fonksiyonlar�na gidilecek.
 */

public class Shoot : MonoBehaviour
{
    //oyuncunun konumu
    [SerializeField] private Transform playerTransform;
    Vector2 player_position;
    // mermi prefab'�
    [SerializeField] private GameObject bulletPrefab;
    // merminin mesafesi
    [SerializeField] private GameObject barrel_distance;
    Vector2 barrel_distance_position;

    // mermi �zellikleri
    [SerializeField] private float bulletForce = 20f;
    private float rate_time;
    private float rate_time_hafiza = 0.375f;

    // item �zellikleri boollar�
    private bool shotgun;
    private bool wagonwheel;
    private bool sheriffbadge;
    [HideInInspector] public float gunShootingSpeed;
    [HideInInspector] public int bulletPower;

    Vector2 barrel_distance_position_hafiza;


    private void Start()
    {
        rate_time = rate_time_hafiza;
        shotgun = false;
        wagonwheel = false;
        sheriffbadge = false;
        bulletPower = 1;
        gunShootingSpeed = 0.85f + (SaveObject.singleton.GetCurrentGun()*0.15f);
    }
    // Update is called once per frame
    void Update()
    {
        bulletPrefab.GetComponent<Bullet_Collider>().bulletPower = bulletPower;
        // mermi �zelliklerinin al�nd��� k�s�m
        shotgun = this.gameObject.GetComponent<dropItems>().isShotgun;
        wagonwheel = this.gameObject.GetComponent<dropItems>().isWagonWheel;
        sheriffbadge = this.gameObject.GetComponent<dropItems>().isSheriffBadge;

        // merminin olu�aca�� noktan�n y�n� ayarlan�r.
        barrel_distance_position.x = Input.GetAxisRaw("Horizontal_Bullet");
        barrel_distance_position.y = Input.GetAxisRaw("Vertical_Bullet");
        //Debug.Log((barrel_distance_position.x + 1) + "   X|Y   " + barrel_distance_position.y);
        // at�� countdown'�n� tutan k�s�m.
        if (rate_time <= 0)
        {
            rate_time = 0;
        }
        else
        {
            rate_time -= Time.deltaTime;
        }

        // countdown dolduysa ate� eden k�s�m.
        if (Input.GetAxisRaw("Horizontal_Bullet") != 0 || Input.GetAxisRaw("Vertical_Bullet") != 0)
        {
            if (rate_time <= 0)
            {
                Shooting();
            }
        }
        
    }

    // ate�leme fonksiyonu
    private void Shooting()
    {
        // oyuncunun konumu belirlenir.
        player_position.x = playerTransform.position.x + barrel_distance_position.x * 0.6f;
        player_position.y = playerTransform.position.y + barrel_distance_position.y * 0.6f;

        // WagonWheel item'i aktif ise:
        if((wagonwheel == true) || ((shotgun == true) && (sheriffbadge == true)))
        {
            // tek y�ne ate�ler:
            // x = 1, y = 0
            // bu konum bilgisini de�i�tirme sebebi merminin olu�tu�u y�n� de�i�tirmek.
            player_position.x = playerTransform.position.x + 1 * 0.6f;
            player_position.y = playerTransform.position.y + 0 * 0.6f;

            // bu k�s�m da merminin olu�tu�u y�ne g�re do�rultusunu ayarlamak. Bu k�s�m shotgun i�in daha elveri�liydi.
            barrel_distance_position_hafiza.x = 1;
            barrel_distance_position_hafiza.y = 0;
            barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.1f;
            GameObject bulletX = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
            Rigidbody2D rbX = bulletX.GetComponent<Rigidbody2D>();
            rbX.AddForce(barrel_distance_position_hafiza * bulletForce * 0.88f, ForceMode2D.Impulse);

            // x = -1, y = 0
            player_position.x = playerTransform.position.x + -1 * 0.6f;
            player_position.y = playerTransform.position.y + 0 * 0.6f;

            barrel_distance_position_hafiza.x = -1;
            barrel_distance_position_hafiza.y = 0;
            barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.1f;
            GameObject bulletNX = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
            Rigidbody2D rbNX = bulletNX.GetComponent<Rigidbody2D>();
            rbNX.AddForce(barrel_distance_position_hafiza * bulletForce * 0.88f, ForceMode2D.Impulse);

            // x = 0, y = 1
            player_position.x = playerTransform.position.x + 0 * 0.6f;
            player_position.y = playerTransform.position.y + 1 * 0.6f;

            barrel_distance_position_hafiza.x = 0;
            barrel_distance_position_hafiza.y = 1;
            barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.1f;
            GameObject bulletY = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
            Rigidbody2D rbY = bulletY.GetComponent<Rigidbody2D>();
            rbY.AddForce(barrel_distance_position_hafiza * bulletForce * 0.88f, ForceMode2D.Impulse);

            // x = 0, y = -1
            player_position.x = playerTransform.position.x + 0 * 0.6f;
            player_position.y = playerTransform.position.y + -1 * 0.6f;

            barrel_distance_position_hafiza.x = 0;
            barrel_distance_position_hafiza.y = -1;
            barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.1f;
            GameObject bulletNY = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
            Rigidbody2D rbNY = bulletNY.GetComponent<Rigidbody2D>();
            rbNY.AddForce(barrel_distance_position_hafiza * bulletForce * 0.88f, ForceMode2D.Impulse);

            // �apraz ate�ler:
            // x = 1, y = 1
            player_position.x = playerTransform.position.x + 1 * 0.6f;
            player_position.y = playerTransform.position.y + 1 * 0.6f;

            barrel_distance_position_hafiza.x = 1;
            barrel_distance_position_hafiza.y = 1;
            barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.05f;
            GameObject bulletXY = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
            Rigidbody2D rbXY = bulletXY.GetComponent<Rigidbody2D>();
            rbXY.AddForce(barrel_distance_position_hafiza * bulletForce * 0.55f, ForceMode2D.Impulse);

            // x = 1, y = -1
            player_position.x = playerTransform.position.x + 1 * 0.6f;
            player_position.y = playerTransform.position.y + -1 * 0.6f;

            barrel_distance_position_hafiza.x = 1;
            barrel_distance_position_hafiza.y = -1;
            barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.05f;
            GameObject bulletXNY = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
            Rigidbody2D rbXNY = bulletXNY.GetComponent<Rigidbody2D>();
            rbXNY.AddForce(barrel_distance_position_hafiza * bulletForce * 0.55f, ForceMode2D.Impulse);

            // x = -1, y = 1
            player_position.x = playerTransform.position.x + -1 * 0.6f;
            player_position.y = playerTransform.position.y + 1 * 0.6f;

            barrel_distance_position_hafiza.x = -1;
            barrel_distance_position_hafiza.y = 1;
            barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.05f;
            GameObject bulletNXY = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
            Rigidbody2D rbNXY = bulletNXY.GetComponent<Rigidbody2D>();
            rbNXY.AddForce(barrel_distance_position_hafiza * bulletForce * 0.55f, ForceMode2D.Impulse);

            // x = -1, y = -1
            player_position.x = playerTransform.position.x + -1 * 0.6f;
            player_position.y = playerTransform.position.y + -1 * 0.6f;

            barrel_distance_position_hafiza.x = -1;
            barrel_distance_position_hafiza.y = -1;
            barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.05f;
            GameObject bulletNXNY = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
            Rigidbody2D rbNXNY = bulletNXNY.GetComponent<Rigidbody2D>();
            rbNXNY.AddForce(barrel_distance_position_hafiza * bulletForce * 0.55f, ForceMode2D.Impulse);
        }
        // Shotgun item'i aktif ise:
        else if((shotgun == true) || (sheriffbadge == true))
        {
            // �apraz ate�leme k�sm�
            if (Input.GetAxisRaw("Horizontal_Bullet") != 0 && Input.GetAxisRaw("Vertical_Bullet") != 0)
            {
                barrel_distance.transform.position = player_position + barrel_distance_position * 0.05f;
                GameObject bullet = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
                Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
                rb.AddForce(barrel_distance_position * bulletForce * 0.55f, ForceMode2D.Impulse);

                //�apraz ate�leme i�in x = y * 0.5 yap�l�yor.
                barrel_distance_position_hafiza = barrel_distance_position;
                barrel_distance_position_hafiza.x = barrel_distance_position.x * 0.33f;
                barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.1f;
                GameObject bulletX = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
                Rigidbody2D rbX = bulletX.GetComponent<Rigidbody2D>();
                rbX.AddForce(barrel_distance_position_hafiza * bulletForce * 0.66f, ForceMode2D.Impulse);

                //�apraz ate�leme i�in y = y * 0.5 yap�l�yor.
                barrel_distance_position_hafiza = barrel_distance_position;
                barrel_distance_position_hafiza.y = barrel_distance_position.y * 0.33f; ;
                barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.1f;
                GameObject bulletY = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
                Rigidbody2D rbY = bulletY.GetComponent<Rigidbody2D>();
                rbY.AddForce(barrel_distance_position_hafiza * bulletForce * 0.66f, ForceMode2D.Impulse);
            }
            // tek y�ne ate�leme k�sm�
            else
            {
                barrel_distance.transform.position = player_position + barrel_distance_position * 0.1f;
                GameObject bullet = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
                Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
                rb.AddForce(barrel_distance_position * bulletForce * 0.88f, ForceMode2D.Impulse);

                // tek y�ne ate�leme i�in x != 0 ko�ulu.
                if ( barrel_distance_position.x != 0)
                {
                    //�apraz ate�leme i�in y = 0.5 yap�l�yor.
                    barrel_distance_position_hafiza = barrel_distance_position;
                    barrel_distance_position_hafiza.y = 0.33f ;
                    barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.08f;
                    GameObject bulletX = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
                    Rigidbody2D rbX = bulletX.GetComponent<Rigidbody2D>();
                    rbX.AddForce(barrel_distance_position_hafiza * bulletForce * 0.77f, ForceMode2D.Impulse);

                    //�apraz ate�leme i�in y = -0.5 yap�l�yor.
                    barrel_distance_position_hafiza = barrel_distance_position;
                    barrel_distance_position_hafiza.y = -0.33f;
                    barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.08f;
                    GameObject bulletY = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
                    Rigidbody2D rbY = bulletY.GetComponent<Rigidbody2D>();
                    rbY.AddForce(barrel_distance_position_hafiza * bulletForce * 0.77f, ForceMode2D.Impulse);
                }
                // tek y�ne ate�leme i�in x != 0 ko�ulu.
                else if (barrel_distance_position.y != 0)
                {
                    //�apraz ate�leme i�in x = 0.5 yap�l�yor.
                    barrel_distance_position_hafiza = barrel_distance_position;
                    barrel_distance_position_hafiza.x = 0.33f;
                    barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.08f;
                    GameObject bulletX = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
                    Rigidbody2D rbX = bulletX.GetComponent<Rigidbody2D>();
                    rbX.AddForce(barrel_distance_position_hafiza * bulletForce * 0.77f, ForceMode2D.Impulse);

                    //�apraz ate�leme i�in x = -0.5 yap�l�yor.
                    barrel_distance_position_hafiza = barrel_distance_position;
                    barrel_distance_position_hafiza.x = -0.33f;
                    barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.08f;
                    GameObject bulletY = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
                    Rigidbody2D rbY = bulletY.GetComponent<Rigidbody2D>();
                    rbY.AddForce(barrel_distance_position_hafiza * bulletForce * 0.77f, ForceMode2D.Impulse);
                }

            }
        }
        else
        {
            // �apraz ate�leme k�sm�
            if (Input.GetAxisRaw("Horizontal_Bullet") != 0 && Input.GetAxisRaw("Vertical_Bullet") != 0)
            {
                barrel_distance.transform.position = player_position + barrel_distance_position * 0.05f;
                GameObject bullet = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
                Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
                rb.AddForce(barrel_distance_position * bulletForce * 0.55f, ForceMode2D.Impulse);
            }
            // tek y�ne ate�leme k�sm�
            else
            {
                barrel_distance.transform.position = player_position + barrel_distance_position * 0.1f;
                GameObject bullet = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
                Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
                rb.AddForce(barrel_distance_position * bulletForce * 0.88f, ForceMode2D.Impulse);
            }
        }
        rate_time = rate_time_hafiza * this.gameObject.GetComponent<dropItems>().shooting_speed * this.gameObject.GetComponent<dropItems>().shotgun_Shooting_Speed * this.gameObject.GetComponent<dropItems>().SheriffBadge_Shooting_Speed * gunShootingSpeed;        
    }
}
