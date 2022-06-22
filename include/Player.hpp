/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Player
*/

#pragma once

#include "Model3D.hpp"
#include "Entity.hpp"
#include "Collider.hpp"
#include "IEntity.hpp"
#include "type/Vector3.hpp"
#include "type/Vector2.hpp"
#include "ControlerComponent.hpp"

class Player : public blb::Entity {
    public:

        /**
         * @brief Player Destructor
         */
        ~Player();
        Player() = default;
        Player(
                blb::Vector3f<float> const &position,
                blb::Vector3f<float> const &size,
                int player,
                std::string const &texture
        );

        void update() override;
        void draw() override;
        void unload() override;
        void setVelocityX(float const &x) override;
        void setVelocityY(float const &x) override;
        void setVelocityZ(float const &x) override;
        void setVelocity(blb::Vector3f<float> const &pos) override;

        void addSpeed();
        void addBomb();
        void addfire();

    private:
        void bombInstantiate();
        void bombCoolDown();
        void checkBombPosition(blb::Vector3f<float> const &bombPos);
        void handleAnimation();
        void getRotation();

    private:
        ControlerComponent *controler;
        blb::Vector3f<float> _rotation = blb::Vector3f<float>(0, 0, 0);
        blb::Collider *collider_;
        blb::Cube cube;
        float _angle = 0;
        int bombReady = 1;
        int bombMax = 1;
        float bombCd = 0;
        ModelAnimation *anim = nullptr;
        float animDelay = .1f;
        float animTime = 0;
        bool opposite = false;
        int animationFrames = 0;
        float rangeBomb = 1;
        float _speedMultiplier = 1;

    protected:
        blb::Model3D _model;
};