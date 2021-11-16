using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoldenArea : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject inCircle;
    public GameObject OutCircle;

    public Animator bear;

    public ParticleSystem Magic;

    public GameObject insideSound;


    void Start()
    {
    	Magic.Stop();
    }


    void OnTriggerEnter(Collider other)
	{
        Debug.Log("inside");
		inCircle.SetActive(true);
		OutCircle.SetActive(false);
		Magic.Play();
        bear.SetBool("inShadow", true);
        insideSound.SetActive(true);

	}

	void OnTriggerExit(Collider other)
		{
        Debug.Log("Outside");
        inCircle.SetActive(false);
		OutCircle.SetActive(true);
		Magic.Play();
        bear.SetBool("inShadow", false);
        insideSound.SetActive(false);

		}
    
}
