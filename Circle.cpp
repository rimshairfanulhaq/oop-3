#include "Circle.h"
Circle::Circle(double n):twoD(0,n,0)
{
	width = n;
}
double Circle::area()
{
	return 3.14 * (width * width);
}
void Circle::display()
{
	cout << "Area of circle: " << area();
}