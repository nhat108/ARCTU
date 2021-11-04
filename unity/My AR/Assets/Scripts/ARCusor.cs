using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.Rendering;
public class ARCusor : MonoBehaviour
{
    public GameObject cursorChildObject;
    public GameObject objectToPlace;
    public ARRaycastManager raycastManager;
    public GameObject room;

    public bool useCursor=true;

    // Start is called before the first frame update
    void Start()
    {
        objectToPlace.SetActive(false);
        //cursorChildObject.SetActive(useCursor);
        //room.SetActive(false);
    }

    // Update is called once per frame
    [System.Obsolete]
    void Update()
    {
        if (useCursor)
        {
            UpadteCursor();
        }
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            Debug.Log("Tap");
          
            objectToPlace.SetActive(true);
            var sphere = room.transform.GetChild(0).transform.GetChild(0);
            sphere.transform.position = transform.position;
            sphere.GetComponent<Renderer>().sharedMaterial.SetInt("_StencilComp", (int)CompareFunction.Equal);
            room.SetActive(true);
            if (useCursor)
            {
            
                Vector3 rotation = new Vector3(transform.rotation.x, transform.rotation.y, transform.rotation.z+180);
                Quaternion quaternion = new Quaternion();
                quaternion.SetLookRotation(rotation);
                //GameObject.Instantiate(objectToPlace, transform.position, quaternion);
                objectToPlace.transform.position = transform.position;
                //room.SetActive(true);
                room.transform.position = new Vector3(transform.position.x,transform.position.y,transform.position.z+0.5f); 
                //cursorChildObject.SetActive(false);

                //objectToPlace.transform.rotation = quaternion;
            }
            else
            {
                List<ARRaycastHit> hits = new List<ARRaycastHit>();
                raycastManager.Raycast(Input.GetTouch(0).position,hits, UnityEngine.XR.ARSubsystems.TrackableType.Planes);
                if (hits.Count > 0)
                {
                    GameObject.Instantiate(objectToPlace, hits[0].pose.position,hits[0].pose.rotation);
                }
            }
        }
        
    }
    void UpadteCursor()
    {
        Vector2 screenPosition = Camera.main.ViewportToScreenPoint(new Vector2(0.5f,0.5f));
        List<ARRaycastHit> hits = new List<ARRaycastHit>();
        raycastManager.Raycast(screenPosition,hits,UnityEngine.XR.ARSubsystems.TrackableType.Planes);
        if (hits.Count > 0)
        {
            transform.position = hits[0].pose.position;
            transform.rotation = hits[0].pose.rotation;
        }
    }
}
