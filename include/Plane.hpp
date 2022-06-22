/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Plane
*/


#pragma once

#include "Model.hpp"

namespace blb {
    class Plane : public Model {
        public:

            /**
             * @brief Construct a new Plane object
             * 
             */
            Plane();

            /**
             * @brief Destroy the Plane object
             * 
             */
            ~Plane();
<<<<<<< HEAD
            void PlaneDraw(Vector3f centerPos, Vector2f size, Colors &color);
=======

            /**
             * @brief Draw a plane XZ
             * 
             * @param centerPos position of the center of the plane
             * @param size size
             * @param color color
             */
            void PlaneDraw(Vector3f centerPos, Vector2f size, Colors &color);
            
            /**
             * @brief Generate plane mesh (with subdivisions)
             * 
             * @param width width
             * @param length length
             * @param resX X
             * @param resZ Z
             * @return Mesh 
             */
>>>>>>> d2ae78ed6b66c3b0094e5e062001d23779ae3fac
            Mesh MeshPlaneGen(float width, float length, int resX, int resZ);
        protected:
        private:
    };
}
