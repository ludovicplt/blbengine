/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** MeshClass
*/

#ifndef MESHCLASS_HPP_
#define MESHCLASS_HPP_

#include "raylib.h"

/**
 * @brief  Class MeshC
 */
class MeshC {
    public:
        /**
         * @brief  Init class meshC
         */
        MeshC();
        /**
         * @brief  Destroy class meshC
         */
        ~MeshC();
        /**
         * @brief  Variable of struct Mesh
         */
        Mesh _mesh;
};

#endif /* !MESHCLASS_HPP_ */
