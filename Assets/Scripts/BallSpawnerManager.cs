using UnityEngine;

public class BallSpawnerManager : MonoBehaviour
{
    [SerializeField]
    private Transform trackingspace;

    [SerializeField]
    private GameObject controllerTransform;

    [SerializeField]
    private OVRInput.Controller controller;

    [SerializeField]
    private OVRInput.RawButton shootBallAction;

    [SerializeField]
    private float addedForce = 0.25f;

    [SerializeField]
    private Vector3 offset;

    [SerializeField]
    private GameObject ballPrefab;

    private GameObject ball;

    private void Update()
    {
        if (OVRInput.Get(shootBallAction))
        {
            ball = Instantiate(ballPrefab, controllerTransform.transform.position + offset, Quaternion.identity);

            var ballPos = ball.transform.position;
            var vel = trackingspace.rotation * OVRInput.GetLocalControllerVelocity(controller);
            var angVel = OVRInput.GetLocalControllerAngularVelocity(controller);

            ball.GetComponent<BouncingBallLogic>().Release(ballPos, vel, angVel);
            ball.GetComponent<Rigidbody>().AddForce(controllerTransform.transform.forward * addedForce);
        }
    }
}
