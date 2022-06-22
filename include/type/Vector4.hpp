#pragma once

#include <ostream>

namespace blb
{
    template <class T>
    class Vector4
    {
        public:
            T x;
            T y;
            T z;
            T w;

            /**
             * @brief Construct a new Vector 4 object
             * 
             * @param _x x
             * @param _y y
             * @param _z z
             * @param _w w
             */
            Vector4(T _x, T _y, T _z, T _w) : x(_x), y(_y), z(_z), w(_w)
            {

            }

            /**
             * @brief Destroy the Vector 4 object
             * 
             */
            ~Vector4() =default;

            /**
             * @brief  make + operator for Vector 4D
             *
             * @param  other: displayed vector 
             * @retval displayed vector
             */
            Vector4<T> operator+(Vector4<T> other)
            {
                this->x += other.x;
                this->y += other.y;
                this->z += other.z;
                this->w += other.w;
            }

            /**
             * @brief  check if the current vector is equal to other
             * 
             * @param  other: compared vector 
             * @retval displayed vector
             */
            bool operator==(Vector4<T> other)
            {
                return (this->x == other.x && this->y == other.y && this->z == other.z && this->w == other.w);
            }

            /**
             * @brief check if the current vector is different to other
             * 
             * @param  other: compared vector
             * @retval displayed vector
             */
            bool operator!=(Vector4<T> other)
            {
                return (this->x != other.x || this->y != other.y || this->z != other.z || this->w != other.w);
            }
        private:
        protected:
    };
}

using Vector4f = blb::Vector4<float>;
using Vector4i = blb::Vector4<int>;
using Vector4u = blb::Vector4<unsigned char>;


/**
 * @brief make << operator for Vector<int> 4D 
 * 
 * @param  &os: standard output
 * @param  &vector: displayed vector
 * @retval displayed vector
 */
inline std::ostream &operator<<(std::ostream &os, const Vector4i &vector)
{
    os << "Vector4i" << "(" << vector.x << ", " << vector.y << ", " << vector.z << ", " << vector.w << ")";
    return os;
}


/**
 * @brief make << operator for Vector<float> 4D
 *
 * @param  &os: standard output 
 * @param  &vector: displayed vector
 * @retval displayed vector
 */
inline std::ostream &operator<<(std::ostream &os, const Vector4f &vector)
{
    os << "Vector4f" << "(" << vector.x << ", " << vector.y << ", " << vector.z << ", " << vector.w << ")";
    return os;
}


/**
 * @brief make << operator for Vector<unsigned> 4D
 *
 * @param  &os: standard output
 * @param  &vector: diplayed vector 
 * @retval displayed vector
 */
inline std::ostream &operator<<(std::ostream &os, const Vector4u &vector)
{
    os << "Vector4f" << "(" << vector.x << ", " << vector.y << ", " << vector.z << ", " << vector.w << ")";
    return os;
}