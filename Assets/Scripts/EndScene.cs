using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class EndScene : MonoBehaviour
{
    [SerializeField] private GameObject kari;
    [SerializeField] private GameObject loveStory;
    [SerializeField] private GameObject square;
    [SerializeField] private Text text;
    private Color colorr;
    private Color colorr2;

    private Rigidbody2D rb;
    private Vector2 movement;
    private float moveSpeed = 0.5f;
    [SerializeField] private Animator animator;
    private float timer = 3;
    private float timer2 = 3;
    private float timer3 = 3;

    // Start is called before the first frame update
    void Start()
    {
        rb = gameObject.GetComponent<Rigidbody2D>();
        movement.x = 2.24f;
        movement.y = 0;
        animator.SetFloat("speed", 1);
        colorr = new Color(0, 0, 0, 0);
        colorr2 = new Color(255,255,255, 0);
        square.GetComponentInChildren<Renderer>().material.color = colorr;
        text.GetComponentInChildren<Text>().material.color = colorr;

    }

    // Update is called once per frame
    void Update()
    {
    }
    private void FixedUpdate()
    {
        timer -= Time.fixedDeltaTime;
        if(timer <= 0)
        {
            this.gameObject.GetComponent<Renderer>().enabled = true;
            foreach(Transform child in this.gameObject.transform)
            {
                child.GetComponent<Renderer>().enabled = true;
            }
        }
        if(this.gameObject.transform.position.x < 2.24f)
        {
            rb.MovePosition(rb.position + movement * moveSpeed * Time.fixedDeltaTime);
        }
        else
        {
            animator.SetFloat("speed", -1);
            timer2 -= Time.fixedDeltaTime;
            if(timer2 <= 0)
            {
                colorr.a += Time.fixedDeltaTime / 5;
                colorr2.a += Time.fixedDeltaTime / 5000;

                square.GetComponentInChildren<Renderer>().material.color = colorr;
                text.GetComponentInChildren<Text>().material.color = colorr2;

                loveStory.SetActive(true);
                kari.SetActive(false);
                this.gameObject.GetComponent<Renderer>().enabled = false;
                foreach (Transform child in this.gameObject.transform)
                {
                    child.GetComponent<Renderer>().enabled = false;
                }
                if(colorr2.a >= 0.0033f)
                {
                    SceneManager.LoadScene(0);

                }
            }
        }
    }
}
