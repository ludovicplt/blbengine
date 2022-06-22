/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** AGameState
*/

#pragma once

#include "IGameState.hpp"

namespace blb {

    /**
     * @brief Gamestate class inherit from IGameState
     * 
     */
    class Gamestate : virtual IGameState
    {
        public:
            /**
             * @brief Construct a new Gamestate object
             * 
             */
            Gamestate() : IGameState() {

            }

            /**
             * @brief Destroy the Gamestate object
             * 
             */
            ~Gamestate()
            {

            }

            /**
             * @brief draw objects on the gamestate
             * 
             */
            void draw(void) override
            {

            }

            /**
             * @brief update of the game state
             * 
             * @return true if there is no error
             * @return false 
             */
            bool update(void) override
            {
                return true;
            }
    };


}