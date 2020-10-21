#include "Shape.h"
#include "Triangle.h"
#include <iostream>

Triangle :: Triangle(std::string name, double base, double height) 
{
    triangle_name = name;
    triangle_base = base;
    triangle_height = height;
    
}


Triangle::~Triangle(){};


double Triangle::getArea()
{
    area = ((triangle_base * triangle_height) / 2);
    return area;
};


void Triangle::print()
{
    std::cout << "Triangle's name : " << triangle_name << std::endl;
    std::cout << "Triangle's Area :" << getArea() << std::endl;
};

