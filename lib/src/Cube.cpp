/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Cube
*/

#include "Cube.hpp"

blb::Cube::Cube(Vector3f<float> position, Vector3f<float> size)
{
    this->position_ = {position.x, position.y, position.z};
    this->size_ = {size.x, size.y, size.z};
}

void blb::Cube::CubeDraw(Vector3f<float> position, float width, float height, float length, Color color)
{
    this->position_ = {position.x, position.y, position.z};
    this->width_ = width;
    this->height_ = height;
    Vector3 pos = {position.x, position.y, position.z};
    Vector3 s = {width, height, length};
    DrawCube(pos, this->width_, this->height_, length, color);
}

void blb::Cube::CubeVDraw(Vector3f<float> position, Vector3f<float> size, Color color)
{
    this->position_ = position;
    this->size_ = size;
    Vector3 pos = {position.x, position.y, position.z};
    Vector3 s = {size.x, size.y, size.z};
    DrawCubeV(pos, s, color);
}

void blb::Cube::CubeWiresDraw(Vector3f<float> position, float width, float height, float length, Color color)
{
    this->position_ = {position.x, position.y, position.z};
    this->width_ = width;
    this->height_ = height;
    Vector3 pos = {position.x, position.y, position.z};
    DrawCubeWires(pos, width, height, length, color);
}

void blb::Cube::CubeWiresVDraw(Vector3f<float> position, Vector3f<float> size, Color color)
{
    DrawCubeWiresV({position.x, position.y, position.z}, {size.x, size.y, size.z}, {color.r, color.g, color.b, color.a});
}

void blb::Cube::CubeTextureDraw(Texture2D texture, Vector3f<float> position, float width, float height, float length, Color color)
{
    this->position_ = {position.x, position.y, position.z};
    this->width_ = width;
    this->height_ = height;
    Vector3 pos = {position.x, position.y, position.z};
    Vector3 s = {width, height, length};
    DrawCubeTexture(texture, pos, this->width_, this->height_, length, color);
}

void blb::Cube::CubeTextureRecDraw(Texture2D texture, Rectangle source, Vector3f<float> position, float width, float height, float length, Color color)
{
    this->position_ = {position.x, position.y, position.z};
    this->width_ = width;
    this->height_ = height;
    Vector3 pos = {width, height, length};
    DrawCubeTextureRec(texture, source, pos, width, height, length, color);
}

Mesh blb::Cube::MeshCubeGen(float width, float height, float length)
{
    return GenMeshCube(width, height, length);
}

Mesh blb::Cube::MeshCubicmapGen(Image cubicmap, Vector3f<float> cubeSize)
{
    Vector3 cube = {cubeSize.x, cubeSize.y, cubeSize.z};
    return GenMeshCubicmap(cubicmap, cube);
}

bool blb::Cube::CollisionBoxesCheck(BoundingBox box1, BoundingBox box2)
{
    return CheckCollisionBoxes(box1, box2);
}

bool blb::Cube::CollisionBoxSphereCheck(BoundingBox box, Vector3f<float> center, float radius)
{
    Vector3 cent = {center.x, center.y, center.z};
    return CheckCollisionBoxSphere(box, cent, radius);
}

void blb::Cube::BoundingBoxDraw(BoundingBox box, Color color)
{
    DrawBoundingBox(box, color);
}

BoundingBox blb::Cube::GetBoundingBoxMesh(Mesh mesh)
{
    return GetMeshBoundingBox(mesh);
}
