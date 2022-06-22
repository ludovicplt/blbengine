/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Color
*/

#include "type/Colors.hpp"

blb::Colors::Colors(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{
    this->color.r = r;
    this->color.g = g;
    this->color.b = b;
    this->color.a = a;
}

Vector4u blb::Colors::getColor()
{
    return (Vector4u{this->color.r, this->color.g, this->color.b, this->color.a});
}
