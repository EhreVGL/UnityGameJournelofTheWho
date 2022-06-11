using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet_Collider : MonoBehaviour
{
    // Start is called before the first frame update
    [HideInInspector] public int bulletPower = 1;
    private void Start()
    {
        bulletPower = 1 * SaveObject.singleton.GetCurrentAmmo();
    }
    private void Update()
    {
        
    }
    void OnCollisionEnter2D(Collision2D collision)
    {
        if(collision.gameObject.tag == "Wall")
        {
            Destroy(gameObject);
        }
    }
}
