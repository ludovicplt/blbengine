/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Model
*/

#pragma once

#include "IModel.hpp"
#include "raylib.h"
#include "raymath.h"

namespace blb {

    class EModel : public IModel {
        public:
            EModel() = default;
            ~EModel() = default;

            /*
            * @brief Return the position of the model in a 3D space
            */
            Vector3f<float> getPositionV3(void) override final
            {
                return this->_position;
            };

            /*
            * @brief Return the position of the model in a 2D space
            */
            Vector2f getPositionV2(void) override final
            {
                return Vector2f(this->_position.x, this->_position.y);
            };

            /*
            * @brief Return the X position of the model
            */
            float getX(void) override final
            {
                return this->_position.x;
            };

            /*
            * @brief Return the Z position of the model
            */
            float getY(void) override final
            {
                return this->_position.y;
            };

            /*
            * @brief Return the Y position of the model
            */
            float getZ(void) override final
            {
                return this->_position.z;
            };

            /*
            * @brief Return the size of the model in a 2D Vector
            */
            Vector2f getSizeV2() override final
            {
                return Vector2f(this->_size.x, this->_size.y);
            };

            /*
            * @brief Return the size of the model in a 3D Vector
            * @return the size of the model in a 3D Vector
            */
            Vector3f<float> getSizeV3(void) override final
            {
                return this->_size;
            };

            /*
            * @brief Return the size in x of the model
            */
            float getSizeX(void) override final
            {
                return this->_size.x;
            };

            /*
            * @brief Return the size in y of the model
            */
            float getSizeY(void) override final
            {
                return this->_size.y;
            };


            /*
            * @brief Return the size in z of the model
            */
            float getSizeZ(void) override final
            {
                return this->_size.z;
            };

            /*
            * @brief Set the current size of model
            * @param size the new size of the model
            */
            void setSize(Vector2f const &size) override final
            {
                this->_size = Vector3f<float>(size.x, size.y, 0);
            };

            /*
            * @brief Set the current size of the model
            * @param size the new size of the model
            */
            void setSize(Vector3f<float> const &size) override final
            {
                this->_size = size;
            };

            /**
            * @brief Set the X size of the model
            * @param x the new size in x of the model
            */
            void setSizeX(float const &x) override final
            {
                this->_position.x = x;
            };

            /**
            * @brief Set the Y size of the model
            * @param y the new size in y of the model
            */
            void setSizeY(float const &y) override final
            {
                this->_position.y = y;
            };

            /*
            * @brief Set the Z size of the model
            * @param z the new size in z of the model
            */
            void setSizeZ(float const &z) override final
            {
                this->_position.z = z;
            };


            /*
            * @brief Set the current position of the model in a 3D space
            * @param position the new position of the model
            */
            void setPosition(Vector3f<float> const &position) override final
            {
                this->_position = position;
            };

            /*
            * @brief Set the current position of the model in a 2D space
            * @param position the new position of the model
            */
            void setPosition(Vector2f const &position) override final
            {
                this->_position = Vector3f<float>(position.x, position.y, 0);
            };

            /*
            * @brief Set the X position of the model
            * @param x new position in X
            */
            void setX(float const &x) override final
            {
                this->_position.x = x;
            };

            /*
            * @brief Set the Y position of the model
            * @param y new position in Y
            */
            void setY(float const &y) override final
            {
                this->_position.y = y;
            };

            /*
            * @brief Set the Z position of the model
            * @param z new position in z
            */
            void setZ(float const &z) override final
            {
                this->_position.z = z;
            };

            void XYZTransform(Vector3f<int> vect) override
            {

            };

        protected:
            Vector3f<float> _position = Vector3f<float> (0, 0, 0);
            Vector3f<float> _size = Vector3f<float> (0, 0, 0);
            Mesh mesh_ = {0};

        private:
    };
}
