/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** mouse
*/

#include "Mouse.hpp"

bool blb::Mouse::IsMousePressedButton(int button)
{
    return (IsMouseButtonPressed(button));
}

bool blb::Mouse::IsMouseDownButton(int button)
{
    return (IsMouseButtonDown(button));
}

bool blb::Mouse::IsMouseReleasedButton(int button)
{
    return (IsMouseButtonReleased(button));
}

int blb::Mouse::GetXMouse(void)
{
    return GetMouseX();
}

int blb::Mouse::GetYMouse(void)
{
    return GetMouseY();
}

Vector2 blb::Mouse::GetPositionMouse(void)
{
    return GetMousePosition();
}

Vector2 blb::Mouse::GetDeltaMouse(void)
{
    return GetMouseDelta();
}

void blb::Mouse::SetPositionMouse(int x, int y)
{
    SetMousePosition(x, y);
}

void blb::Mouse::SetOffsetMouse(int offsetX, int offsetY)
{
    SetMouseOffset(offsetX, offsetY);
}

void blb::Mouse::SetScaleMouse(float scaleX, float scaleY)
{
    SetMouseScale(scaleX, scaleY);
}

float blb::Mouse::GetMoveMouseWheel(void)
{
    return GetMoveMouseWheel();
}

void blb::Mouse::SetCursorMouse(int cursor)
{
    SetMouseCursor(cursor);
}