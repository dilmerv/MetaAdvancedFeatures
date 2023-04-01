using System.Collections;
using Unity.VisualScripting;
using UnityEngine;

namespace MetaAdvancedFeatures.SceneUnderstanding
{
    public class SceneUnderstandingManager : MonoBehaviour
    {
        protected OVRSceneManager SceneManager { get; private set; }

        private void Awake()
        {
            SceneManager = GetComponent<OVRSceneManager>();
        }

        void Start()
        {
            SceneManager.SceneModelLoadedSuccessfully += OnSceneModelLoadedSuccessfully;
        }

        private void OnSceneModelLoadedSuccessfully()
        {
            StartCoroutine(AddCollider());
        }

        private IEnumerator AddCollider()
        {
            // [Note] jackyangzzh: to avoid racing condition, wait for end of frame
            //                     for all prefabs to be populated properly before continuing
            yield return new WaitForEndOfFrame();

            MeshRenderer[] allObjects = FindObjectsOfType<MeshRenderer>();

            foreach (var obj in allObjects)
            {
                if (obj.GetComponent<Collider>() == null)
                {
                    obj.AddComponent<BoxCollider>();
                }
            }
        }
    }
}
