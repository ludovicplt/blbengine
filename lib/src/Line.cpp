/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Line
*/

#include "Line.hpp"

blb::Line::Line()
{
}

blb::Line::~Line()
{
}



void blb::Line::Line3DDraw(Vector3f<float> startPos, Vector3f<float> endPos, Colors &color)
{
    DrawLine3D({startPos.x, startPos.y, startPos.z}, {startPos.x, startPos.y, startPos.z}, {color.getColor().x, color.getColor().y, color.getColor().z, color.getColor().w});
}
