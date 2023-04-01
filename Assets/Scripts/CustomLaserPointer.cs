using Meta.WitAi;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CustomLaserPointer : MonoBehaviour
{
    [SerializeField]
    private OVRControllerHelper controller;

    [SerializeField]
    private Material lineMaterial;

    [SerializeField]
    private float lineWidth = 0.01f;

    [SerializeField]
    private float lineMaxLength = 50f;

    private RaycastHit hit;
    private LineRenderer lineRenderer;

    private void Awake()
    {
        lineRenderer = gameObject.GetComponent<LineRenderer>();
    }

    void Start()
    {
        lineRenderer.material = lineMaterial;
        lineRenderer.widthMultiplier = lineWidth;
    }

    void Update()
    {
        Vector3 controllerPosition = controller.transform.position;
        Quaternion controllerRotation = controller.transform.rotation;

        Ray ray = new Ray(controllerPosition, controllerRotation * Vector3.forward);

        if (Physics.Raycast(ray, out hit, lineMaxLength))
        {
            GameObject objectHit = hit.transform.gameObject;
            Debug.Log("Object Hit: " + objectHit.name);
            lineRenderer.SetPosition(0, controllerPosition);
            lineRenderer.SetPosition(1, hit.point);
        }
        else
        {
            lineRenderer.SetPosition(0, controllerPosition);
            lineRenderer.SetPosition(1, controllerPosition + controllerRotation * Vector3.forward * lineMaxLength);
        }
    }
}
