using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public sealed class SaveObject
{
    private static SaveObject instance;
    public static SaveObject singleton
    {
        get
        {
            if (instance == null)
            {
                instance = new SaveObject();
                PlayerPrefs.GetInt("Health", 1);
                PlayerPrefs.GetInt("Coin", 0);
                PlayerPrefs.GetString("SoldItem1", " ");
                PlayerPrefs.GetString("SoldItem2", " ");
                PlayerPrefs.GetInt("Boot", 1);
                PlayerPrefs.GetInt("Ammo", 1);
                PlayerPrefs.GetInt("Gun", 1);
                PlayerPrefs.GetString("Envanter", " ");
            }
            return instance;
        }
    }

    public void ResetAllItem()
    {
        PlayerPrefs.SetInt("Health", 3);
        PlayerPrefs.SetInt("Coin", 0);
        PlayerPrefs.SetString("SoldItem1", "");
        PlayerPrefs.SetString("SoldItem2", "");
        PlayerPrefs.SetInt("Boot", 1);
        PlayerPrefs.SetInt("Ammo", 1);
        PlayerPrefs.SetInt("Gun", 1);
        PlayerPrefs.SetString("Envanter", "");
    }
    public void ResetAmmo()
    {
        PlayerPrefs.SetInt("Ammo", 1);
    }
    public int GetCurrentHealth()
    {
        return PlayerPrefs.GetInt("Health", 1);
    }
    public void HealthUp()
    {
        PlayerPrefs.SetInt("Health", GetCurrentHealth() + 1);
    }
    public int TakeDamage()
    {
        PlayerPrefs.SetInt("Health", GetCurrentHealth() - 1);
        return GetCurrentHealth();
    }

    public int GetCurrentCoin()
    {
        return PlayerPrefs.GetInt("Coin", 1);
    }
    public void CoinUp(int value)
    {
        PlayerPrefs.SetInt("Coin", GetCurrentCoin() + value);
    }
    public int payedCoin(int price)
    {
        PlayerPrefs.SetInt("Coin", GetCurrentCoin() - price);
        return GetCurrentCoin();
    }

    public void SetCurrentEnvanter(string envanter)
    {
        PlayerPrefs.SetString("Envanter", envanter);
    }
    public string GetCurrentEnvanter()
    {
        return PlayerPrefs.GetString("Envanter", "");
    }
    public void UsedCurrentEnvanter()
    {
        PlayerPrefs.SetString("Envanter", "");
    }
    public int GetCurrentBoot()
    {
        return PlayerPrefs.GetInt("Boot", 1);
    }
    public void SetCurrentBoot()
    {
        PlayerPrefs.SetInt("Boot", GetCurrentBoot() + 1);
    }

    public int GetCurrentAmmo()
    {
        return PlayerPrefs.GetInt("Ammo", 1);
    }
    public void SetCurrentAmmo()
    {
        PlayerPrefs.SetInt("Ammo", GetCurrentAmmo() + 1);
    }
    public int GetCurrentGun()
    {
        return PlayerPrefs.GetInt("Gun", 1);
    }
    public void SetCurrentGun()
    {
        PlayerPrefs.SetInt("Gun", GetCurrentGun() + 1);
    }
}
