/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Triangle
*/

#pragma once

#include "Model.hpp"

namespace blb {
    class Triangle : public Model {
        public:
            /**
             * @brief  Triangle COnstructor
             * @note   Inherit from model class
             */
            Triangle();

            /**
             * @brief  Triangle Destructor
             */
            ~Triangle();
<<<<<<< HEAD
            void Triangle3DDraw(Vector3f v1, Vector3f v2, Vector3f v3, Colors &color);
            void TriangleStrip3DDraw(Vector3f *points, int pointsCount, Colors &color);
            RayCollision RayCollisionTriangleGet(Ray ray, Vector3f p1, Vector3f p2, Vector3f p3);
=======

            /**
             * @brief  Draw a color-filled triangle
             *         (vertex in counter-clockwise order!)
             * @param  v1: one bridge of the triangle Vector3(x, y, z)
             * @param  v2: one bridge of the triangle Vector3(x, y, z)
             * @param  v3: one bridge of the triangle Vector3(x, y, z)
             * @param  &color: triangle color
             * @retval None
             */
            void Triangle3DDraw(Vector3f v1, Vector3f v2, Vector3f v3,
                Colors &color);

            /**
             * @brief  Draw a triangle strip defined by points
             * @param  *points: points array(Vector3(x, y, z))
             * @param  pointsCount: nb of points (in array)
             * @param  &color: triangle color
             * @retval None
             */
            void TriangleStrip3DDraw(Vector3f *points, int pointsCount,
                Colors &color);

            /**
             * @brief  Get collision info between ray and triangle
             * @param  ray: the ray
             * @param  p1: first bridge of the triangle, Vector3(x, y, z)
             * @param  p2: second bridge of the triangle, Vector3(x, y, z)
             * @param  p3: third bridge of the triangle, Vector3(x, y, z)
             * @retval RayCollision
             */
            RayCollision RayCollisionTriangleGet(Ray ray, Vector3f p1,
                Vector3f p2, Vector3f p3);
>>>>>>> d2ae78ed6b66c3b0094e5e062001d23779ae3fac
        protected:
        private:
    };
}
