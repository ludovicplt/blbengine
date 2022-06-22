/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Entity
*/

#pragma once

#include "IEntity.hpp"

namespace blb {

    class Entity : public IEntity {
        public:

            Entity(Entity &entity)
            {
                *this = entity;
            }

            Entity(void)
            {

            }

            ~Entity()
            {

            }

            /*
            * @brief Return the position of the entity in a 3D space
            */
            Vector3f<float> getPositionV3(void) override final
            {
                return this->_position;
            };

            /*
            * @brief Return the position of the entity in a 2D space
            */
            Vector2f getPositionV2(void) override final
            {
                return Vector2f(this->_position.x, this->_position.y);
            };

            /*
            * @brief Return the X position of the entity
            */
            float getX(void) override final
            {
                return this->_position.x;
            };

            /*
            * @brief Return the Z position of the entity
            */
            float getY(void) override final
            {
                return this->_position.y;
            };

            /*
            * @brief Return the Y position of the entity
            */
            float getZ(void) override final
            {
                return this->_position.z;
            };

            /*
            * @brief Return the size of the entity in a 2D Vector
            */
            Vector2f getSizeV2() override final
            {
                return Vector2f(this->_size.x, this->_size.y);
            };

            /*
            * @brief Return the size of the entity in a 3D Vector
            * @return the size of the entity in a 3D Vector
            */
            Vector3f<float> getSizeV3(void) override final
            {
                return this->_size;
            };

            /*
            * @brief Return the size in x of the entity
            */
            float getSizeX(void) override final
            {
                return this->_size.x;
            };

            /*
            * @brief Return the size in y of the entity
            */
            float getSizeY(void) override final
            {
                return this->_size.y;
            };

            /*
            * @brief Return the size in z of the entity
            */
            float getSizeZ(void) override final
            {
                return this->_size.z;
            };

            /**
             * @brief  get the current velocity of the entity in a 3D space
             * @retval return: the current velocity of the entity in a 3D space
             */
            Vector3f<float> getVelocity3D(void) override
            {
                return this->_velocity;
            }

            /**
             * @brief  get the current velocity in x axis of the entity
             * @retval return: the current velocity in x axis of the entity
             */
            float getVelocityX(void) override
            {
                return this->_velocity.x;
            }

            /**
             * @brief  get the current velocity in y axis of the entity
             * @retval return: the current velocity in y axis of the entity
             */
            float getVelocityY(void) override
            {
                return this->_velocity.y;
            }

            /**
            * @brief  get the current velocity in z axis of the entity
            * @retval return: the current velocity in z axis of the entity
            */
            float getVelocityZ(void) override
            {
                return this->_velocity.z;
            }

            /**
             * @brief  get the current velocity of the entity in a 2D space
             * @retval return: the current velocity in a 2D space
             */
            Vector2<float> getVelocity2D(void) override
            {
                return Vector2<float>(this->_velocity.x, this->_velocity.y);
            }

            /*
            * @brief Set the current size of entity
            * @param size the new size of the entity
            */
            void setSize(Vector2f const &size) override final
            {
                this->_size = Vector3f<float>(size.x, size.y, 0);
            };

            /*
            * @brief Set the current size of the entity
            * @param size the new size of the entity
            */
            void setSize(Vector3f<float> const &size) override final
            {
                this->_size = size;
            };

            /*
            * @brief Set the X size of the entity
            * @param x the new size in x of the entity
            */
            void setSizeX(float const &x) override final
            {
                this->_position.x = x;
            };

            /*
            * @brief Set the Y size of the entity
            * @param y the new size in y of the entity
            */
            void setSizeY(float const &y) override final
            {
                this->_position.y = y;
            };

            
            /*
            * @brief Set the Z size of the entity
            * @param z the new size in z of the entity
            */
            void setSizeZ(float const &z) override final
            {
                this->_position.z = z;
            };


            /*
            * @brief Set the current position of the entity in a 3D space
            * @param position the new position of the entity
            */
            void setPosition(Vector3f<float> const &position) override final
            {
                this->_position = position;
            };

            /*
            * @brief Set the current position of the entity in a 2D space
            * @param position the new position of the entity
            */
            void setPosition(Vector2f const &position) override final
            {
                this->_position = Vector3f<float>(position.x, position.y, 0);
            };

            /*
            * @brief Set the X position of the entity
            * @param x new position in X
            */
            void setX(float const &x) override final
            {
                this->_position.x = x;
            };

            /*
            * @brief Set the Y position of the entity
            * @param y new position in Y
            */
            void setY(float const &y) override final
            {
                this->_position.y = y;
            };

            /*
            * @brief Set the Z position of the entity
            * @param z new position in z
            */
            void setZ(float const &z) override final
            {
                this->_position.z = z;
            };

            /**
            * @brief  set the current velocity of the entity in a 3D space
            * @param  &velocity: the new velocity of the entity
            * @retval None
            */
            void setVelocity(Vector3f<float> const &velocity) override
            {
                this->_velocity = velocity;
            }

            /**
            * @brief  set the current velocity of the entity in a 2D space
            * @param  &velocity: the new velocity of the entity
            * @retval None
            */
            void setVelocity(Vector2<float> const &velocity) override
            {
                this->_velocity = Vector3f<float>(velocity.x, velocity.y, 0);
            }

            /**
            * @brief  set the current velocity on the X axis
            * @param  &vx: the new velocity of the entity in x axis
            * @retval None
            */
            void setVelocityX(float const &vx) override
            {
                this->_velocity.x = vx;
            }

            /**
            * @brief  set the current velocity on the Y axis
            * @param  &vy: the new velocity of the entity in y axis
            * @retval None
            */
            void setVelocityY(float const &vy) override
            {
                this->_velocity.y = vy;
            }

            /**
            * @brief  set the current velocity of the entity on the Z axis
            * @param  &vz: the  new velocity of the entity in z axis
            * @retval None
            */
            void setVelocityZ(float const &vz) override
            {
                this->_velocity.z = vz;
            }

            /*
            * @brief Add a component to the entity
            * @param component the component to add to the entity
            */
            void addComponent(AComponent *component) override final
            {
                this->_components.push_back(component);
            };

            /*
            * @brief Check if the entity has the component passed as parameter
            * @param name the name of the component
            * @return return true if the entity has the component, false if not
            */
            void removeComponent(std::string const &name) override final;

            /*
            * @brief Retrieve the component passed as parameter
            * @param The name of the component
            * @return return a pointer to the component, nullptr if the component does not exist
            */
            bool hasComponent(std::string const &name) override final;

            /*
            * @brief Retrieve the component passed as parameter
            * @param The name of the component
            * @return return a pointer to the component, nullptr if the component does not exist
            */
            AComponent *getComponent(std::string const &name) override final;

            /**
             * @brief check if the entity coordinate is between contains
             * @param  &contains: coord between entity
             * @retval true if player is between contains else false
             */
            bool coordContain(blb::Vector3f<float> const &contains) override final;

            /**
             * @brief  update the current entity
             * @retval None
             */
            virtual void update() override = 0;

            /**
             * @brief draw the entity in the world
             * @retval None
             */
            virtual void draw() override = 0;

            /**
             * @brief Unload the current entity
             * @retval None
             */
            virtual void unload() override = 0;

        protected:
            Vector3f<float> _position = Vector3f<float> (0, 0, 0);
            Vector3f<float> _size = Vector3f<float> (0, 0, 0);
            Vector3f<float> _velocity = Vector3f<float> (0, 0, 0);
            std::vector<AComponent *> _components;

        private:

    };
}
