#include "Sphere.h"
Sphere::Sphere(double j):threeD(0,j,0)
{
	width = j;
}
double Sphere::volume()
{
	return 4/3*3.14*(width * width * width);
}
void Sphere::display()
{
	cout << "Area of Sphere: " << volume();
}