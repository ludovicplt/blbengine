/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Grid
*/

#pragma once

#include "Model.hpp"

namespace blb {
    class Grid : public Model {
        public:

            /**
             * @brief Grid Constructor 
             */
            Grid();

            /**
             * @brief Grid Destructor
             */
            ~Grid();

            /**
             * @brief  Draw Grid 
             * @param  slices: slices
             * @param  spacing: spacing
             * @retval None
             */
            void GridDraw(int slices, float spacing);
        protected:
        private:
    };
}
