/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** PlayState
*/

#pragma once

#include "blb.hpp"
#include "IGameState.hpp"
#include "Entity.hpp"
#include "AGamestate.hpp"
#include "Map.hpp"
#include "Texture.hpp"
#include "Shape.hpp"
#include <vector>
#include <memory>

#define WORLD_TILE_SIZE_X 20
#define WORLD_TILE_SIZE_Y 20
#define WORLD_TILE_SIZE_Z 20

class Map;

class PlayState : public blb::AGamestate {

    public:

        /**
         * @brief PlayState Constructor
         */
        PlayState(int test);

        PlayState();

        ~PlayState();

        bool update() override;

        void draw() override;

        void load() override;

        void unload() override;

        bool pauseHandlement(float const &deltaTime, int &pauseState, blb::Shape &shaper);

    private:
        bool cutScene();

    protected:
    private:
        Map *map = nullptr;
        blb::Cam3D *camera;
        blb::Vector3f<float> _camEndPos = blb::Vector3f<float>(0, 0, 0);
        bool endScene = false;
        bool pause = false;
        blb::Core *core;
        blb::Controler *controler;
        int _nbPlayer;
        bool updated = false;

        const std::vector<std::string> _textureArray = {
            "./resources/girl_text_red.png",
            "./resources/girl_text_green.png",
            "./resources/girl_text_blue.png",
            "./resources/girl_text_yellow.png",
        };

        const std::vector<Vector3f> _spawnArray = {
            {25, 0, 25},
            {210, 0, 25},
            {25, 0, 210},
            {210, 0, 210}
        };

        blb::Audio *_mainTrack;
        Rectf _bS = {0, 0, 0, 0};
        float buttonCd = 0;
        float buttonTimePadding = .3f;
        bool buttonReady = true;
        bool _ismusic = false;
};

