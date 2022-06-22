/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** MenuState
*/

#pragma once

#include "PlayState.hpp"
#include "blb.hpp"
#include "Texture.hpp"
#include "AGamestate.hpp"
#include "Button.hpp"
#include "Core.hpp"
#include "Shape.hpp"
#include "Line.hpp"
#include "Text.hpp"
#include "type/Rectangle.hpp"
#include <vector>

class MenuState : public blb::AGamestate {
    public:

        /**
         * @brief MenuState Constructor
         */
        MenuState();

        /**
         * @brief MenuState Destructor
         */
        ~MenuState();

        /**
         * @brief update the menu state
         * @retval state of the menu (bool)
         */
        bool update() override;

        /**
         * @brief draw
         * @retval None
         */
        void draw() override;

        void load() override;

        void unload() override;

        blb::Core *core;
        blb::Line line;
        blb::Controler *control;
        blb::Text *text1;
        blb::Text *text2;
        blb::Text *text3;
        blb::Text *text4;
    protected:
    private:
        int _nbPlayer = 1;
        blb::Texture _texture;
        blb::Audio _musicMenu;

        blb::Button _newGame;
        blb::Button _rarrow;
        blb::Button _larrow;
        blb::Button _rarrowNb;
        blb::Button _larrowNb;
        blb::Button _setting;

        Rectf _textBox = {0, 0, 0, 0};
        Vector2f _mousePoint = { 0.0f, 0.0f };

        bool updated = false;
        bool _isMusic = false;
        float _frameheight = 0;
        int _btnState = 0;
        bool _btnAction = false;
};
