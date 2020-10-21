#include "Shape.h"
#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle :: Rectangle(std::string name, double width, double height) : Shape(name)
    name = name;
    width = width;
    height = height;

}


double Rectangle::getArea( double width, double height){

    return width * height;

}

void Rectangle::print( double width, double height ){
    cout << "Name of rectangle: " << "";
    cout << name << endl;

    cout << "Width of rectangle: " << "";
    cout << width << endl;

    cout << "Height of rectangle: " << "";
    cout << height << endl;
}