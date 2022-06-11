using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelTimer : MonoBehaviour
{
    public float geriSayim = 90f;
    private int geriSayimHafiza = 90;
    public GameObject SayacObject;

    public GameObject Player;
    private bool PlayertakeDamage = false;

    // D��man Yaratma k�sm� i�in
    // respawnerlar�n bulundu�u array
    [SerializeField] private GameObject[] Respawner;
    // d��man prefabri�inin bulundu�u yer. Birden fazla d��man oldu�u zaman burada prefabrikler g�nderip i�lerinde oran uygulayaca��z.
    [SerializeField] private GameObject enemyPrefab;
    // Ka� tane d��man ��kaca��n� zarlar.
    int random2;
    // hangi spawner'da spawn olaca��n� belirliyor.
    int randomNumber;
    // �st �ste spawn olmalar ya�anmas�n diye haf�za tutuluyor.
    int[] respawner_hafiza = new int[12];


    // Update is called once per frame
    void Update()

    {

        PlayertakeDamage = Player.GetComponent<PlayerMovement>().isDamage;
        if (PlayertakeDamage == true)
        {
            PlayertakeDamage = false;
            geriSayim += 10;
            geriSayimHafiza += 10;
            SayacObject.transform.localScale += new Vector3(0.2f, 0, 0);
            SayacObject.transform.position += new Vector3(0.1f, 0, 0);

        }

        if (geriSayim != 0)
        {
            geriSayim -= Time.deltaTime;
            if (geriSayim < geriSayimHafiza)
            {
                geriSayimHafiza = (int)geriSayim;
                SayacObject.transform.localScale -= new Vector3(0.2f, 0, 0);
                SayacObject.transform.position -= new Vector3(0.1f, 0, 0);
                if (geriSayimHafiza % 5 == 0)
                {
                    random2 = Random.Range(3, 7);
                    CreateEnemy();
                }

            }

            if (SayacObject.transform.localScale.x <= 0)
            {
                geriSayim = 0;
                geriSayimHafiza = 0;
                SayacObject.transform.localScale += new Vector3(16, 0, 0);
                SayacObject.transform.position += new Vector3(8f, 0, 0);
            }
        }
    }

    void CreateEnemy()
    {
        for (int j = 0; j < 12; j++) { respawner_hafiza[j] = 0; }

        for(int i = 0; i < random2; i++)
        {
            randomNumber = Random.Range(0, 12);
            if(respawner_hafiza[randomNumber] == 1)
            {
                i--;
                continue;
            }
            else
            {
                respawner_hafiza[randomNumber] = 1;
                GameObject Enemy = Instantiate(enemyPrefab, Respawner[randomNumber].transform.position, Respawner[randomNumber].transform.rotation);
            }
        }
    }
}
