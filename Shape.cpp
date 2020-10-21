#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include <iostream>

//Constructor
Shape::Shape(std::string shapeName)
{
    name = shapeName;
};


Shape::~Shape(){}


double Shape::getArea()
{
    double area = 0.0;
    return area;
}



void Shape::print()
{
    
    std::cout << name << std::endl;
}

