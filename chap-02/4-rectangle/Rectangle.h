#pragma once

#include <ostream>

class Rectangle
{
public:
    Rectangle();
    Rectangle(float size);
    Rectangle(float length, float width);
//        : _length { length }, _width { width }
//    {}

    float get_length() const { return _length; }
    float get_width() const { return _width; }

    void scale(float ratio);
//    {
//        _length *= ratio;
//        _width *= ratio;
//    }
    static float _default_size;

private:
    float _length;
    float _width;
};

std::ostream& operator<<(std::ostream& stream, const Rectangle& rect);