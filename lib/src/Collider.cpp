/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Collider
*/

#include "Collider.hpp"
#include "raylib.h"
#include "Core.hpp"
#include <iostream>
#include "Cube.hpp"

namespace blb {

    Collider::Collider(std::shared_ptr<Entity> const &entity)
    {
        this->_name = "Collider";
        this->entities_ = Core::getEntities();
        this->_entity = entity;
        this->cube_ = Cube(entity->getPositionV3(), entity->getSizeV3());
    }

    Collider::~Collider()
    {
        this->_name.clear();
    }

    BoundingBox Collider::getBoundingBox()
    {
        return this->cube_.GetBoundingBoxMesh(this->cube_.MeshCubeGen(this->_entity->getSizeX(), this->_entity->getSizeY(), this->_entity->getSizeZ()));
    }

    bool Collider::isColliding(std::shared_ptr<blb::IEntity> const &entity1, std::shared_ptr<blb::IEntity> const &entity2)
    {
        return (
                (((entity1->getX() + entity1->getVelocityX()) <= (entity2->getX() + entity2->getSizeX())) && (((entity1->getX() + entity1->getVelocityX()) + entity1->getSizeX()) >= entity2->getX())) &&
                (((entity1->getY() + entity1->getVelocityY()) <= (entity2->getY() + entity2->getSizeY())) && (((entity1->getY() + entity1->getVelocityY()) + entity1->getSizeY()) >= entity2->getY())) &&
                (((entity1->getZ() + entity1->getVelocityZ()) <= (entity2->getZ() + entity2->getSizeZ())) && (((entity1->getZ() + entity1->getVelocityZ()) + entity1->getSizeZ()) >= entity2->getZ()))
        );
    }

    void Collider::collisionHandlement(std::shared_ptr<IEntity> it)
    {
        if (this->isColliding(this->_entity, it)) {
            this->_entity->setVelocity({this->_entity->getVelocityX() - this->_entity->getVelocityX(), this->_entity->getVelocityY() - this->_entity->getVelocityY(), this->_entity->getVelocityZ() - this->_entity->getVelocityZ()});
            it->setVelocity({it->getVelocityX() - it->getVelocityX(), it->getVelocityY() - it->getVelocityY(), it->getVelocityZ() - it->getVelocityZ()});
        }
    }

    void Collider::update()
    {
        this->cube_.setPosition(Vector3f<float>(this->_entity->getX(), this->_entity->getY(), this->_entity->getZ()));

        this->entities_  = blb::Core::getEntities();
        for (auto &it : this->entities_) {
            if (this->_entity != it) {
                Collider *collider = dynamic_cast<Collider *>(it->getComponent("Collider"));
                if (collider != nullptr)
                    this->collisionHandlement(it);
            }
        }
    }
}
