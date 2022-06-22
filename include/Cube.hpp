/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Cube
*/

#pragma once

#include "EModel.hpp"

namespace blb {
    class Cube : virtual public EModel {
        public:

            /**
             * @brief  Cube Constructor
             * @note   Inherit from model class
             */

            Cube() = default;
            Cube(Vector3f<float> position, Vector3f<float> size);
            /**
             * @brief  Cube Destructor
             */
            ~Cube() = default;

            /**
             * @brief  Draw a cube (3D)
             * @param  position: position in the space (Vector3f<float>(x, y, z))
             * @param  width: width
             * @param  height: height
             * @param  length: length
             * @param  &color: cube color
             * @retval None
             */
            void CubeDraw(Vector3f<float> position, float width, float height,
                float length, Color color);

            /**
             * @brief  Draw a cube (3D)
             * @note   Vector Version
             * @param  position: position in the space (Vector3f<float>(x, y, z))
             * @param  size: cube's size (Vector3f<float>(x, y, z))
             * @param  &color: cube color
             * @retval None
             */
            void CubeVDraw(Vector3f<float> position, Vector3f<float> size, Color color);

            /**
             * @brief  Draw a cube wires
             * @note   Cube delimitations
             * @param  position: position in the space (Vector3f<float>(x, y, z))
             * @param  width: width
             * @param  height: height
             * @param  length: length
             * @param  &color: cube color
             * @retval None
             */
            void CubeWiresDraw(Vector3f<float> position, float width, float height,
                float length, Color color);

            /**
             * @brief  Draw a cube wires
             * @note   Cube delimitations (Vector Version)
             * @param  position: position in the space (Vector3f<float>(x, y, z))
             * @param  size: cube's size (Vector3f<float>(x, y, z))
             * @param  &color: cube color
             * @retval None
             */
            void CubeWiresVDraw(Vector3f<float> position, Vector3f<float> size, Color color);

            /**
             * @brief  Draw a cube textured
             * @note   Cube with a texture applied
             * @param  texture: Texture to be applied
             * @param  position: position in the space (Vector3f<float>(x, y, z))
             * @param  width: width
             * @param  height: height
             * @param  length: length
             * @param  &color: cube color
             * @retval None
             */
            void CubeTextureDraw(Texture2D texture, Vector3f<float> position,
                float width, float height, float length, Color color);

            /**
             * @brief  Draw a cube with a region of a texture
             * @param  texture: texture
             * @param  source: Rectangle source
             * @param  position: position (Vector3f<float>(x, y, z))
             * @param  width: width
             * @param  height: height
             * @param  length: length
             * @param  &color: cube color
             * @retval None
             */
            void CubeTextureRecDraw(Texture2D texture, Rectangle source,
                Vector3f<float> position, float width, float height, float length,
                    Color color);

            /**
             * @brief  Generate cuboid mesh
             * @note   Gen a cubic mesh
             * @param  width: width
             * @param  height: height
             * @param  length: length
             * @retval The mesh created
             */
            Mesh MeshCubeGen(float width, float height, float length);

            /**
             * @brief  Generate cubes-based map mesh from image data
             * @param  cubicmap: cubicmap from an image
             * @param  cubeSize: cube size (Vector3f<float>(x, y, z))
             * @retval The mesh created
             */
            Mesh MeshCubicmapGen(Image cubicmap, Vector3f<float> cubeSize);

            /**
             * @brief  Check collision between two bounding boxes
             * @note   Collision checkers Box - Box
             * @param  box1: first box boundaries
             * @param  box2: second box boundaries
             * @retval true on success otherwise failure
             */
            bool CollisionBoxesCheck(BoundingBox box1, BoundingBox box2);

            /**
             * @brief  Draw a cube
             * @param  box: the BoundingBox of the cube to draw
             * @param  color: the color of the cube
             * @retval None
             */
            void BoundingBoxDraw(BoundingBox box, Color color);

            /**
             * @brief  Create a BoundingBox from a Mesh
             * @param  mesh: the mesh of the entity
             * @retval The BoundingBox created from the Mesh
             */
            BoundingBox GetBoundingBoxMesh(Mesh mesh);

            /**
             * @brief  Check collision between box and sphere
             * @note   Collission checkers Box - Sphere
             * @param  box: box bounds
             * @param  center: sphere center (Vector3f<float>(x, y, z))
             * @param  radius: sphere radius
             * @retval true on success otherwise failure
             */
            bool CollisionBoxSphereCheck(BoundingBox box, Vector3f<float> center,
                float radius);

        protected:
        private:
            Vector3f<float> position_ = {0, 0, 0};
            Vector3f<float> size_ = {0, 0, 0};
            float width_ = 0;
            float height_ = 0;
            Mesh mesh_ = {0};
            BoundingBox box_ = {0};
    };
}
