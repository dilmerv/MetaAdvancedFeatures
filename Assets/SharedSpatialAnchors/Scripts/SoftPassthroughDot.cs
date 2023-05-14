/*
* Copyright (c) Meta Platforms, Inc. and affiliates.
* All rights reserved.
*
* Licensed under the Oculus SDK License Agreement (the "License");
* you may not use the Oculus SDK except in compliance with the License,
* which is provided at the time of installation or download, or which
* otherwise accompanies this software in either electronic or hard copy form.
*
* You may obtain a copy of the License at
*
* https://developer.oculus.com/licenses/oculussdk/
*
* Unless required by applicable law or agreed to in writing, the Oculus SDK
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoftPassthroughDot : MonoBehaviour
{
    [SerializeField] private MeshRenderer mesh;
    private float currentAlpha = 1;
    private Transform target;

    public void Init(Transform target, Transform parent)
    {
        this.target = target;
        transform.SetParent(parent);
    }

    public void UpdateAlpha(float alpha, bool delta = false)
    {
        currentAlpha = Mathf.Clamp01(delta ? currentAlpha + alpha : alpha);
        mesh.material.SetFloat("_Alpha", currentAlpha);
    }

    public void Pos(Vector3 pos)
    {
        transform.position = pos;
        transform.LookAt(target);
    }

}
