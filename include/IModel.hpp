/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** IModel
*/

#pragma once

#include <string>
#include <vector>
#include "raylib.h"
#include "type/Vector3.hpp"
#include "type/Vector2.hpp"
#include "type/Colors.hpp"

namespace blb {

    class IModel {
        public:

            IModel() = default;

            /*
            * @brief Default destructor
            */
            virtual ~IModel() = default;
            /*
            * @brief Return the position of the shape in a 3D space
            */
            virtual Vector3f<float> getPositionV3(void) = 0;
            /*
            * @brief Return the position of the shape in a 2D space
            */
            virtual Vector2f getPositionV2(void) = 0;
            /*
            * @brief Return the X position of the shape
            */
            virtual float getX(void) = 0;
            /*
            * @brief Return the Z position of the shape
            */
            virtual float getZ(void) = 0;
            /*
            * @brief Return the Y position of the shape
            */
            virtual float getY(void) = 0;
            /*
            * @brief Return the size of the shape in a 2D Vector
            */
            virtual Vector2f getSizeV2(void) = 0;
            /*
            * @brief Return the size of the shape in a 3D Vector
            * @return the size of the shape in a 3D Vector
            */
            virtual Vector3f<float> getSizeV3(void) = 0;
            /*
            * @brief Return the size in x of the shape
            */
            virtual float getSizeX(void) = 0;
            /*
            * @brief Return the size in y of the shape
            */
            virtual float getSizeY(void) = 0;
            /*
            * @brief Return the size in z of the shape
            */
            virtual float getSizeZ(void) = 0;
            /*
            * @brief Set the current size of shape
            * @param size the new size of the shape
            */
            virtual void setSize(Vector2f const &size) = 0;
            /*
            * @brief Set the current size of the shape
            * @param size the new size of the shape
            */
            virtual void setSize(Vector3f<float> const &size) = 0;
            /*
            * @brief Set the X size of the shape
            * @param x the new size in x of the shape
            */
            virtual void setSizeX(float const &x) = 0;
            /*
            * @brief Set the Y size of the shape
            * @param y the new size in y of the shape
            */
            virtual void setSizeY(float const &y) = 0;
            /*
            * @brief Set the Z size of the shape
            * @param z the new size in z of the shape
            */
            virtual void setSizeZ(float const &z) = 0;
            /*
            * @brief Set the current position of the shape in a 3D space
            * @param position the new position of the shape
            */
            virtual void setPosition(Vector3f<float> const &position) = 0;
            /*
            * @brief Set the current position of the shape in a 2D space
            * @param position the new position of the shape
            */
            virtual void setPosition(Vector2f const &position) = 0;
            /*
            * @brief Set the X position of the shape
            * @param x new position in X
            */
            virtual void setX(float const &x) = 0;
            /*
            * @brief Set the Y position of the shape
            * @param y new position in Y
            */
            virtual void setY(float const &y) = 0;
            /*
            * @brief Set the Z position of the shape
            * @param z new position in z
            */
            virtual void setZ(float const &z) = 0;

            /**
             * @brief Rotate the Model
             * 
             * @param rotation 
             */

            virtual void XYZTransform(Vector3f<int> rotation) = 0;

        protected:
        private:
    };
}
