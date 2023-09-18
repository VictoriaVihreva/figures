#pragma once
#define _USE_MATH_DEFINES
#include "cmath"
#include <iostream>

class Figure
{
public:
	virtual double Perimetr() = 0;
	virtual double Square() = 0;
	friend bool operator==(Figure&, Figure&);
};
