/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** ACommponent
*/

#include "AComponent.hpp"

namespace blb {

    AComponent::AComponent()
    {

    }

    AComponent::~AComponent()
    {

    }

    std::string const &AComponent::getName()
    {
        return this->_name;
    }

    void AComponent::initialize(std::shared_ptr<Entity> const &entity)
    {
        this->_entity = entity;
    }

void AComponent::update(void)
{
    
}

}
