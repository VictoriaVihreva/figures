#include "Circle.h"

Circle::Circle() : r(0) {}
Circle::Circle(double _r)
{
	if (_r > 0) { r = _r; }
	else 
	{
		Circle();
		std::cout << "incorrect radius lenghts!";
	}
}
double Circle::Perimetr() 
{
	return (2 * M_PI * r);
}
double Circle::Square()
{
	return (M_PI * r * r);
}
