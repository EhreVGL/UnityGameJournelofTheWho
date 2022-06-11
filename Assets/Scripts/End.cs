using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class End : MonoBehaviour
{
    [SerializeField] private GameObject player;
    private Color colorr;
    [SerializeField] private Text[] texts;
    private float timer2 = 2;

    private float timer = 6;
    // Start is called before the first frame update
    void Start()
    {
        colorr = new Color(0, 0, 0, 0);
        this.gameObject.GetComponentInChildren<Renderer>().material.color = colorr;

    }

    // Update is called once per frame
    void Update()
    {

    }
    private void FixedUpdate()
    {
        if (player.GetComponent<PlayerMovement>().theEnd == true)
        {
            timer2 -= Time.fixedDeltaTime;
            if (timer2 <= 0)
            {
                timer -= Time.fixedDeltaTime;
                texts[0].enabled = false;
                texts[1].enabled = false;
                colorr.a += Time.fixedDeltaTime / 4;
                this.gameObject.GetComponentInChildren<Renderer>().material.color = colorr;
                if (timer <= 0)
                {
                    SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
                }
            }
        }

    }
}
