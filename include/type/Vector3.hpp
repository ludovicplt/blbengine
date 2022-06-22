#pragma once

#include <ostream>

namespace blb
{
    template <class T>
    class Vector3f
    {
        public:
            T x;
            T y;
            T z;
            Vector3f(T _x, T _y, T _z) : x(_x), y(_y), z(_z)
            {

            }

            ~Vector3f() = default;

            Vector3f<T> operator+(Vector3f<T> other)
            {
                this->x += other.x;
                this->y += other.y;
                this->z += other.z;
            }

            bool operator==(Vector3f<T> other)
            {
                return (this->x == other.x && this->y == other.y && this->z == other.z);
            }

            bool operator!=(Vector3f<T> other)
            {
                return (this->x != other.x || this->y != other.y || this->z != other.z);
            }

            Vector3f<T> operator-(Vector3f<T> const &other)
            {
                this->x -= other.x;
                this->y -= other.y;
                this->z -= other.z;
                return *this;
            }

            Vector3f<T> operator+=(Vector3f<T> const &other)
            {
                this->x += other.x;
                this->y += other.y;
                this->z += other.z;
                return *this;
            }

            Vector3f<T> operator*(float const &other)
            {
                this->x *= other;
                this->y *= other;
                this->z *= other;
                return *this;
            }

            bool operator==(float const &other)
            {
                return this->x == other && this->y == other && this->z == other;
            }

        private:
        protected:
    };
}

using Vector3f = blb::Vector3f<float>;
using Vector3i = blb::Vector3f<int>;

inline std::ostream &operator<<(std::ostream &os, const Vector3i &vector)
{
    os << "Vector3i" << "(" << vector.x << ", " << vector.y << ", " << vector.z << ")";
    return os;
}

inline std::ostream &operator<<(std::ostream &os, const Vector3f &vector)
{
    os << "Vector3f" << "(" << vector.x << ", " << vector.y << ", " << vector.z << ")";
    return os;
}