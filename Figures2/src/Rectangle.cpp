#include "Rectangle.h"

Rectangle::Rectangle() : a(0), b(0) {}
Rectangle::Rectangle(double _a, double _b)
{
    if ((_a > 0) && (_b > 0)) {
        a = _a; b = _b;
    }
    else {
        Rectangle();
        std::cout << "incorrect side lenghts!";
    }
}
double Rectangle::Perimetr()
{
    return 2 * (a + b);
}
double Rectangle::Square()
{
    return a * b;
}