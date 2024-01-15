#pragma once
#include "threeD.h"
class Tetra :
    public threeD
{
public:
    Tetra(double);
    double volume();
    void display();
};

