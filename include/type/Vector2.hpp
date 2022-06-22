#pragma once

#include <ostream>

namespace blb
{
    template<class T>
    class Vector2
    {
        public:
            T x;
            T y;
            Vector2() = default;
            Vector2(T _x, T _y) : x(_x), y(_y)
            {

            }
            ~Vector2()
            {

            }

            Vector2<T> operator+(Vector2<T> other)
            {
                this->x += other.x;
                this->y += other.y;
            }

            bool operator==(Vector2<T> other)
            {
                return (this->x == other.x && this->y == other.y);
            }

            bool operator!=(Vector2<T> other)
            {
                return (this->x != other.x || this->y != other.y);
            }
        private:
        protected:
    };
}

using Vector2f = blb::Vector2<float>;

inline std::ostream &operator<<(std::ostream &os, const Vector2f &vector)
{
    os << "Vector2f" << "(" << vector.x << ", " << vector.y << ")";
    return os;
}