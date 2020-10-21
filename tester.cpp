#include "Shape.h"
#include "Rectangle.h"
#include "Shape.cpp"
#include <iostream>
using namespace std;

int main() {
    // Let's test Shape.cpp
    //Circle circ;
    //Triangle tri;


   //Shape circ(Circle, 12.0);
   //cout << "Testing area method for circle: " << ""
   //cout << circ.getArea() << endl;

   //Shape tri(Triangle, 5.0, 4.0);
   //cout << "Testing area method for triangle: " << ""
   //cout << tri.getArea() << endl;

    Shape rect(Rectangle, 4.0, 5.0);
    cout << "Testing area method for rectangle: " << ""
    cout << rect.getArea() << endl;

}
