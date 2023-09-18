#pragma once
#include "Figure.h"

class Rectangle :
    public Figure
{
private:
    double a, b;
public:
    Rectangle();
    Rectangle(double, double);
    double Perimetr();
    double Square();
};