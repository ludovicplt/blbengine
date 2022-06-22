#include "Mesh.hpp"
#include "Matrix.hpp"
#include "Material.hpp"
#include "Transform.hpp"
#include "BoneInfo.hpp"

#include <ostream>
#pragma once

namespace blb
{
    template <class T>
    class Models
    {
    public:
        Matrix transform;
        T meshCount;
        T materialCount;
        Mesh *meshes;
        Material *materials;
        T *meshMaterial;
        T boneCount;
        BoneInfo *bones;
        Transform *bindPose;

<<<<<<< HEAD
=======
        /**
         * @brief Construct a new Models object
         * 
         * @param transform 
         * @param meshCount 
         * @param materialCount 
         * @param meshes 
         * @param materials 
         * @param meshMaterial 
         * @param boneCount 
         * @param bones 
         * @param bindPose 
         */
>>>>>>> d2ae78ed6b66c3b0094e5e062001d23779ae3fac
        Models(Matrix transform, T meshCount, T materialCount,
               Mesh *meshes, Material *materials, T *meshMaterial, T boneCount,
               BoneInfo *bones, Transform *bindPose) : transform(_transform),
                                                       meshCount(_meshCount), materialCount(_materialCount),
                                                       meshes(_meshes), materials(_materials), meshMaterial(_meshMaterial),
                                                       boneCount(_boneCount), bones(_bones)
        {
        }
<<<<<<< HEAD
=======

        /**
         * @brief Destroy the Models object
         * 
         */
>>>>>>> d2ae78ed6b66c3b0094e5e062001d23779ae3fac
        ~Models()
        {
        }

<<<<<<< HEAD
=======
        /**
         * @brief 
         * 
         * @param other 
         * @return Models<T> 
         */
>>>>>>> d2ae78ed6b66c3b0094e5e062001d23779ae3fac
        Models<T> operator+(Models<T> other)
        {
            this->transform += other.transform;
            this->meshCount += other.meshCount;
            this->materialCount += other.materialCount;
            this->meshes += other.meshes;
            this->materials += other.materials;
            this->meshMaterial += other.meshMaterial;
            this->boneCount += other.boneCount;
            this->bones += other.bones;
            this->bindPose += other.bindPose;
        }

<<<<<<< HEAD
=======
        /**
         * @brief 
         * 
         * @param other 
         * @return true 
         * @return false 
         */
>>>>>>> d2ae78ed6b66c3b0094e5e062001d23779ae3fac
        bool operator==(Models<T> other)
        {
            return (this->transform == other.transform &&
                    this->meshCount == other.meshCount &&
                    this->materialCount == other.materialCount &&
                    this->meshes == other.meshes &&
                    this->materials == other.materials &&
                    this->meshMaterial == other.meshMaterial &&
                    this->boneCount == other.boneCount &&
                    this->bones == other.bones &&
                    this->bindPose == other.bindPose);
        }

<<<<<<< HEAD
=======
        /**
         * @brief 
         * 
         * @param other 
         * @return true 
         * @return false 
         */
>>>>>>> d2ae78ed6b66c3b0094e5e062001d23779ae3fac
        bool operator!=(Models<T> other)
        {
            return (this->transform != other.transform ||
                    this->meshCount != other.meshCount ||
                    this->materialCount != other.materialCount ||
                    this->meshes != other.meshes ||
                    this->materials != other.materials ||
                    this->meshMaterial != other.meshMaterial ||
                    this->boneCount != other.boneCount ||
                    this->bones != other.bones ||
                    this->bindPose != other.bindPose);
        }
    };
}
