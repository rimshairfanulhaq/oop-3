#pragma once
#include "Shape.h"
class threeD :
    public Shape
{
public:
    threeD(double, double,double);
    double volume();
    void display();
};

