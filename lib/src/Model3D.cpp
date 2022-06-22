/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Model3D
*/

#include "Model3D.hpp"
#include "raymath.h"

namespace blb
{

    void Model3D::ModelDraw(Model &model, Vector3f<float> position, float scale, Color tint)
    {
        DrawModel(model, {position.x, position.y, position.z}, scale, tint);
    }

    void Model3D::ModelExDraw(Model &model, Vector3f<float> position, Vector3f<float> rotationAxis, float rotationAngle, Vector3f<float> scale, Color tint)
    {
        DrawModelEx(model, {position.x, position.y, position.z}, {rotationAxis.x, rotationAxis.y, rotationAxis.z}, rotationAngle, {scale.x, scale.y, scale.z}, tint);
    }

    void Model3D::ModelWiresDraw(Model &model, Vector3f<float> position, float scale, Color tint)
    {
        DrawModelWires(model, {position.x, position.y, position.z}, scale, tint);
    }

    void Model3D::ModelWiresExDraw(Model &model, Vector3f<float> position, Vector3f<float> rotationAxis, float rotationAngle, Vector3f<float> scale, Color tint)
    {
        DrawModelWiresEx(model, {position.x, position.y, position.z}, {rotationAxis.x, rotationAxis.y, rotationAxis.z}, rotationAngle, {scale.x, scale.y, scale.z}, tint);
    }

    void Model3D::BoundingBoxDraw(BoundingBox &box, Color color )
    {
        DrawBoundingBox(box, color);
    }

    void Model3D::BillboardDraw(Camera &camera, Texture2D &texture, Vector3f<float> position, float size, Color tint)
    {
        DrawBillboard(camera, texture, {position.x, position.y, position.z}, size, tint);
    }

    void Model3D::BillboardRecDraw(Camera &camera, Texture2D &texture, Rectangle &source, Vector3f<float> position, Vector2f size, Color tint)
    {
        DrawBillboardRec(camera, texture, source, {position.x, position.y, position.z}, {size.x, size.y}, tint);
    }

    void Model3D::BillboardProDraw(Camera &camera, Texture2D &texture, Rectangle &source, Vector3f<float> position, Vector3f<float> up, Vector2f size, Vector2f origin, float rotation, Color tint)
    {
        DrawBillboardPro(camera, texture, source, {position.x, position.y, position.z}, {up.x, up.y, up.z}, {size.x, size.y}, {origin.x, origin.y}, rotation, tint);
    }

    ModelAnimation *Model3D::ModelAnimationsLoad(std::string fileName, unsigned int *animCount)
    {
        return (LoadModelAnimations(fileName.c_str(), animCount));
    }

    void Model3D::ModelAnimationUpdate(Model &model, ModelAnimation &anim, int frame)
    {
        UpdateModelAnimation(model, anim, frame);
    }

    void Model3D::ModelAnimationUnload(ModelAnimation &anim)
    {
        UnloadModelAnimation(anim);
    }

    void Model3D::ModelAnimationsUnload(ModelAnimation *animations, unsigned int count)
    {
        UnloadModelAnimations(animations, count);
    }

    bool Model3D::ModelAnimationValidIs(Model &model, ModelAnimation &anim)
    {
        return IsModelAnimationValid(model, anim);
    }

    void Model3D::MeshUpload(Mesh *mesh, bool dynamic)
    {
        UploadMesh(mesh, dynamic);
    }

    void Model3D::MeshBufferUpdate(Mesh &mesh, int index, void *data, int dataSize, int offset)
    {
        UpdateMeshBuffer(mesh, index, data, dataSize, offset);
    }

    void Model3D::MeshUnload(Mesh &mesh)
    {
        UnloadMesh(mesh);
    }

    void Model3D::MeshDraw(Mesh &mesh, Material &material, Matrix &transform)
    {
        DrawMesh(mesh, material, transform);
    }

    void Model3D::MeshInstancedDraw(Mesh &mesh, Material &material, Matrix *transforms, int instances)
    {
        DrawMeshInstanced(mesh, material, transforms, instances);
    }

    bool Model3D::MeshExport(Mesh &mesh, std::string fileName)
    {
        return (ExportMesh(mesh, fileName.c_str()));
    }

    BoundingBox Model3D::MeshBoundingBoxGet(Mesh &mesh)
    {
        return (GetMeshBoundingBox(mesh));
    }

    void Model3D::MeshTangentsGen(Mesh *mesh)
    {
        GenMeshTangents(mesh);
    }

    void Model3D::MeshBinormalsGen(Mesh *mesh)
    {
        GenMeshBinormals(mesh);
    }

    Material *Model3D::MaterialsLoad(std::string fileName, int *materialCount)
    {
        return (LoadMaterials(fileName.c_str(), materialCount));
    }

    Material Model3D::MaterialDefaultLoad(void)
    {
        return (LoadMaterialDefault());
    }

    void Model3D::MaterialUnload(Material &material)
    {
        UnloadMaterial(material);
    }

    void Model3D::MaterialTextureSet(Material *material, int mapType, Texture2D &texture)
    {
        SetMaterialTexture(material, mapType, texture);
    }

    void Model3D::ModelMeshMaterialSet(Model *model, int meshId, int materialId)
    {
        SetModelMeshMaterial(model, meshId, materialId);
    }

    Model Model3D::ModelLoad(std::string fileName)
    {
        this->_model = LoadModel(fileName.c_str());
        return (_model);
    }

    Model Model3D::ModelFromMeshLoad(Mesh &mesh)
    {
        this->_model = LoadModelFromMesh(mesh);
        return (this->_model);
    }

    void Model3D::ModelFromModel(Model &model)
    {
        this->_model = model;
    }

    void Model3D::ModelUnload(Model &model)
    {
        UnloadModel(model);
    }

    void Model3D::ModelKeepMeshesUnload(Model &model)
    {
        UnloadModelKeepMeshes(model);
    }

    BoundingBox Model3D::ModelBoundingBoxGet(Model &model)
    {
        return (GetModelBoundingBox(model));
    }

    void Model3D::TransformXYZ(Vector3f<float> vect)
    {
        Vector3 vector = {vect.x, vect.y, vect.z };

        this->_model.transform = MatrixRotateXYZ(vector);
    }
}
