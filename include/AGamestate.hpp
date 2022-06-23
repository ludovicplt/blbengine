/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Aplaystate
*/

#pragma once

#include "IGameState.hpp"
#include <iostream>
#include "Entity.hpp"

namespace blb {
    class AGamestate : IGameState {
        public:
            ~AGamestate() = default;

            virtual bool update(void) override
            {
                for (auto &it : this->_entities) {
                    if (it != nullptr)
                        it->update();
                }
                return (true);
            }

            virtual void draw(void)
            {
                return;
            }

            std::vector<std::shared_ptr<Entity>> getEntities(void)
            {
                return (this->_entities);
            }

            void addEntities(Entity *Ent)
            {
                this->_entities.push_back(std::shared_ptr<Entity>(Ent));
            }

            void removeEntities(Entity const *entity)
            {
                std::size_t i = 0;

                if (entity == nullptr)
                    return;
                for (auto &it : this->_entities) {
                    if (it != nullptr) {
                        if (entity == it.get()) {
                            this->_entities.erase(this->_entities.begin() + i);
                            return;
                        }
                    }
                    i++;
                }
            }

            virtual void load() override = 0;

            virtual void unload() override = 0;

            std::vector<std::shared_ptr<Entity>> _entities;
        private:
    };
}
