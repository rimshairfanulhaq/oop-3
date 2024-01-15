#include "Tetra.h"
Tetra::Tetra(double v):threeD(0,v,0)
{
	width = v;
}
double Tetra::volume()
{
	return (width * width * width) / 8.4;
}
void Tetra::display()
{
	cout << "Area of tetra: " << volume();
}