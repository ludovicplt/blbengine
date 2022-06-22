/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Cylinder
*/

#pragma once

#include "Model.hpp"

namespace blb {
    class Cylinder : public Model {
        public:
            /**
             * @brief  Cylinder Constructor
             * @note   Inherit from model class
             */
            Cylinder();

            /**
             * @brief  Cylinder Destructor
             */
            ~Cylinder();
<<<<<<< HEAD
            void CylinderDraw(Vector3f position, float radiusTop, float radiusBottom, float height, int slices, Colors &color);
            void CylinderExDraw(Vector3f startPos, Vector3f endPos, float startRadius, float endRadius, int sides, Colors &color);
            void CylinderWiresDraw(Vector3f position, float radiusTop, float radiusBottom, float height, int slices, Colors &color);
            void CylinderWiresExDraw(Vector3f startPos, Vector3f endPos, float startRadius, float endRadius, int sides, Colors &color);
=======

            /**
             * @brief  Draw a cylinder/cone
             * @param  position: cylinder position Vector3(x, y, z)
             * @param  radiusTop: radius cylinder's top
             * @param  radiusBottom: radius cylinder's bottom
             * @param  height: cylinder height
             * @param  slices: slices
             * @param  &color: cylinder color
             * @retval None
             */
            void CylinderDraw(Vector3f position, float radiusTop,
                float radiusBottom, float height, int slices, Colors &color);

            /**
             * @brief  Draw a cylinder with base at startPos and top at endPos
             * @param  startPos: cylinder starting pos (base) Vector3(x, y, z)
             * @param  endPos: cylinder ending pos (top) Vector3(x, y, z)
             * @param  startRadius: cylinder starting radius
             * @param  endRadius: cylinder ending radius
             * @param  sides: sides
             * @param  &color: cylinder color
             * @retval None
             */
            void CylinderExDraw(Vector3f startPos, Vector3f endPos,
                float startRadius, float endRadius, int sides, Colors &color);

            /**
             * @brief  Draw a cylinder/cone wires
             * @param  position: cylinder position Vector3(x, y, z)
             * @param  radiusTop: radius cylinder's top
             * @param  radiusBottom: radius cylinder's bottom
             * @param  height: cylinder height
             * @param  slices: slices
             * @param  &color: cylinder color
             * @retval None
             */
            void CylinderWiresDraw(Vector3f position, float radiusTop,
                float radiusBottom, float height, int slices, Colors &color);

            /**
             * @brief  Draw a cylinder wires with base at startPos
             *         and top at endPos
             * @param  startPos: cylinder starting pos (base) Vector3(x, y, z)
             * @param  endPos: cylinder ending pos (top) Vector3(x, y, z)
             * @param  startRadius: cylinder starting radius
             * @param  endRadius: cylinder ending radius
             * @param  sides: sides
             * @param  &color: cylinder color
             * @retval None
             */
            void CylinderWiresExDraw(Vector3f startPos, Vector3f endPos,
                float startRadius, float endRadius, int sides, Colors &color);

            /**
             * @brief  Generate cylinder mesh
             * @param  radius: cylinder mesh
             * @param  height: cylinder height
             * @param  slices: slices
             * @retval cylinder mesh
             */
>>>>>>> d2ae78ed6b66c3b0094e5e062001d23779ae3fac
            Mesh MeshCylinderGen(float radius, float height, int slices);
    };
}
