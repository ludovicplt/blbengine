/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** LoadState
*/

#pragma once

#include "blb.hpp"
#include "Texture.hpp"
#include "AGamestate.hpp"
#include "Shape.hpp"
#include "Core.hpp"
#include "Button.hpp"

class LoadState : public blb::AGamestate {
    public:

        /**
         * @brief LoadState Constructor
         */
        LoadState();

        /**
         * @brief LoadState Destructor
         */
        ~LoadState();

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

        /**
         * @brief  LoadState Loader
         * @retval None
         */
        void load() override;

        void unload() override;

        blb::Core *core;
    protected:
    private:
        blb::Texture _texture;

        blb::Button _rarrow;
        blb::Button _larrow;
        blb::Button _lbutton;
        blb::Button _setting;

        float _frameheight = 0;
        int _btnState = 0;
        bool _btnAction = false;
        Vector2f _mousePoint = { 0.0f, 0.0f };

        bool updated = false;
};
