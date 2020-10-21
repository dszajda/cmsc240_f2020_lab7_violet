#define _USE_MATH_DEFINES
#include <math.h>

#include "Shape.h"


Circle::Circle(std::string name, double radius):Shape(name) {
    m_radius = radius;
}
Circle::~Circle(){}


double Circle::getArea()
{
    return M_PI * radius^2 ;
}

void Circle::print()
{
    std::cout << "Circle's Name: " << name <<  "   Circle' Radius: " << radius << std::endl;    
}



