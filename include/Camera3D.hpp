#pragma once

#include "ICamera.hpp"
#include "raylib.h"

namespace blb
{
    class Cam3D : public ICamera
    {
        public:
            /**
             * @brief  Constructor for Camera3D - defines position/orientation in 3d space
             * @param  pos: Camera position
             * @param  target: Camera target it looks-at
             * @param  up: Camera up vector (rotation over its axis)
             * @param  fovy: Camera field-of-view apperture in Y (degrees) in perspective, used as near plane width in orthographic
             * @param  projection: Camera projection: CAMERA_PERSPECTIVE or CAMERA_ORTHOGRAPHIC
             * @retval None
             */
            Cam3D(Vector3f<float> pos, Vector3f<float> target,
                Vector3f<float> up, float fovy, int projection);
            /**
             * @brief  Destructor for Camera3D
             * @retval None
             */
            ~Cam3D();
            /**
             * @brief  Initialize Camera target (where you look)
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
             * @brief  Initialize Camera position
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
             * @brief  Initialize Camera up vector (rotation over its axis)
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
             * @brief  Initialize Camera up vector (rotation over its axis)
             * @param  rotation: float
             * @retval None
             */
            void setRotation(float rotation) override;
            /**
             * @brief  Return value of rotation Camera
             * @retval float
             */
            float getRotation(void) override;

            /**
             * @brief  Initialize Camera field-of-view apperture in Y (degrees) in perspective, used as near plane width in orthographic
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

            void draw(std::vector<std::shared_ptr<Entity>> ents) override;

            /**
             * @brief  Takes all the parameters of Camera2D camera and return it
             * @retval Cam2D camera
             */
            Camera3D to_r();

        private:
            Vector3f<float> _target = Vector3f<float>(0, 0, 0);
            Vector3f<float> _pos = Vector3f<float>(0, 0, 0);
            Vector3f<float> _up = Vector3f<float>(0, 0, 0);
            float _fovy = 0.0f;
            int _projection = 0;
            Camera3D _camera;
    };
}