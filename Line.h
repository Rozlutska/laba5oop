#pragma once
#include "SQRT.h"
class Line: public SQRT
{
protected:
    double b, c;
public:
    Line(double b, double c);

    void roots();
};

