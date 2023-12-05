#include "Equation.h"
#include "Line.h"
#include "Quadratic.h"
#include <iostream>
#include <cmath>
Equation::Equation(double a, double b, double c) : Quadratic(a, b, c), Line(b, c) {}

void Equation::roots() {
    if (Quadratic::qa == 0) {
        Line::roots();
    }
    else {
        Quadratic::roots();
    }
}