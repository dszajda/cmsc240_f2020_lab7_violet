#include "Shape.h"
//#include "Circle.h"
//#include "Triangle.h"
#include "Rectangle.h"
#include <iostream>

//Constructor
Shape::Shape(std::string shapeName)
{
    //if(shapeName == "Circle"){
    //    name = new Circle;
    //}
    //if(shapeName == "Triangle") {
    //    name = new Triangle;
    //}

    if(shapeName == "Rectangle"){
       Rectangle name;
    }

}


Shape::~Shape(){}


double Shape::getArea()
{
    return name.getArea();
}


void Shape::print()
{
    name.print();
}

