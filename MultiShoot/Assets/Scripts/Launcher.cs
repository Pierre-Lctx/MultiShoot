using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using TMPro;

public class Launcher : MonoBehaviourPunCallbacks
{
    [SerializeField] TMP_InputField roomNameInputField;
    [SerializeField] TMP_Text errorText;
    [SerializeField] TMP_Text roomNameText;

    // Start is called before the first frame update
    void Start()
    {
        MenuManager.Instance.OpenMenu("loading");
        Debug.Log("Connexion au serveur maitre : En cours...");
        PhotonNetwork.ConnectUsingSettings();
    }

    public override void OnConnectedToMaster()
    {
        //Fonction callback lorsque nous nous sommes bien connecter au serveur maitre
        Debug.Log("Connexion au serveur maitre : OK !");
        PhotonNetwork.JoinLobby();
    }

    public override void OnJoinedLobby()
    {
        //Fonction de callback lorsque nous avons rejoins le lobby
        MenuManager.Instance.OpenMenu("title");
        Debug.Log("Connexion au Lobby : OK !");
    }

    public void CreateRoom()
    {
        if (string.IsNullOrEmpty(roomNameInputField.text))
        {
            return;
        }
        PhotonNetwork.CreateRoom(roomNameInputField.text);
        MenuManager.Instance.OpenMenu("loading");
    }

    public override void OnJoinedRoom()
    {
        MenuManager.Instance.OpenMenu("room");
        roomNameText.text = PhotonNetwork.CurrentRoom.Name;
    }

    public override void OnCreateRoomFailed(short returnCode, string message)
    {
        errorText.text = "Création du lobby échouée : " + message;
        MenuManager.Instance.OpenMenu("error");
    }

    public void LeaveRoom()
    {
        PhotonNetwork.LeaveRoom();
        MenuManager.Instance.OpenMenu("loading");
    }

    public override void OnLeftRoom()
    {
        MenuManager.Instance.OpenMenu("title");
    }
}
