#include <iostream>
#include "math_utils.h"

//struct is not here anymore only header file exists

namespace utilz
{
    double area(double length, double width)
    {
        return length * width;
    }


    double area(double length)
    {
        return length * length;
    }

    double area(Rectangle rectangle)
    {
        return rectangle.length * rectangle.width;
    }

    double pow(double base, int pow)
    {
        //pow(3) it calls default value pow = 2
        int total = 1;
        for(int i = 0; i < pow ; i++)
        {
            total *= base;
        }
        return total;
    } 
}

