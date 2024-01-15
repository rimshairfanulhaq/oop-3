#pragma once
#include "twoD.h"
class Triangle :
    public twoD
{
    Triangle(double, double);
    double area();
    void display();
};

