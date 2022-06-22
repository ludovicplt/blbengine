/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Color
*/

#pragma once
#include "type/Vector4.hpp"
#include "raylib.h"

namespace blb {
    class Colors {
        public:
            inline static Vector4u _white = {255, 255, 255, 255};
            inline static Vector4u _black = {0, 0, 0, 255};
            inline static Vector4u _blue = {0, 121, 241, 255};
            inline static Vector4u _red = {230, 41, 55, 255};
            inline static Vector4u _violet = {135, 60, 190, 255};
            inline static Vector4u _green = {0, 228, 48, 255};
            inline static Vector4u _orange = {255, 161, 0, 255};
            inline static Vector4u _transparent = {0, 0, 0, 0};

            /**
             * @brief  Class Color Constructor
             * @note   Encapsulation of raylib Color
             * @param  clr: enum color
             */
            Colors(unsigned char r, unsigned char g, unsigned char b, unsigned char a);

            /**
             * @brief  Class Color Destructor
             */
            ~Colors() = default;

            /**
             * @brief  Get the color in the color class encapsulation
             * @retval Vector4 unsigned char (x, y, z, w -> r, g, b, a)
             */
            Vector4u getColor();



            Color color;
    };
}
