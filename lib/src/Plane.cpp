/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Plane
*/

#include "Plane.hpp"

blb::Plane::Plane()
{
}

blb::Plane::~Plane()
{
}

void blb::Plane::PlaneDraw(Vector3f centerPos, Vector2f size, Colors &color)
{
    DrawPlane({centerPos.x, centerPos.y, centerPos.z}, {size.x, size.y}, {color.getColor().x, color.getColor().y, color.getColor().z, color.getColor().w});
}

Mesh blb::Plane::MeshPlaneGen(float width, float length, int resX, int resZ)
{
    GenMeshPlane(width, length, resX, resZ);
}
