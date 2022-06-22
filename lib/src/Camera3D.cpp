#include "Camera3D.hpp"
#include <iostream>

namespace blb
{
    Cam3D::Cam3D(Vector3f<float> pos, Vector3f<float> target, Vector3f<float> up, float fovy,
        int projection)
    {
        this->_pos = pos;
        this->_target = target;
        this->_fovy = fovy;
        this->_up = up;
        this->_projection = projection;
        this->_camera.target = {_target.x, _target.y, _target.z};
        this->_camera.position = {_pos.x, _pos.y, _pos.z};
        this->_camera.up = {_up.x, _up.y, _up.z};
        this->_camera.fovy = _fovy;
        this->_camera.projection = _projection;
    }

    Cam3D::~Cam3D()
    {
    }

    void Cam3D::setTarget(Vector3f<float> targetPoint)
    {
        this->_target = targetPoint;
        this->_camera.target = {_target.x, _target.y, _target.z};
    }

    Vector3f<float> Cam3D::getTarget(void) const
    {
        return this->_target;
    }

    void Cam3D::setPos(Vector3f<float> posOffset)
    {
        this->_pos = posOffset;
        this->_camera.position = {_pos.x, _pos.y, _pos.z};
    }

    Vector3f<float> Cam3D::getPos(void) const
    {
        return this->_pos;
    }

    void Cam3D::setRotation(Vector3f<float> rotation)
    {
        this->_up = rotation;
        this->_camera.up = {_up.x, _up.y, _up.z};
    }

    void Cam3D::setZoomFovy(float zoom)
    {
        this->_fovy = zoom;
        this->_camera.fovy = _fovy;
    }

    float Cam3D::getZoomFovy(void) const
    {
        return this->_fovy;
    }

    Camera3D Cam3D::to_r(void)
    {
        return this->_camera;
    }

    void Cam3D::beginMode(ICamera &other)
    {
        Cam3D &cam3D = dynamic_cast<Cam3D &>(other);

        BeginMode3D(cam3D.to_r());
    }

    void Cam3D::endMode(void) const
    {
        EndMode3D();
    }

    void Cam3D::setRotation(float rotation)
    {
        return;
    }

    float Cam3D::getRotation(void)
    {
        return (0);
    }

    Vector3f<float> Cam3D::getRotationup(void) const
    {
        return (this->_up);
    }

    void Cam3D::draw(std::vector<std::shared_ptr<Entity>> ent)
    {

    }

}