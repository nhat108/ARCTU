using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Rendering;


public class MainCameraController : MonoBehaviour
{

    float x = 0f;
    float y = 0f;
    float a, b;
    public float speed = 1.5f;


    public GameObject circle2DView;
    public GameObject Room;
    public GameObject Room2;
    List<GameObject> spheres = new List<GameObject>();
    
    
    // Start is called before the first frame update
    void Start()
    {

        for (int i = 0; i < Room2.transform.childCount; i++)
        {
            spheres.Add(Room2.transform.GetChild(i).transform.GetChild(0).gameObject);
            
        }

        //TODO
        //spheres = GameObject.FindGameObjectsWithTag("Sphere");
        //for (int i = 0; i < spheres.Length; ++i)
        //{
           
        //    spheres[i].GetComponent<Renderer>().sharedMaterial.SetInt("_StencilComp", (int)CompareFunction.NotEqual);
        //}
        //spheres[0].GetComponent<Renderer>().sharedMaterial.SetInt("_StencilComp", (int)CompareFunction.Equal);
        //Room.SetActive(false);
     

    }


    // Update is called once per frame
    void Update()
    {
        UpdateMoving();
        updateRotationByMouse();
        UpdateCricle2DView();
       

    }
  

    [System.Obsolete]
    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Quad")
        {

            for (int i = 0; i < spheres.Count; i++)
            {

                if (spheres[i].active == true)
                {
                    spheres[i].SetActive(false);

                }


            }
            var sphere = other.gameObject.transform.GetChild(0).gameObject;
            sphere.SetActive(true);
        }


        /****************/
        //if(other.tag=="Quad"&& other.gameObject.transform.childCount>0)
        //{
        //    for (int i = 0; i < spheres.Length; i++)
        //    {

        //        if (spheres[i].active == true)
        //        {
        //            spheres[i].SetActive(false);

        //        }


        //    }

        //    var sphere = other.gameObject.transform.GetChild(0).gameObject;

        //    sphere.transform.position = other.transform.position;

        //    sphere.SetActive(true);
        //    sphere.GetComponent<Renderer>().sharedMaterial.SetInt("_StencilComp", (int)CompareFunction.NotEqual);
        //}



    }
    private void updateRotationByMouse()
    {
        if (Input.GetMouseButton(0))
        {
            transform.Rotate(new Vector3(Input.GetAxis("Mouse Y") * speed, -Input.GetAxis("Mouse X") * speed, 0));
            a = transform.rotation.eulerAngles.x;
            b = transform.rotation.eulerAngles.y;
            transform.rotation = Quaternion.Euler(a, b, 0);
        }

    }
    private void UpdateCricle2DView()
    {
        Vector3 vector3 = new Vector3(0,0,-transform.eulerAngles.y);
     
        circle2DView.transform.rotation = Quaternion.Euler(vector3);
    }
    private void UpdateMoving()
    {
        Vector3 pos = transform.position;

        if (x > 0)
        {
            pos.z += (speed * Time.deltaTime);
            transform.position = pos;
            x--;
        }
        if (x < 0)
        {
            pos.z -= (speed * Time.deltaTime);
            transform.position = pos;
            x++;
        }
        if (y > 0)
        {
            pos.x += (speed * Time.deltaTime);
            transform.position = pos;
            y--;
        }
        if (y < 0)
        {
            pos.x -= (speed * Time.deltaTime);
            transform.position = pos;
            y++;
        }
    }
  
    public void OnUpButtonClick()
    {
      
        x =  3;
      

    }
    public void OnDownButtonClick()
    {
        x = -3;
    }
    public void OnRightButtonClick()
    {
        y = 3;
    }
    public void OnLeftButtonClick()
    {
        y = -3;
    }
   
}
