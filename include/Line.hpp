/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Line3D
*/

#pragma once

#include "EModel.hpp"

namespace blb {

    class Line : public Model {
        public:

            /**
             * @brief Line Constructor
             */
            Line();

            /**
             * @brief Line Destructor
             */
            ~Line();
            void Line3DDraw(Vector3f<float> startPos, Vector3f<float> endPos, Colors &color);
        protected:
        private:
    };
}
