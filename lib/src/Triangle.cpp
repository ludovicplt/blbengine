/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Triangle
*/

#include "Triangle.hpp"

blb::Triangle::Triangle()
{

}

blb::Triangle::~Triangle()
{

}

void blb::Triangle::Triangle3DDraw(Vector3f v1, Vector3f v2, Vector3f v3, Colors &color)
{
    DrawTriangle3D({v1.x, v1.y, v1.z}, {v2.x, v2.y, v2.z}, {v3.x, v3.y, v3.z}, {color.getColor().x, color.getColor().y, color.getColor().z, color.getColor().w});
}

void blb::Triangle::TriangleStrip3DDraw(Vector3f *points, int pointsCount, Colors &color)
{
    DrawTriangleStrip3D({points->x, points->y, points->z}, pointsCount, {color.getColor().x, color.getColor().y, color.getColor().z, color.getColor().w});
}
