using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Death_Enemy : MonoBehaviour
{
    private float deathTime = 2f;

    // Update is called once per frame
    void Update()
    {
        deathTime -= Time.deltaTime;
        if(deathTime <= 0)
        {
            Destroy(gameObject);
        }
    }
}
