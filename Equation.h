#pragma once
#include "Quadratic.h"
#include "Line.h"

class Equation : public Quadratic, public Line {
public:
    Equation(double a, double b, double c);

    void roots();
};