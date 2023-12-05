#include "Quadratic.h"
#include <iostream>
#include <cmath>

Quadratic::Quadratic(double a, double b, double c) : qa(a), b(b), c(c) {}

void Quadratic::roots() 
{
    double discriminant = b * b - 4 * qa * c;
    if (discriminant > 0) 
    {
        double root1 = (-b + std::sqrt(discriminant)) / (2 * qa);
        double root2 = (-b - std::sqrt(discriminant)) / (2 * qa);
        std::cout << "����� �������: x1 = " << root1 << ", x2 = " << root2 << std::endl;
    }
    else if (discriminant == 0)
    {
        double root = -b / (2 * qa);
        std::cout << "г������ �� ���� �����: x = " << root << std::endl;
    }
    else std::cout << "г������ �� �� ������ ������." << std::endl;
    
}