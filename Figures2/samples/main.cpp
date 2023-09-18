#include "Figure.h"
#include "Triangle.h"
#include "Rectangle.h"
using namespace std;

int main()
{
    Triangle t = Triangle(3, 4, 5);
    Rectangle r1 = Rectangle(2, 3);
    Rectangle r2 = Rectangle(3, 5);
    double s = t.Square();
    cout <<"Square of triangle(3,4,5) is S=" << s << endl;
    cout << "triangle(3,4,5) is equal to rectangle(2, 3) : " << (t == r1) << endl;
    cout << "triangle(3,4,5) is equal to rectangle(3, 5) : " << (t == r2) << endl;
}

