/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** IComponent
*/

#pragma once

#include <iostream>


namespace blb {

    class Entity;

    class IComponent {
        public:

            /**
             * @brief IComponent Destructor
             */
            virtual ~IComponent() = default;

            /**
             * @brief  get the component name
             * @retval None
             */
            virtual std::string const &getName(void) = 0;

            /**
             * @brief  Update
             * @retval None
             */
            virtual void update(void) = 0;

            /**
             * @brief  initialization of the entity
             * @param  entity: entity
             * @retval None
             */
            virtual void initialize(std::shared_ptr<Entity> const &Ientity) = 0;
    };
}