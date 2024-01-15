#pragma once
#include "Shape.h"
class twoD :
   public Shape
{
public:
    twoD(double, double,double);
    double area();
        void display();
};

