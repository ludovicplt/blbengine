/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Point
*/

#pragma once

#include "Model.hpp"

namespace blb {
    class Point : public Model {
        public:

            /**
             * @brief Construct a new Point object
             * 
             */
            Point();

            /**
             * @brief Destroy the Point object
             * 
             */
            ~Point();
<<<<<<< HEAD
=======

            /**
             * @brief Draw a point in 3D space, actually a small line
             * 
             * @param position 
             * @param color 
             */
>>>>>>> d2ae78ed6b66c3b0094e5e062001d23779ae3fac
            void Point3DDraw(Vector3f position, Colors &color);
        protected:
        private:
    };
}
