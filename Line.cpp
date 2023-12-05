#include "Line.h"
#include <iostream>

Line::Line(double b, double c) : b(b), c(c) {}

void Line::roots() 
{
    if (b == 0) 
    {
        if (c == 0)  std::cout << "Рівняння має безліч коренів." << std::endl;
        else std::cout << "Рівняння не має коренів." << std::endl;
    }
    else 
    {
        double root = -c / b;
        std::cout << "Корінь рівняння: x = " << root << std::endl;
    }
}