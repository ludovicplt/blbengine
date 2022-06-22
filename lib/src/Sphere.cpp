/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Sphere
*/

#include "Sphere.hpp"

blb::Sphere::Sphere()
{
}

blb::Sphere::~Sphere()
{
}


void blb::Sphere::SphereDraw(Vector3f centerPos, float radius, Colors &color)
{
    DrawSphere({centerPos.x, centerPos.y, centerPos.z}, radius, {color.getColor().x, color.getColor().y, color.getColor().z, color.getColor().w});
}

void blb::Sphere::SphereExDraw(Vector3f centerPos, float radius, int rings, int slices, Colors &color)
{
    DrawSphereEx({centerPos.x, centerPos.y, centerPos.z}, radius, rings, slices, {color.getColor().x, color.getColor().y, color.getColor().z, color.getColor().w});
}

void blb::Sphere::SphereWiresDraw(Vector3f centerPos, float radius, int rings, int slices, Colors &color)
{
    DrawSphereWires({centerPos.x, centerPos.y, centerPos.z}, radius, rings, slices, {color.getColor().x, color.getColor().y, color.getColor().z, color.getColor().w});
}

Mesh blb::Sphere::MeshSphereGen(float radius, int rings, int slices)
{
    GenMeshSphere(radius, rings, slices);
}

Mesh blb::Sphere::MeshHemiSphereGen(float radius, int rings, int slices)
{
    GenMeshHemiSphere(radius, rings, slices);
}

bool blb::Sphere::CollisionSpheresCheck(Vector3f center1, float radius1, Vector3f center2, float radius2)
{
    CheckCollisionSpheres({center1.x, center1.y, center1.z}, radius1, {center2.x, center2.y, center2.z}, radius2);
}

bool blb::Sphere::CollisionBoxSphereCheck(BoundingBox box, Vector3f center, float radius)
{
    CheckCollisionBoxSphere(box, {center.x, center.y, center.z}, radius);
}
