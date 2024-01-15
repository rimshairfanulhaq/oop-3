#include "twoD.h"
twoD::twoD(double a, double b,double c):Shape(a,b,c)
{
	length = a;
	width = b;
	height = c;
}
double twoD::area()
{
	return length * width;
}
void twoD::display()
{
	cout << "Area " << area() << endl;
}
