#pragma once
#include<iostream>
using namespace std;
class Shape
{
protected:
	double length;
	double height;
	double width;

public:
	Shape(double, double, double);
	double area();
	double volume();
};

