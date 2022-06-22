/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Cylinder
*/

#include "Cylinder.hpp"

blb::Cylinder::Cylinder()
{
}

blb::Cylinder::~Cylinder()
{
}

void blb::Cylinder::CylinderDraw(Vector3f position, float radiusTop, float radiusBottom, float height, int slices, Colors &color)
{
    DrawCylinder({position.x, position.y, position.z}, radiusTop, radiusBottom, height, slices, {color.getColor().x, color.getColor().y, color.getColor().z, color.getColor().w});
}

void blb::Cylinder::CylinderExDraw(Vector3f startPos, Vector3f endPos, float startRadius, float endRadius, int sides, Colors &color)
{
    DrawCylinderEx({startPos.x, startPos.y, startPos.z}, {endPos.x, endPos.y, endPos.z}, startRadius, endRadius, sides, {color.getColor().x, color.getColor().y, color.getColor().z, color.getColor().w});
}

void blb::Cylinder::CylinderWiresDraw(Vector3f position, float radiusTop, float radiusBottom, float height, int slices, Colors &color)
{
    DrawCylinderWires({position.x, position.y, position.z}, radiusTop, radiusBottom, height, slices, {color.getColor().x, color.getColor().y, color.getColor().z, color.getColor().w});
}

void blb::Cylinder::CylinderWiresExDraw(Vector3f startPos, Vector3f endPos, float startRadius, float endRadius, int sides, Colors &color)
{
    DrawCylinderWiresEx({startPos.x, startPos.y, startPos.z}, {endPos.x, endPos.y, endPos.z}, startRadius, endRadius, sides, {color.getColor().x, color.getColor().y, color.getColor().z, color.getColor().w});
}

Mesh blb::Cylinder::MeshCylinderGen(float radius, float height, int slices)
{
    GenMeshCylinder(radius, height, slices);
}
