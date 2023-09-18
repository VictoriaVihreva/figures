#pragma once
#include "Figure.h"
class Circle :
    public Figure
{
private:
    double r;
public:
    Circle();
    Circle(double);
    double Perimetr();
    double Square();
};

