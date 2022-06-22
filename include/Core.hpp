/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** core
*/

#pragma once

#include <stack>
#include <iostream>
#include <memory>
#include <raylib.h>
#include "AGamestate.hpp"
#include "Window.hpp"
#include "GameState.hpp"
#include "Event.hpp"
#include "ICamera.hpp"
#include "Entity.hpp"
#include <map>

namespace blb {

    /**
     * @brief core of the game engine can't be multiple defined
     * 
     */

    class Core
    {
        protected:
            /**
             * @brief Construct a new Core object
             * 
             */
            Core();
            /**
             * @brief static core pointer
             * 
             */
            static Core *core_;
            /**
             * @brief ICamera
             * 
             */
            ICamera *camera_;
            /**
             * @brief list of 3d models
             * 
             */
            std::map<std::string, Model> obj;
            int fade = 0;
            bool pop = false;


            std::stack<std::shared_ptr<AGamestate>> states;
        private:

            /**
             * @brief destroy core entity
             * 
             * 
             */

            void destroyCurrentGameInstance(void);

            /**
             * @brief games states
             * 
             */


            /**
             * @brief  Load the current latest scene
             * @retval None
             */
            void loadScene();

        public:
            Event event;
            /**
             * @brief window
             * 
             */
            Window *win = nullptr;

            /**
             * @brief Construct a new Core object
             * 
             * @param other 
             */
            Core(Core &other) = delete;

            /**
             * @brief Destroy the Core object
             * 
             */
            ~Core();

            /**
             * @brief Get the Instance object
             * 
             * @return Core* 
             */
            static Core *getInstance(void);

            static std::vector<std::shared_ptr<Entity>> getEntities();

            static void addEntities(Entity *Entity);

            /**
             * @brief run the game
             * 
             * @return true the game close widthout error
             * @return false there is one error
             */

            bool run(void);

            /**
             * @brief push a game state
             * 
             * @param gamestate 
             * @return true 
             * @return false 
             */

            bool pushGameState(std::shared_ptr<AGamestate> &gamestate);

            /**
             * @brief pop the game state from the stack
             * 
             * @return true 
             * @return false 
             */

            bool popGameState(void);

            /**
             * @brief Set the Window object
             * 
             * @param window 
             * @return true 
             * @return false 
             */

            bool setWindow(Window *window);


            /**
             * @brief Set the Camera object
             * 
             * @param camera 
             * @return true 
             * @return false 
             */
            bool setCamera(ICamera *camera);

            /**
             * @brief  Get delta time from last frame
             * @retval Delta time
             */
            static float GetTimeFrame(void);

            static bool createModel(std::string const &name, std::string const &file);

            static Model &FindModel(std::string const &name);

            static void removeEntities(blb::Entity const *entity);
    };


}
