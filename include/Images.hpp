#pragma once

namespace blb
{
    template <class T>
    class Images
    {
    public:
        T data;
        T width;
        T height;
        T mipmaps = 1;
        T format;
        Images(T data, T width, T height, T mipmaps, T format) : data(_data), width(_width), height(_height), mipmaps(_mipmaps), format(_format)
        {
        }

        ~Images();
        {
        }

        Images<T> operator+(Images<T> other)
        {
            this->data += other.data;
            this->width += other.width;
            this->height += other.height;
            this->mipmaps += other.mipmaps;
            this->format += other.format;
        }

        bool operator==(Images<T> other)
        {
            return (this->data == other.data &&
                    this->width == other.width &&
                    this->height == other.height &&
                    this->mipmaps == other.mipmaps &&
                    this->format == other.format)
        }

        bool operator!=(Images<T> other)
        {
            return (this->data != other.data ||
                    this->width != other.width ||
                    this->height != other.height ||
                    this->mipmaps != other.mipmaps ||
                    this->format != other.format)
        }
    };
}
