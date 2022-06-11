using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoldItemScript : MonoBehaviour
{
    [SerializeField] private GameObject[] boots;
    [SerializeField] private GameObject[] guns;
    [SerializeField] private GameObject[] ammos;
    [SerializeField] private GameObject[] dropItems;
    private int boot;
    private int gun;
    private int ammo;
    private bool check = false;
    private Vector2 AlinanItemPosition;
    private Vector2 dropItemPosition;
    private string dropItemName;
    // Start is called before the first frame update
    void Start()
    {
        dropItemName = SaveObject.singleton.GetCurrentEnvanter();
        boot = SaveObject.singleton.GetCurrentBoot();
        gun = SaveObject.singleton.GetCurrentGun();
        ammo = SaveObject.singleton.GetCurrentAmmo();

        AlinanItemPosition.x = -9.66f;
        AlinanItemPosition.y = -8.93f;
    }

    // Update is called once per frame
    void Update()
    {
        if (check == false)
        {
            check = true;
            if(boot == 2)
            {
                GameObject soldItem = Instantiate(boots[0],AlinanItemPosition, Quaternion.identity);
                if(gun == 2)
                {
                    AlinanItemPosition.y = -7.93f;
                    GameObject soldItem2 = Instantiate(guns[0], AlinanItemPosition, Quaternion.identity);
                }
                else if (ammo == 2)
                {
                    AlinanItemPosition.y = -7.93f;
                    GameObject soldItem2 = Instantiate(ammos[0], AlinanItemPosition, Quaternion.identity);
                }
            }
            else if (boot == 3)
            {
                GameObject soldItem = Instantiate(boots[0], AlinanItemPosition, Quaternion.identity);
                AlinanItemPosition.y = -7.93f;
                GameObject soldItem2 = Instantiate(boots[1], AlinanItemPosition, Quaternion.identity);
            }
            else if (gun == 2)
            {
                GameObject soldItem = Instantiate(guns[0], AlinanItemPosition, Quaternion.identity);
                if (ammo == 2)
                {
                    AlinanItemPosition.y = -7.93f;
                    GameObject soldItem2 = Instantiate(ammos[0], AlinanItemPosition, Quaternion.identity);
                }
            }
            else if (gun == 3)
            {
                GameObject soldItem = Instantiate(guns[0], AlinanItemPosition, Quaternion.identity);
                AlinanItemPosition.y = -7.93f;
                GameObject soldItem2 = Instantiate(guns[1], AlinanItemPosition, Quaternion.identity);
            }
            else if (ammo == 2)
            {
                GameObject soldItem = Instantiate(ammos[0], AlinanItemPosition, Quaternion.identity);
            }
            else if (ammo == 3)
            {
                GameObject soldItem = Instantiate(ammos[0], AlinanItemPosition, Quaternion.identity);
                AlinanItemPosition.y = -7.93f;
                GameObject soldItem2 = Instantiate(ammos[1], AlinanItemPosition, Quaternion.identity);
            }

            if (dropItemName != "")
            { 
                foreach (GameObject dropItem in dropItems)
                {
                    if (dropItemName.Substring(0, dropItemName.IndexOf("(")) == dropItem.name)
                    {
                        dropItemPosition.x = 0;
                        dropItemPosition.y = 0;

                        GameObject dropItemAdd = Instantiate(dropItem, dropItemPosition, Quaternion.identity);
                    }
                }
            }
        }
    }
}
