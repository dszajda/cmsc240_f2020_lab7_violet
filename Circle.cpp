#define _USE_MATH_DEFINES
#include <math.h>
#include "Circle.h"
#include "Shape.h"
#include <iostream>


Circle::Circle(std::string name, double radius) {
    m_radius = radius;
    m_name = name;
}

Circle::~Circle(){}

double Circle::getArea()
{
    const long double pi = 3.141592653589793238L;

    return pi * (m_radius*m_radius) ;
}

void Circle::print()
{
    std::cout << "Circle's Name: " << m_name <<  std:: endl;
    std::cout <<  "Circle's Radius: " << m_radius << std::endl;    
}



