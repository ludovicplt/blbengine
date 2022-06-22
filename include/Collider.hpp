/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Collider
*/

#pragma once

#include <memory>
#include "AComponent.hpp"
#include "Cube.hpp"
#include "Entity.hpp"

namespace blb {

    class Collider : public AComponent {
        public:

            /**
             * @brief  default constructor
             * @param  &entity: entity related to the component
             */

            Collider() = default;
            Collider(std::shared_ptr<Entity> const &entity);

            /**
             * @brief  default destructor
             */
            ~Collider();

            /**
             * @brief  Check if all the entities collide and stop their velocity
             * @retval None
             */
            virtual void update() override;

            /**
             * @brief  AABB collision system, check if entity1 collide with entity2
             * @param  entity1: the first entity
             * @param  entity2: the second entity
             * @retval return true if the two entity collide, false otherwise
             */
            bool isColliding(std::shared_ptr<blb::IEntity> const &entity1,
                                std::shared_ptr<blb::IEntity> const &entity2);

            /**
             * @brief  Reset the position of the entity on collision
             * @param  entity: the entity to reset the position
             * @retval None
             */
            virtual void collisionHandlement(std::shared_ptr<IEntity> entity);

            /**
             * @brief  return the BoudingBox of the entity binded to the collider
             * @retval the BoudingBox of the entity
             */
            BoundingBox getBoundingBox();

            std::vector<std::shared_ptr<Entity>> entities_;
            Cube cube_;
        protected:
        private:
            
            
    };
}
