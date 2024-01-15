#include "Triangle.h"
Triangle::Triangle(double d, double r):twoD(0,d,r)
{
	width = d;
	height = r;
}
double Triangle::area()
{
	return (height * width) / 2;
}
void Triangle::display()
{
	cout << "Area of triangle: " << area();
}