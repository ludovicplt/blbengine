/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Entity
*/

#include <iostream>
#include "Entity.hpp"

namespace blb {

    bool Entity::coordContain(blb::Vector3f<float> const &contains)
    {
        return (((int)contains.x <= (this->_position.x + this->_size.x) && (int)contains.x >= this->_position.x) &&
                ((int)contains.z <= (this->_position.z + this->_size.z) && (int)contains.z >= this->_position.z));
    }

    void Entity::removeComponent(std::string const &name)
    {
        for (std::size_t i = 0; i < this->_components.size(); i++) {
            if (this->_components[i]->getName() == name) {
                this->_components.erase(this->_components.begin() + i);
                return;
            }
        }
    };

    bool Entity::hasComponent(std::string const &name)
    {
        for (auto &it : this->_components) {
            if (it->getName() == name)
                return true;
        }
        return false;
    };

    AComponent *Entity::getComponent(std::string const &name)
    {
        for (auto &it : this->_components) {
            if (it->getName().find(name) != std::string::npos)
                return it;
        }
        return nullptr;
    };
}
