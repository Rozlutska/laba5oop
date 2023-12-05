#include <iostream>
#include "SQRT.h"
#include "Line.h"
#include "Quadratic.h"
#include "Equation.h"

int main() 
{
    setlocale(LC_ALL, "Ukrainian");
    SQRT* equation1 = new Line(2, 3);
    equation1->roots();

    SQRT* equation2 = new Quadratic(1, -6, 9);
    equation2->roots();

    Equation equation3(1, -6, 9);
    equation3.roots();

    Equation equation4(0, 2, 3);
    equation4.roots();

    delete equation1;
    delete equation2;
 
    return 0;
}