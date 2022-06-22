/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Bomb
*/

#ifndef BOMB_HPP_
#define BOMB_HPP_

#include "Cube.hpp"
#include "Entity.hpp"
#include "Collider.hpp"
#include "WallGrief.hpp"
#include "IEntity.hpp"
#include "type/Vector3.hpp"
#include "type/Vector2.hpp"
#include "Core.hpp"

class Bomb : public blb::Entity {

    public:
        /**
         * @brief  Create a bomb
         * @param  &position: It's position
         */
        Bomb(blb::Vector3f<float> const &position, float factor);
        /**
         * @brief  Destroy a bomb
         */
        ~Bomb();
        /**
         * @brief  Check bomb delay
         * @retval None
         */
        void update() override;
        /**
         * @brief  Show a bomb
         * @retval None
         */
        void draw() override;

        void unload() override;

        /**
         * @brief  Check if bomb has exploded
         * @retval true or false
         */
        bool getExplose(void);

    private:
        void getGrieffedEntity(std::shared_ptr<blb::Entity> const &entity);
        void destroyWall(WallGrief *it);
        void basicPosition(std::vector<blb::Vector3f<float>> &positions);
        void bonusPosition(std::vector<blb::Vector3f<float>> &positions, int factor);
        void killPlayer();
        bool inRange(blb::Vector3f<float> const &pPos, blb::Vector3f<float> const &pSize);

    private:
        std::vector<WallGrief *> destroyableWall;
        std::vector<blb::Cube> _cubes;
        blb::Collider *_collider = nullptr;
        std::vector<blb::Vector3f<float>> positions;
        blb::Cube _bomb;
        blb::Model3D _bomb_model;
        float _range = 1;
        bool _explose = false;
        float _deltaTime = 0;
        int count = 0;
        float _factor = 0;
};

#endif /* !BOMB_HPP_ */
