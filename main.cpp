#include"Shape.h"
#include"twoD.h"
#include"threeD.h"
#include"Circle.h"
#include"Square.h"
#include"Triangle.h"
#include"Cube.h"
#include"Sphere.h"
#include"Tetra.h"
int main()
{
	cout << "-----DATA------" << endl;
	Circle d1(23);
	d1.display();
	cout << endl;
	Tetra t1(5);
	t1.display();
}
