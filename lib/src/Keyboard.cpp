/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Keyboard
*/

#include "Keyboard.hpp"
#include "raylib.h"

blb::Keyboard::Keyboard()
{

}

blb::Keyboard::~Keyboard()
{
}

char blb::Keyboard::getEvent()
{
    return (GetCharPressed());
}