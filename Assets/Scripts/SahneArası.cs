using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SahneArası : MonoBehaviour
{
    [SerializeField] private Rigidbody2D player;
    [SerializeField] private GameObject Camera;
    [SerializeField] private Animator animator;

    private float timer = 5;
    private float timer2 = 0;
    private float moveSpeed = 1f;



    private float xxx = 3.4f;
    Vector2 movement;
    Vector3 movement3;
    // Start is called before the first frame update
    void Start()
    {
        movement.x = 0;
        movement.y = -1;
        movement3.x = 0;
        movement3.y = -1;
        movement3.z = 0;
    }

    // Update is called once per frame
    void Update()
    {


    }
    private void FixedUpdate()
    {
        timer2 += Time.fixedDeltaTime;
        if (timer2 > 1)
        {
            animator.SetFloat("speed", 1);
            timer -= Time.deltaTime;
            if (timer > 0)
            {
                player.MovePosition(player.position + movement * (moveSpeed * 1.8f) * Time.fixedDeltaTime);
                Camera.transform.position += movement3 * (moveSpeed * xxx) * Time.fixedDeltaTime;

            }
            else
            {
                SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
            }
        }
    }
}
