#include "threeD.h"
threeD::threeD(double g, double h, double i) :Shape(g, h, i)
{
	length = g;
	width = h;
	height = i;

}
double threeD::volume()
{
	return length * height * width;
}
void threeD::display()
{
	cout << "AREA 3D: " << volume();
}