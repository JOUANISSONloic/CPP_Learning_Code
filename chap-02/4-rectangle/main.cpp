#include "Rectangle.h"
#include <iostream>

int main()
{
    Rectangle rect(2.f, 4.f);
    std::cout << "{ L: " << rect.get_length() << ", W: " << rect.get_width() << " }" << std::endl;

    rect.scale(3);
    std::cout << "{ L: " << rect.get_length() << ", W: " << rect.get_width() << " }" << std::endl;

    Rectangle square(2.5f);
    std::cout << square << std::endl;

    Rectangle::_default_size = 3.f;
    Rectangle s1;
    std::cout << s1 << std::endl;
    Rectangle s2;
    std::cout << s2 << std::endl;

    Rectangle::_default_size = 5.f;
    Rectangle s3;
    std::cout << s3 << std::endl;
    Rectangle s4;
    std::cout << s4 << std::endl;
    Rectangle s5;
    std::cout << s5 << std::endl;

    return 0;
}
