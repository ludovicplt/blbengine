/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Model3D
*/

#pragma once

#include "EModel.hpp"

namespace blb
{
    class Model3D : public EModel
    {
    public:
        Model3D() = default;
        ~Model3D() = default;

        // Model drawing functions
        void ModelDraw(Model &model, Vector3f<float> position, float scale,
            Color tint);
        void ModelExDraw(Model &model, Vector3f<float> position, Vector3f<float> rotationAxis,
            float rotationAngle, Vector3f<float> scale, Color tint);
        void ModelWiresDraw(Model &model, Vector3f<float> position, float scale,
            Color tint);
        void ModelWiresExDraw(Model &model, Vector3f<float> position, Vector3f<float> rotationAxis,
            float rotationAngle, Vector3f<float> scale, Color tint);
        void BoundingBoxDraw(BoundingBox &box, Color color);
        void BillboardDraw(Camera &camera, Texture2D &texture, Vector3f<float> position,
            float size, Color tint);
        void BillboardRecDraw(Camera &camera, Texture2D &texture, Rectangle &source, Vector3f<float> position, Vector2f size, Color tint);
        void BillboardProDraw(Camera &camera, Texture2D &texture, Rectangle &source, Vector3f<float> position, Vector3f<float> up, Vector2f size, Vector2f origin, float rotation, Color tint);

        // Model animations loading/unloading functions
        ModelAnimation *ModelAnimationsLoad(std::string fileName,
            unsigned int *animCount);
        void ModelAnimationUpdate(Model &model, ModelAnimation &anim, int frame);
        void ModelAnimationUnload(ModelAnimation &anim);
        void ModelAnimationsUnload(ModelAnimation *animations, unsigned int count);
        bool ModelAnimationValidIs(Model &model, ModelAnimation &anim);

        // Mesh management functions
        void MeshUpload(Mesh *mesh, bool dynamic);
        void MeshBufferUpdate(Mesh &mesh, int index, void *data, int dataSize,
            int offset);
        void MeshUnload(Mesh &mesh);
        void MeshDraw(Mesh &mesh, Material &material, Matrix &transform);
        void MeshInstancedDraw(Mesh &mesh, Material &material,
            Matrix *transforms, int instances);
        bool MeshExport(Mesh &mesh, std::string fileName);
        BoundingBox MeshBoundingBoxGet(Mesh &mesh);
        void MeshTangentsGen(Mesh *mesh);
        void MeshBinormalsGen(Mesh *mesh);

        // Material loading/unloading functions
        Material *MaterialsLoad(std::string fileName, int *materialCount);
        Material MaterialDefaultLoad(void);
        void MaterialUnload(Material &material);
        void MaterialTextureSet(Material *material, int mapType, Texture2D &texture);
        void ModelMeshMaterialSet(Model *model, int meshId, int materialId);

        // Model loading/unloading functions
        Model ModelLoad(std::string fileName);
        Model ModelFromMeshLoad(Mesh &mesh);
        void ModelFromModel(Model &model);
        void ModelUnload(Model &model);
        void ModelKeepMeshesUnload(Model &model);
        BoundingBox ModelBoundingBoxGet(Model &model);
        void TransformXYZ(Vector3f<float> Vector);

    public:
        Model _model;
        Mesh _mesh;
        Color _tint;
        BoundingBox _box;
        Camera _camera;
        Texture2D _texture;
        ModelAnimation *_anim;
        Material _matrl;
        Matrix _matrx;
    };
}
