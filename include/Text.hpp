/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Text
*/

#pragma once

#include "raylib.h"
#include <iostream>
#include "type/Vector2.hpp"
#include "type/Vector4.hpp"
#include "type/Colors.hpp"
#include "Texture.hpp"

namespace blb {
    class Text {
        public:
            Text(std::string str, blb::Vector2<float> pos, float size);
            ~Text();
            std::string _text;
            Vector2f _pos;
            Font font;
            float fontsize;
            float fontspaces = 2;

            void SetText(std::string const &text);
            void SetPos(Vector2f pos);
            void SetFont(Font font);
            void setFont(std::string &font);
            void setFontSize(float fontsize);
            void setFontSpaces(float fontspaces);
            void setColor(Colors color);
            void Draw();
            void DrawFade(float alpha);

        protected:
        private:
    };
}
