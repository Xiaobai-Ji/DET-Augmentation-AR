using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class onScan : MonoBehaviour
{
	[SerializeField] ClickerCount clickerCount;
    // Start is called before the first frame update
    void Start()
    {
        clickerCount.counter();
    }

}
