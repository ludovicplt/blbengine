/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** SettingState
*/

#pragma once
#include "blb.hpp"
#include "Texture.hpp"
#include "AGamestate.hpp"
#include "Button.hpp"
#include "Image.hpp"
#include "Core.hpp"
#include <vector>

class SettingState : public blb::AGamestate {
    public:
        /**
         * @brief Setting Constructor
         */
        SettingState();
        ~SettingState();

        bool update() override;

        void draw() override;

        void load() override;

        void unload() override;

        blb::Core *core;
        blb::Audio _audio;
    protected:
    private:
        blb::Button fullScreen;
        blb::Button plus;
        blb::Button minus;
        blb::Button _return;
        blb::Button _iconVol;
        blb::Texture _texture;

        float _frameheight = 0;
        Rectf _sourceRec = {0, 0, 0, 0};
        Vector2f _mousePoint = { 0.0f, 0.0f };

        int _btnState = 0;
        bool _btnAction = false;
        bool updated = false;
};
