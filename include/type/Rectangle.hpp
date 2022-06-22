#pragma once

#include <ostream>

namespace blb
{
    template <class T>
    class Rect
    {
        public:
            T x;
            T y;
            T width;
            T height;

            Rect(T _x, T _y, T _width, T _height) : x(_x), y(_y),
                width(_width), height(_height) { }
            ~Rect() = default;

            Rect<T> operator+(Rect<T> other)
            {
                this->x += other.x;
                this->y += other.y;
                this->width += other.width;
                this->height += other.height;
            }

            bool operator==(Rect<T> other)
            {
                return (this->x == other.x && this->y == other.y &&
                    this->width == other.width && this->height == other.height);
            }

            bool operator!=(Rect<T> other)
            {
                return (this->x != other.x || this->y != other.y ||
                    this->width != other.width || this->height != other.height);
            }
        private:
        protected:
    };
}

using Rectf = blb::Rect<float>;
using Recti = blb::Rect<int>;

inline std::ostream &operator<<(std::ostream &os, const Recti &rect)
{
    os << "Recti" << "(" << rect.x << ", " << rect.y << ", " << rect.width <<
        ", " << rect.height << ")";
    return os;
}

inline std::ostream &operator<<(std::ostream &os, const Rectf &rect)
{
    os << "Rectf" << "(" << rect.x << ", " << rect.y << ", " << rect.width <<
        ", " << rect.height << ")";
    return os;
}
