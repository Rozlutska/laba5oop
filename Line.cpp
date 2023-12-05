#include "Line.h"
#include <iostream>

Line::Line(double b, double c) : b(b), c(c) {}

void Line::roots() 
{
    if (b == 0) 
    {
        if (c == 0)  std::cout << "г������ �� ����� ������." << std::endl;
        else std::cout << "г������ �� �� ������." << std::endl;
    }
    else 
    {
        double root = -c / b;
        std::cout << "����� �������: x = " << root << std::endl;
    }
}