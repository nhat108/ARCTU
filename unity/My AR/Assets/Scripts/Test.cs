using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class Test : MonoBehaviour
{
    public Material EmptyMaterial;
    public GameObject Sphere;
    // Start is called before the first frame update
    void Start()
    {
       
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator DownloadImage(string MediaUrl)
    {
        UnityEngine.Networking.UnityWebRequest request = UnityWebRequestTexture.GetTexture(MediaUrl);
        yield return request.SendWebRequest();
        if (request.result == UnityWebRequest.Result.ConnectionError)
            Debug.Log(request.error);
        else
        {
            var texture2D = ((DownloadHandlerTexture)request.downloadHandler).texture;
            EmptyMaterial.mainTexture = texture2D;
            Sphere.GetComponent<Renderer>().material = EmptyMaterial;
        }
    }
    public void SetTextureFromUrl(string url)
    {
        StartCoroutine(DownloadImage(url));
    }
    public void SetTexture()
    {
        Texture2D texture = Resources.Load("Image") as Texture2D;
        EmptyMaterial.mainTexture = texture;
        Sphere.GetComponent<Renderer>().material = EmptyMaterial;
    }
}
