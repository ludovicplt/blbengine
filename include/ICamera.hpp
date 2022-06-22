#pragma once

#include "type/Vector3.hpp"
#include <vector>
#include <memory>
#include "Entity.hpp"

namespace blb
{
    class ICamera
    {
        public:
            /**
             * @brief  Destructor of Interface Camera
             */
            ~ICamera() = default;
            /**
             * @brief Initialize position Camera (where you look)
             * @note Takes a Vector3f (Vector3f) and convert it into a Vector2f (Vector2f)
             * @param  targetPoint: Vector3f (Vector3f) - Position camera (x, y)
             * @retval None
             */
            virtual void setTarget(Vector3f<float> targetPoint) = 0;
            /**
             * @brief  Return value of position Camera (where you look)
             * @retval Vector3f (Vector3f)
             */
            virtual Vector3f<float> getTarget(void) const = 0;
            /**
             * @brief  Initialize position Camera
             * @note    Takes a Vector3f (Vector3f) and convert it into a Vector2f (Vector2f)
             * @param  posOffset: Vector3f (Vector3f) - Position camera (x, y)
             * @retval None
             */
            virtual void setPos(Vector3f<float> posOffset) = 0;
            /**
             * @brief  Return value of position Camera
             * @retval Vector3f (Vector3f)
             */
            virtual Vector3f<float> getPos(void) const = 0;
            /**
             * @brief  Initialisze rotation (Camera3D)
             * @param  rotation: Vector3f (Vector3f) - Rotation of camera (x, y)
             * @retval None
             */
            virtual void setRotation(Vector3f<float> rotation) = 0;
            /**
             * @brief  Initialisze rotation (Camera2D)
             * @param  rotation: float - Rotation of camera (x, y)
             * @retval None
             */
            virtual void setRotation(float rotation) = 0;
            /**
             * @brief  Return value of rotation Camera3D
             * @retval Vector3f (Vector3f)
             */
            virtual Vector3f<float> getRotationup(void) const = 0;
            /**
             * @brief  Return value of rotation Camera2D
             * @retval float
             */
            virtual float getRotation(void) = 0;

            /**
             * @brief  Initialisize Zoom Camera
             * @note
             * @param  zoom: float - Zoom of camera
             * @retval None
             */
            virtual void setZoomFovy(float zoom) = 0;
            /**
             * @brief  Return value of Zoom Camera
             * @retval float
             */
            virtual float getZoomFovy(void) const = 0;

            virtual void beginMode(ICamera &other) = 0;

            virtual void draw(std::vector<std::shared_ptr<Entity>> ent) = 0;

            virtual void  endMode(void) const = 0;
    };
}
