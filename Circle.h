#pragma once
#include "twoD.h"
class Circle :
    public twoD
{
public:
    Circle(double);
    double area();
    void display();
};

