/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** GameState
*/

#pragma once
#include <memory>
#include <vector>

namespace blb {

    class Entity;
    /**
     * @brief Class IGameState
     *
     */



    class IGameState {
        public:
            /**
             * @brief Destroy the IGameState object
             *
             */

            virtual ~IGameState() = default;
            /**
             * @brief update
             *
             * @return true if there is no error
             * @return false
             */
            virtual bool update(void) = 0;

            /**
             * @brief draw
             *
             */

            virtual void load() = 0;

            virtual void draw(void) = 0;

            virtual void unload() = 0;

            virtual std::vector<std::shared_ptr<Entity>> getEntities(void) = 0;

            virtual void addEntities(Entity *entity) = 0;

        protected:
        private:
    };

}
