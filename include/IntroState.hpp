/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** IntroState
*/

#pragma once

#include "PlayState.hpp"
#include "blb.hpp"
#include "Texture.hpp"
#include "AGamestate.hpp"
#include "Button.hpp"
#include "Core.hpp"
#include "Shape.hpp"
#include <vector>
#include "Text.hpp"
#include "type/Rectangle.hpp"

class IntroState : public blb::AGamestate
{
    public:

        /**
         * @brief IntroState Constructor
         */
        IntroState();

        /**
         * @brief IntroState Destructor
         */
        ~IntroState();

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
        blb::Text *text1;

    protected:
    private:
        blb::Texture _texture;

        blb::Audio _musicIntro;
        blb::Audio _musicBubble;

        bool _isMusic = false;
        float _fade = 1.0f;
};
