/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Circle
*/

#pragma once

#include "EModel.hpp"

namespace blb {
    class Circle : public Model {
        public:
            /**
             * @brief  Circle Constructor
             * @retval Inherit from model class
             */
            Circle();

            /**
             * @brief  Circle Destructor
             */
            ~Circle();
<<<<<<< HEAD
            void Circle3DDRaw(Vector3f<float> center, float radius, Vector3f<float> rotationAxis, float rotationAngle, Colors &color);
=======

            /**
             * @brief  Draw a circle in 3D world space
             * @param  center: circle center Vector3(x, y, z)
             * @param  radius: circle radius
             * @param  rotationAxis: rotation axis Vector3(x, y, z)
             * @param  rotationAngle: rotation Angle
             * @param  &color: circle color
             * @retval None
             */
            void Circle3DDRaw(Vector3f center, float radius, Vector3f rotationAxis,
                float rotationAngle, Colors &color);
>>>>>>> d2ae78ed6b66c3b0094e5e062001d23779ae3fac
        protected:
        private:
    };
}
