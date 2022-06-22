#pragma once

#include <ostream>

namespace blb
{
    class Texture2D
    {
        public:
            unsigned int id;
            int width;
            int height;
            int mipmaps = 1;
            int format;

            Texture2D(unsigned int _id, int _width, int _height, int _mipmaps,
                int _format) : id(_id), width(_width), height(_height),
                    mipmaps(_mipmaps), format(_format) { }
            ~Texture2D() = default;

            private:
            protected:
    };
}

using T2D = blb::Texture2D;

inline std::ostream &operator<<(std::ostream &os, const T2D &t)
{
    os << "Texture 2D" << "(" << t.id << ", " << t.width << ", " << t.height <<
        ", " << t.mipmaps << t.format << ")";
    return os;
}
