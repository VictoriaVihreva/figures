#include "Triangle.h"

Triangle::Triangle() : a(0), b(0), c(0) {};
Triangle::Triangle(double _a, double _b, double _c)
{
    if ((_a < _b + _c) && (_b < _a + _c) && (_c < _a + _b) && (_a > 0) && (_b > 0) && (_c > 0)) {
        a = _a; b = _b; c = _c;
    }
    else {
        Triangle();
        std::cout << "incorrect side lenghts!";
    }
};
double Triangle::Perimetr()
{
    return (a + b + c);
}
double Triangle::Square()
{
    double p = (a / 2) + (b / 2) + (c / 2);
    return sqrt(p * (p - a) * (p - b) * (p - c));

}
