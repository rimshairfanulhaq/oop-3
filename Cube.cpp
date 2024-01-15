#include "Cube.h"
Cube::Cube(double o):threeD(0,o,0)
{
	width = o;
}
double Cube::volume()
{
	return width * width * width;
}
void Cube::display()
{
	cout << "Area of cube: " << volume();
}