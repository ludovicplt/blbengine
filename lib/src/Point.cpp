/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Point
*/

#include "Point.hpp"

blb::Point::Point()
{
}

blb::Point::~Point()
{
}

void blb::Point::Point3DDraw(Vector3f position, Colors &color)
{
    DrawPoint3D({position.x, position.y, position.z}, {color.getColor().x, color.getColor().y, color.getColor().z, color.getColor().w});
}