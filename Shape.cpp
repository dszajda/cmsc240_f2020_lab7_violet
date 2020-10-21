#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Sqaure.h"
#include <iostream>

//Constructor
Shape::Shape(std::string shapeName)
{
    if(shapeName == "Circle"){
        name = new Circle;
    }else if(shapeName == "Square") {
        name = new Square;
    }else{
        name = new Triangle;
    }

}


~shape::shape(){}


double Shape::getArea()
{
    return name.getArea();
}


void Shape::print()
{
    name.print();
}

