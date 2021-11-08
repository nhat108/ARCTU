using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class RoomScript : MonoBehaviour
{
    public GameObject Room;
    public Material EmptyMaterial;
    public GameObject EmptySphere;
    void Start()
    {
        for (int i = 0; i < Room.transform.childCount; i++)
        { 
           //Room.transform.GetChild(i).gameObject.GetComponent<Renderer>().enabled = false;
           GameObject sphere= Instantiate(EmptySphere, Room.transform.GetChild(i).gameObject.transform.position, Quaternion.identity);
           sphere.transform.SetParent(Room.transform.GetChild(i));
           sphere.SetActive(false);
        }
     

    }
    IEnumerator DownloadImage(GameObject sphere,  string MediaUrl)
    {
        UnityEngine.Networking.UnityWebRequest request = UnityWebRequestTexture.GetTexture(MediaUrl);
        yield return request.SendWebRequest();
        if (request.result == UnityWebRequest.Result.ConnectionError)
            Debug.Log(request.error);
        else
        {
            var texture2D = ((DownloadHandlerTexture)request.downloadHandler).texture;
            EmptyMaterial.mainTexture = texture2D;
            sphere.GetComponent<Renderer>().material = EmptyMaterial;
        }
    }
    void LoadImage360(List<string> image360urls)
    {
     
        for (int i = 0; i < Room.transform.childCount; i++)
        {
            var sphere = Room.transform.GetChild(i).transform.GetChild(0).gameObject;
            StartCoroutine(DownloadImage(sphere, image360urls[i]));
        }
        
    }
   
}
