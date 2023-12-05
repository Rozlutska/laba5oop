#pragma once
#include "SQRT.h"
class Quadratic: public SQRT
{
protected:
    double qa, b, c;
public:
    Quadratic(double a, double b, double c);

    void roots();
};

