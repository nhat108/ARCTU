using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoomScript : MonoBehaviour
{
    public GameObject Room;
    public GameObject emptyGameObjectPrefab;
 
    void Start()
    {
        for (int i = 0; i < Room.transform.childCount; i++)
        { 
           //Room.transform.GetChild(i).gameObject.GetComponent<Renderer>().enabled = false;
           GameObject sphere= Instantiate(emptyGameObjectPrefab, Room.transform.GetChild(i).gameObject.transform.position, Quaternion.identity);
           sphere.transform.SetParent(Room.transform.GetChild(i));
           sphere.SetActive(false);
        }
     

    }
   
}
