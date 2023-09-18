#pragma once
#include "Figure.h"

class Triangle :
    public Figure
{
private:
    double a, b, c;
public:
    Triangle();
    Triangle(double, double, double);
    double Perimetr();
    double Square();
};
