/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Controler
*/

#include "Controler.hpp"
#include "Core.hpp"
#include <raylib.h>
#include <iostream>

namespace blb
{


Controler::Controler(int nb) : _nb(nb)
{
}

Controler::~Controler()
{

}

Event Controler::getEvent(void)
{
    if (IsGamepadAvailable(this->_nb)) {
        if (IsGamepadButtonDown(this->_nb, GAMEPAD_BUTTON_MIDDLE)) {
            return Event::HOME;
        }
        if (IsGamepadButtonDown(this->_nb, GAMEPAD_BUTTON_MIDDLE_LEFT)) {
            return blb::Event::SELECT;
        }
        if (IsGamepadButtonDown(this->_nb, GAMEPAD_BUTTON_MIDDLE_RIGHT)) {
            return blb::Event::START;
        }
        if (IsGamepadButtonDown(this->_nb, GAMEPAD_BUTTON_LEFT_FACE_DOWN)) {
            return (blb::Event::DOWN);
        }
        if (IsGamepadButtonDown(this->_nb, GAMEPAD_BUTTON_LEFT_FACE_LEFT)) {
            return (blb::Event::LEFT);
        }
        if (IsGamepadButtonDown(this->_nb, GAMEPAD_BUTTON_LEFT_FACE_UP)) {
            return (blb::Event::UP);
        }
        if (IsGamepadButtonDown(this->_nb, GAMEPAD_BUTTON_LEFT_FACE_RIGHT)) {
            return (blb::Event::RIGHT);
        }
        if (IsGamepadButtonPressed(this->_nb, GAMEPAD_BUTTON_LEFT_TRIGGER_1)) {
            return (blb::Event::LB);
        }
        if (IsGamepadButtonPressed(this->_nb, GAMEPAD_BUTTON_LEFT_TRIGGER_2)) {
            return (blb::Event::LT);
        }
        if (IsGamepadButtonPressed(this->_nb, GAMEPAD_BUTTON_RIGHT_FACE_UP)) {
            return (blb::Event::Y);
        }
        if (IsGamepadButtonPressed(this->_nb, GAMEPAD_BUTTON_RIGHT_FACE_RIGHT)) {
            return (blb::Event::B);
        }
        if (IsGamepadButtonPressed(this->_nb, GAMEPAD_BUTTON_RIGHT_FACE_DOWN)) {
            return (blb::Event::A);
        }
        if (IsGamepadButtonPressed(this->_nb, GAMEPAD_BUTTON_RIGHT_FACE_LEFT)) {
            return (blb::Event::X);
        }
        if (IsGamepadButtonPressed(this->_nb, GAMEPAD_BUTTON_RIGHT_TRIGGER_1)) {
            return (blb::Event::RB);
        }
        if (IsGamepadButtonPressed(this->_nb, GAMEPAD_BUTTON_RIGHT_TRIGGER_2)) {
            return (blb::Event::RT);
        }
        if (IsGamepadButtonPressed(this->_nb, GAMEPAD_AXIS_LEFT_X)) {
            return (blb::Event::RT);
        }
        if (IsGamepadButtonDown(this->_nb, GAMEPAD_BUTTON_LEFT_THUMB)) {
            return (blb::Event::LTHUMBS);
        }
        if (IsGamepadButtonDown(this->_nb, GAMEPAD_BUTTON_RIGHT_THUMB)) {
            return (blb::Event::RTHUMBS);
        }

    }
    return (blb::VOID);
}

Vector3f<float> Controler::getAxisLeftMove()
{
    static float x = 0;
    static float y = 0;

    if (IsGamepadAvailable(this->_nb)) {
        x = GetGamepadAxisMovement(this->_nb, GAMEPAD_AXIS_LEFT_X);
        y = GetGamepadAxisMovement(this->_nb, GAMEPAD_AXIS_LEFT_Y);
    }
    return (Vector3f<float>(x, y, 0));
}

Vector3f<float> Controler::getAxisRightMove()
{
    static float x = 0;
    static float y = 0;

    if (IsGamepadAvailable(this->_nb)) {
        x = GetGamepadAxisMovement(this->_nb, GAMEPAD_AXIS_RIGHT_X);
        y = GetGamepadAxisMovement(this->_nb, GAMEPAD_AXIS_RIGHT_Y);
    }
    return (Vector3f<float>(x, y, 0));
}


bool Controler::isConnected()
{
    return (IsGamepadAvailable(this->_nb));
}

}
