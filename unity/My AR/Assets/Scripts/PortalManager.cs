using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
public class PortalManager : MonoBehaviour
{
    public GameObject MainCamera;
         private GameObject[] spheres;
    public GameObject Room;
     Material[] spheresMaterials;
    // Start is called before the first frame update
    void Start()
    {
        spheres = GameObject.FindGameObjectsWithTag("Sphere");
        spheresMaterials = new Material[spheres.Length];
      
        //for (int i = 0; i < spheres.Length; ++i)
        //{
        //    spheresMaterials.SetValue(spheres[i].GetComponent<Renderer>().sharedMaterial, i);
        //    //spheresMaterials[i].SetInt("_StencilComp", (int)CompareFunction.Equal);
        //    spheres[i].GetComponent<Renderer>().sharedMaterial.SetInt("_StencilComp", (int)CompareFunction.NotEqual);
        //}
        //spheres[0].GetComponent<Renderer>().sharedMaterial.SetInt("_StencilComp", (int)CompareFunction.Equal);
     
        Debug.Log($"Lenght: {spheresMaterials.Length}");

    }

    private void OnTriggerStay(Collider other)
    {

        //Vector3 camPosititionInPortalSpace = transform.InverseTransformPoint(MainCamera.transform.position);
        //Debug.Log($"cameraPostitionInPortalSpace: {camPosititionInPortalSpace.y}");
        //if (camPosititionInPortalSpace.y <= 0.0f)
        //{
        //    spheres[0].SetActive(true);
        //    for (int i = 0; i < spheres.Length; ++i)
        //    {
        //        spheres[i].GetComponent<Renderer>().sharedMaterial.SetInt("_StencilComp", (int)CompareFunction.NotEqual);
        //    }
        //}
        //else if (camPosititionInPortalSpace.y < 0.5f)
        //{
        //    for (int i = 0; i < spheres.Length; ++i)
        //    {
        //        spheres[i].GetComponent<Renderer>().sharedMaterial.SetInt("_StencilComp", (int)CompareFunction.Always);
        //    }
        //}
        //else
        //{
        //    for (int i = 0; i < spheres.Length; ++i)
        //    {
        //        spheres[i].GetComponent<Renderer>().sharedMaterial.SetInt("_StencilComp", (int)CompareFunction.Equal);
        //    }
        //}

    }
    private void OnTriggerExit(Collider other)
    {
        Debug.Log("Exist");
        spheres[0].GetComponent<Renderer>().sharedMaterial.SetInt("_StencilComp", (int)CompareFunction.Equal);
    }

}
