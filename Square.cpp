#include "Square.h"
Square::Square(double p):twoD(p,0,0)
{
	length = p;
}
double Square::area()
{
	return length * length;
}
void Square::display()
{
	cout << "AREA: " << area();
}