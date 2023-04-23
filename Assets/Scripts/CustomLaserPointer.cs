using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class CustomLaserPointer : MonoBehaviour
{
    [SerializeField]
    private Transform controllerAnchor;

    [SerializeField]
    private TextMeshProUGUI displayText = null;

    [Header("Controller Button Actions")]
    [SerializeField]
    private OVRInput.RawButton meshRenderToggleAction;

    [SerializeField]
    private OVRInput.RawButton objectsToggleAction;

    [SerializeField]
    private OVRInput.RawButton restoreObjectsAction;

    [Header("Line Render Settings")]
    [SerializeField]
    private float lineWidth = 0.01f;

    [SerializeField]
    private float lineMaxLength = 50f;

    private RaycastHit hit;

    private LineRenderer lineRenderer;

    private List<GameObject> processedObjects = new List<GameObject>();

    private void Awake()
    {
        lineRenderer = gameObject.GetComponent<LineRenderer>();
        lineRenderer.widthMultiplier = lineWidth;
    }

    void Update()
    {
        Vector3 anchorPosition = controllerAnchor.position;
        Quaternion anchorRotation = controllerAnchor.rotation;

        if (Physics.Raycast(new Ray(anchorPosition, anchorRotation * Vector3.forward), out hit, lineMaxLength))
        {
            GameObject objectHit = hit.transform.gameObject;

            //TODO - Implement OVR Semantic Classification Display
            OVRSemanticClassification classification = objectHit?.GetComponentInParent<OVRSemanticClassification>();

            if(classification != null && classification.Labels?.Count > 0)
            {
                displayText.text = classification.Labels[0];
            }
            else
            {
                displayText.text = string.Empty;
            }


            lineRenderer.SetPosition(0, anchorPosition);
            lineRenderer.SetPosition(1, hit.point);


            //TODO - Implement Semantic Objects (GameObject Toggle and Mesh Renderer Toggle)
            if (classification != null && classification.Contains(OVRSceneManager.Classification.WallFace))
            {
                // toggle visibility completely
                if (OVRInput.GetDown(objectsToggleAction))
                {
                    objectHit.SetActive(false);
                    AddProcessedObject(objectHit);
                }
                // toggle just mesh mesh renderer and collider will still be active
                else if (OVRInput.GetDown(meshRenderToggleAction))
                {
                    objectHit.GetComponent<MeshRenderer>().enabled = false;
                    AddProcessedObject(objectHit);
                }
            }
        }
        else
        {
            displayText.text = string.Empty;

            lineRenderer.SetPosition(0, anchorPosition);
            lineRenderer.SetPosition(1, anchorPosition + anchorRotation * Vector3.forward * lineMaxLength);
        }

        //TODO - Implement Restore of all objects to original state
        if (OVRInput.GetDown(restoreObjectsAction) && processedObjects.Count > 0)
        { 
            foreach(var processObject in processedObjects)
            {
                processObject.GetComponent<MeshRenderer>().enabled = true;
                processObject.SetActive(true);
            }
            processedObjects.Clear();
        }
    }

    private void AddProcessedObject(GameObject objectHit)
    {
        if (!processedObjects.Contains(objectHit))
        {
            processedObjects.Add(objectHit);
        }
    }
}
