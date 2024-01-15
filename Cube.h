#pragma once
#include "threeD.h"
class Cube :
    public threeD
{
public:
    Cube(double);
    double volume();
    void display();
};

