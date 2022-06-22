/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Circle
*/

#include "Circle.hpp"

blb::Circle::Circle()
{
}

blb::Circle::~Circle()
{
}

void blb::Circle::Circle3DDRaw(Vector3f center, float radius, Vector3f rotationAxis, float rotationAngle, Colors &color)
{
    DrawCircle3D({center.x, center.y, center.z}, radius, {rotationAxis.x, rotationAxis.y, rotationAxis.z}, rotationAngle, {color.getColor().x, color.getColor().y, color.getColor().z, color.getColor().w});
}
