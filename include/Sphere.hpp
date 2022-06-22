/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Sphere
*/

#pragma once

#include "Model.hpp"

namespace blb {
    class Sphere : public Model {
        public:

            /**
             * @brief Construct a new Sphere object
             *
             */
            Sphere();

            /**
             * @brief Destroy the Sphere object
             *
             */
            ~Sphere();

            /**
             * @brief // Draw sphere
             *
             * @param centerPos center position of the sphere
             * @param radius radius of the sphere
             * @param color color of the sphere
             */
            void SphereDraw(Vector3f centerPos, float radius, Colors &color);

            /**
             * @brief Draw sphere with extended parameters
             *
             * @param centerPos center of the sphere
             * @param radius radius of the sphere
             * @param rings rings of the sphere
             * @param slices slices of the sphere
             * @param color color of the sphere
             */
            void SphereExDraw(Vector3f centerPos, float radius, int rings, int slices, Colors &color);

            /**
             * @brief Draw sphere wires
             *
             * @param centerPos center position of the sphere
             * @param radius radius of the sphere wires
             * @param rings rings of the sphere wires
             * @param slices slices of the sphere wires
             * @param color color of the sphere wires
             */
            void SphereWiresDraw(Vector3f centerPos, float radius, int rings, int slices, Colors &color);

            /**
             * @brief Generate sphere mesh (standard sphere)
             *
             * @param radius radius of the sphere mesh
             * @param rings rings of the sphere mesh
             * @param slices slices of the sphere mesh
             * @return return mesh of the sphere
             */
            Mesh MeshSphereGen(float radius, int rings, int slices);

            /**
             * @brief Generate half-sphere mesh (no bottom cap)
             *
             * @param radius radius of the half sphere mesh
             * @param rings rings of the half sphere mesh
             * @param slices slices of the half sphere mesh
             * @return return mesh of the half sphere
             */
            Mesh MeshHemiSphereGen(float radius, int rings, int slices);

            /**
             * @brief Check collision between two spheres
             *
             * @param center1 center of the sphere 1
             * @param radius1 radius of the sphere 1
             * @param center2 center of the sphere 2
             * @param radius2 radius of the sphere 2
             * @return true/false
             */
            bool CollisionSpheresCheck(Vector3f center1, float radius1, Vector3f center2, float radius2);

            /**
             * @brief Check collision between box and sphere
             *
             * @param box bounding box
             * @param center center of the sphere
             * @param radius radius of the sphere
             * @return true/false
             */
            bool CollisionBoxSphereCheck(BoundingBox box, Vector3f center, float radius);
        protected:
        private:
    };
}
