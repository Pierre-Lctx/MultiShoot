using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.SceneManagement;
using System.IO;

public class RoomManager : MonoBehaviourPunCallbacks
{
    public static RoomManager Instance;

    void Awake()
    {
        if (Instance) // Nous vérifions si un autre lobby existe
        {
            Destroy(gameObject); //Si oui nous le supprimons
            return;
        }
        DontDestroyOnLoad(gameObject); //Sinon nous ne le supprimons pas
        Instance = this; 
    }

    public override void OnEnable()
    {
        base.OnEnable();
        SceneManager.sceneLoaded += OnSceneLoaded;
    }

    public override void OnDisable()
    {
        base.OnDisable();
        SceneManager.sceneLoaded -= OnSceneLoaded;
    }

    void OnSceneLoaded(Scene scene, LoadSceneMode loadSceneMode)
    {
        if (scene.buildIndex == 1) //1 est l'emplacement de la scène du jeu
        {
            PhotonNetwork.Instantiate(Path.Combine("PhotonPrefabs", "PlayerManager"), Vector3.zero, Quaternion.identity);
            Debug.Log(Path.Combine("PhotonPrefabs", "PlayerManager"));
        }
    }
}
