/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** IEntity
*/


#pragma once


#include <string>
#include <vector>
#include <memory>
#include "raylib.h"
#include "type/Vector2.hpp"
#include "type/Vector3.hpp"
#include "AComponent.hpp"

namespace blb {

    class IComponent;

    class IEntity {
        public:

            /*
            * @brief Default destructor
            */
            virtual ~IEntity() = default;

            /*
            * @brief Return the position of the entity in a 3D space
            */
            virtual Vector3f<float> getPositionV3(void) = 0;

            /*
            * @brief Return the position of the entity in a 2D space
            */
            virtual Vector2f getPositionV2(void) = 0;

            /*
            * @brief Return the X position of the entity
            */
            virtual float getX(void) = 0;

            /*
            * @brief Return the Z position of the entity
            */
            virtual float getZ(void) = 0;

            /*
            * @brief Return the Y position of the entity
            */
            virtual float getY(void) = 0;

            /*
            * @brief Return the size of the entity in a 2D Vector
            */
            virtual Vector2f getSizeV2(void) = 0;

            /*
            * @brief Return the size of the entity in a 3D Vector
            * @return the size of the entity in a 3D Vector
            */
            virtual Vector3f<float> getSizeV3(void) = 0;

            /*
            * @brief Return the size in x of the entity
            */
            virtual float getSizeX(void) = 0;

            /*
            * @brief Return the size in y of the entity
            */
            virtual float getSizeY(void) = 0;

            /*
            * @brief Return the size in z of the entity
            */
            virtual float getSizeZ(void) = 0;

            /**
             * @brief  get the current veloctiy of the entity in a 3D space
             * @retval return: the current velocity of the entity in a 3D space
             */
            virtual Vector3f<float> getVelocity3D(void) = 0;

            /**
             * @brief  get the current velocity in x axis of the entity
             * @retval return: the current velocity in x axis of the entity
             */
            virtual float getVelocityX(void) = 0;

            /**
             * @brief  get the current velocity in y axis of the entity
             * @retval return: the current velocity in y axis of the entity
             */
            virtual float getVelocityY(void) = 0;

            /**
            * @brief  get the current velocity in z axis of the entity
            * @retval return: the current velocity in z axis of the entity
            */
            virtual float getVelocityZ(void) = 0;

            /**
             * @brief  get the current velocity of the entity in a 2D space
             * @retval return: the current velocity in a 2D space
             */
            virtual Vector2<float> getVelocity2D(void) = 0;

            /*
            * @brief Set the current size of entity
            * @param size the new size of the entity
            */
            virtual void setSize(Vector2f const &size) = 0;

            /*
            * @brief Set the current size of the entity
            * @param size the new size of the entity
            */
            virtual void setSize(Vector3f<float> const &size) = 0;

            /*
            * @brief Set the X size of the entity
            * @param x the new size in x of the entity
            */
            virtual void setSizeX(float const &x) = 0;

            /*
            * @brief Set the Y size of the entity
            * @param y the new size in y of the entity
            */
            virtual void setSizeY(float const &y) = 0;

            /*
            * @brief Set the Z size of the entity
            * @param z the new size in z of the entity
            */
            virtual void setSizeZ(float const &z) = 0;

            /*
            * @brief Set the current position of the entity in a 3D space
            * @param position the new position of the entity
            */
            virtual void setPosition(Vector3f<float> const &position) = 0;

            /*
            * @brief Set the current position of the entity in a 2D space
            * @param position the new position of the entity
            */
            virtual void setPosition(Vector2f const &position) = 0;

            /*
            * @brief Set the X position of the entity
            * @param x new position in X
            */
            virtual void setX(float const &x) = 0;

            /*
            * @brief Set the Y position of the entity
            * @param y new position in Y
            */
            virtual void setY(float const &y) = 0;

            /*
            * @brief Set the Z position of the entity
            * @param z new position in z
            */
            virtual void setZ(float const &z) = 0;

            /**
             * @brief  set the current velocity of the entity in a 3D space
             * @param  &velocity: the new velocity of the entity
             * @retval None
             */
            virtual void setVelocity(Vector3f<float> const &velocity) = 0;

            /**
             * @brief  set the current velocity of the entity in a 2D space
             * @param  &velocity: the new velocity of the entity
             * @retval None
             */
            virtual void setVelocity(Vector2<float> const &velocity) = 0;

            /**
             * @brief  set the current velocity on the X axis
             * @param  &vx: the new velocity of the entity in x axis
             * @retval None
             */
            virtual void setVelocityX(float const &vx) = 0;

            /**
             * @brief  set the current velocity on the Y axis
             * @param  &vy: the new velocity of the entity in y axis
             * @retval None
             */
            virtual void setVelocityY(float const &vy) = 0;

            /**
             * @brief  set the current velocity of the entity on the Z axis
             * @param  &vz: the  new velocity of the entity in z axis
             * @retval None
             */
            virtual void setVelocityZ(float const &vz) = 0;

            /*
            * @brief Add a component to the entity
            * @param component the component to add to the entity
            */
            virtual void addComponent(AComponent *component) = 0;

            /*
            * @brief remove the component (given in parameter) from the entity
            * @param name the name of the component to remove from the entity
            */
            virtual void removeComponent(std::string const &name) = 0;

            /*
            * @brief Check if the entity has the component passed as parameter
            * @param name the name of the component
            * @return return true if the entity has the component, false if not
            */
            virtual bool hasComponent(std::string const &name) = 0;

            /*
            * @brief Retrieve the component passed as parameter
            * @param The name of the component
            * @return return a pointer to the component, nullptr if the component does not exist
            */
            virtual AComponent *getComponent(std::string const &name) = 0;

            virtual bool coordContain(blb::Vector3f<float> const &contains) = 0;

            /*
            * @brief Update the entity
            */
            virtual void update(void) = 0;

            /*
            * @brief Draw the entity if it has a Display component
            */
            virtual void draw(void) = 0;

            /**
             * @brief Unload the current entity
             * @retval None
             */
            virtual void unload() = 0;

        protected:

        private:
    };
}
