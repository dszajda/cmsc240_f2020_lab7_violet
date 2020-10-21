#include "Shape.h"
#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle :: Rectangle( string name, double width, double height) {
    myName = name;
    myWidth = width;
    myHeight = height;
}

double Rectangle::getArea(){

    return myWidth * myHeight;

}

void Rectangle::print(){
    cout << "Rectangle's name: " << "";
    cout << myName << endl;

    cout << "Width of rectangle: " << "";
    cout << myWidth << endl;

    cout << "Height of rectangle: " << "";
    cout << myHeight << endl;
}

 Rectangle::~Rectangle(){};
