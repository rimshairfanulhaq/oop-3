#pragma once
#include "threeD.h"
class Sphere :
    public threeD
{
    Sphere(double);
    double volume();
    void display();
};

