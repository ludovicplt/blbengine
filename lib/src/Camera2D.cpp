#include "Camera2D.hpp"
#include "iostream"

namespace blb
{
    static Vector2f convertTo2D(Vector3f<float> vector3D)
    {
        Vector2f vector2D(vector3D.x, vector3D.y);

        return vector2D;
    }

    static Vector3f<float> convertTo3D(Vector2f vector2D)
    {
        Vector3f<float> vector3D(vector2D.x, vector2D.y, 0);

        return vector3D;
    }

    Cam2D::Cam2D(Vector3f<float> target, Vector3f<float> offset, float rotation, float zoom)
    {
        this->_target = convertTo2D(target);
        this->_offset = convertTo2D(offset);
        this->_rotation = rotation;
        this->_zoom = zoom;
        this->_camera = {0};
        this->_camera.target = {_target.x, _target.y};
        this->_camera.offset = {_offset.x, _offset.y};
        this->_camera.rotation = _rotation;
        this->_camera.zoom = _zoom;
    }

    void Cam2D::setTarget(Vector3f<float> targetPoint)
    {
        this->_target = convertTo2D(targetPoint);
        this->_camera.target = {_target.x, _target.y};
    }

    Vector3f<float> Cam2D::getTarget(void) const
    {
        return convertTo3D(_target);
    }

    void Cam2D::setPos(Vector3f<float> posOffset)
    {
        this->_offset = convertTo2D(posOffset);
        this->_camera.offset = {_offset.x, _offset.y};
    }

    Vector3f<float> Cam2D::getPos(void) const
    {
        return convertTo3D(this->_offset);
    }

    void Cam2D::setRotation(float rotation)
    {
        _rotation = rotation;
        this->_camera.rotation = _rotation;
    }

    float Cam2D::getRotation(void)
    {
        return _rotation;
    }

    void Cam2D::setRotation(Vector3f<float> rotation)
    {
        return;
    }
    Vector3f<float> Cam2D::getRotationup(void) const
    {
        Vector3f<float> useless(0, 0, 0);

        return useless;
    }

    void Cam2D::setZoomFovy(float zoom)
    {
        _zoom = zoom;
        this->_camera.zoom = _zoom;
    }

    float Cam2D::getZoomFovy(void) const
    {
        return _zoom;
    }

    void Cam2D::beginMode(ICamera &other)
    {
        Cam2D &cam2D = dynamic_cast<Cam2D &>(other);

        BeginMode2D(cam2D.to_r());
    }

    void Cam2D::endMode(void) const
    {
        EndMode2D();
    }

    Camera2D Cam2D::to_r(void)
    {
        return (this->_camera);
    }

    void Cam2D::draw(std::vector<std::shared_ptr<Entity>> ent)
    {

    }
}