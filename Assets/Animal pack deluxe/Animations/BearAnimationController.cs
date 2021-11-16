using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BearAnimationController : MonoBehaviour
{
	[SerializeField] ClickerCount clickerCount;
	public Animator bearAnimationController;

    // Update is called once per frame
    void Update()
    {
    	if(clickerCount.clickerCounter == 0)
    	{
    		Debug.Log("Count zero");
    	}
    	if(clickerCount.clickerCounter == 1)
    	{
    		Debug.Log("Count One");
    	}
    	if(clickerCount.clickerCounter == 2)
    	{
    		Debug.Log("Attack!");
    		bearAnimationController.SetInteger("animationTrigger", 1);


    	}
        
    }
}
