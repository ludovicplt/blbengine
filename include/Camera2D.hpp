#pragma once

#include "ICamera.hpp"
#include "type/Vector3.hpp"
#include "type/Vector2.hpp"
#include "raylib.h"

namespace blb
{
    class Cam2D : public ICamera
    {
        public:
            /**
             * @brief  Constructor for Camera 2D
             * @param  target: Vector3f<float>
             * @param  offset: Vector3f<float>
             * @param  rotation: float
             * @param  zoom: float
             */
            Cam2D(Vector3f<float> target, Vector3f<float> offset, float rotation, float zoom);
            /**
             * @brief  Destructor of Camera 2D
             */
            ~Cam2D() = default;
            /**
             * @brief  Initialize Camera target (rotation and zoom origin)
             * @note   Takes a Vector3f<float> (Vector3<float>) and convert it into a Vector2f (Vector2<float>)
             * @param  targetPoint: Vector3f<float> (Vector3<float>) - Position camera (x, y)
             * @retval None
             */
            void setTarget(Vector3f<float> targetPoint) override;
            /**
             * @brief  Return value of position Camera (where you look)
             * @retval Vector3f<float> (Vector3<float>)
             */
            Vector3f<float> getTarget(void) const override;
            /**
             * @brief  Initialize Camera offset (displacement from target)
             * @note Takes a Vector3f<float> (Vector3<float>) and convert it into a Vector2f (Vector2<float>)
             * @param  posOffset: Vector3f<float> (Vector3<float>) - Position camera (x, y)
             * @retval None
             */
            void setPos(Vector3f<float> posOffset) override;
            /**
             * @brief  Return value of position Camera
             * @retval Vector3f<float> (Vector3<float>)
             */
            Vector3f<float> getPos(void) const override;
            /**
             * @brief  Initialize Camera rotation in degrees
             * @param  rotation: Vector3f<float> - Rotation of camera (x, y)
             * @retval None
             */
            void setRotation(Vector3f<float> rotation) override;
            /**
             * @brief  Return value of rotation Camera
             * @retval Vector3f<float> (Vector3<float>)
             */
            Vector3f<float> getRotationup(void) const override;
            /**
             * @brief  Initialize Camera rotation in degrees
             * @param  rotation: float - Rotation of camera (x, y)
             * @retval None
             */
            void setRotation(float rotation) override;
            /**
             * @brief  Return value of rotation Camera
             * @retval float
             */
            float getRotation(void) override;
            /**
             * @brief  Initialize Camera zoom (scaling), should be 1.0f by default
             * @param  zoom: float
             * @retval None
             */
            void setZoomFovy(float zoom) override;
            /**
             * @brief  Return value of zoom Camera
             * @retval float
             */
            float getZoomFovy(void) const override;
            /**
             * @brief  Start Camera
             * @note   It takes itself's Class
             * @param  other: Cam2D Class
             * @retval None
             */
            void beginMode(ICamera &other);
            /**
             * @brief  End Camera
             * @retval None
             */
            void endMode(void) const;
            /**
             * @brief  Takes all the parameters of Camera2D camera and return it
             * @retval Cam2D camera
             */
            Camera2D to_r();

            void draw(std::vector<std::shared_ptr<Entity>> ent) override;
        private:
            Vector2f _target = Vector2f(0, 0);
            Vector2f _offset = Vector2f(0, 0);
            float _rotation = 0;
            float _zoom = 1.0f;
            Camera2D _camera;
    };
}