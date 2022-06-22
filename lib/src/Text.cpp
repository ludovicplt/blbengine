/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Text
*/

#include "Text.hpp"
#include "type/Vector2.hpp"

namespace blb
{
    Text::Text(std::string str, blb::Vector2<float> pos, float size)
    {
        _text = str;
        _pos = pos;
        font = GetFontDefault();
        fontsize = size;
        fontspaces = 2;
    }

    Text::~Text()
    {

    }

    void Text::SetText(std::string const &text)
    {
        _text = text;
    }

    void Text::SetPos(Vector2f pos)
    {
        _pos = pos;
    }

    void Text::SetFont(Font font)
    {
        this->font = font;
    }

    void Text::setFont(std::string &font)
    {
        this->font = LoadFont(font.c_str());
    }

    void Text::setFontSize(float fontsize)
    {
        this->fontsize = fontsize;
    }

    void Text::setFontSpaces(float fontspaces)
    {
        this->fontspaces = fontspaces;
    }

    void Text::setColor(Colors color)
    {
        //this->color = color;
    }

    void Text::Draw()
    {
        DrawTextEx(font, _text.c_str(), {_pos.x, _pos.y}, fontsize, fontspaces,
            {0, 0, 0, 255});
    }

    void Text::DrawFade(float alpha)
    {
        Texture shape;

        DrawTextEx(font, _text.c_str(), {_pos.x, _pos.y}, fontsize, fontspaces,
            shape.fadeColor({0, 0, 0, 255}, alpha));
    }
}



