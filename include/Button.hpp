/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Button
*/

#pragma once

#include "blb.hpp"
#include "Texture.hpp"
#include "type/Colors.hpp"
#include "Shape.hpp"

namespace blb {
    class Button : public Shape {
        public:
            Button();
            ~Button();
            void CreateButton(std::string path, float screenWidth, float screenHeight,
                float width, float height, float minusWidth, float minusHeight);
            void DrawButton(Vector4u color, Vector4u tint);
            bool CollideButton(Vector2f _mousePoint, Button _button);
            Core *core;
        protected:
        public:
            Texture _txt;
            Rectf    _src        = {0, 0, 0, 0};
            Rectf    _hitbox     = {0, 0, 0, 0};
            Vector2f _mousePoint = {0.0f, 0.0f};
            float _frameheight = 0;
    };
}
