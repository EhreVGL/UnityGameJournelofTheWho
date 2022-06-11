using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BossArenaTimerBar : MonoBehaviour
{
    [SerializeField] private GameObject Fector;
    //[SerializeField] private GameObject DarkTile;

    private float time_count;
    private int time = 150;
    // Start is called before the first frame update
    private void Start()
    {

        time_count = time;
    }

    // Update is called once per frame
    void Update()
    {
        time_count = Fector.GetComponent<BossProperties>().health;
        transform.localScale = new Vector3(time_count * 17 / time, 0.5f, 1);
        transform.localPosition = new Vector3((time_count * 17 / time / 2) - 8.46f, -9.06f, 0);

    }
}
