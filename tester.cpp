#include "Shape.h"
#include "Shape.cpp"
using namespace std;

int main() {
    // Let's test Shape.cpp
    //Circle circ;
    //Triangle tri;

   Circle myCircle("circ", 12.0);
   cout << "Testing area method for circle: " << "";
   cout << myCircle.getArea() << endl;

   Triangle myTriangle("tri", 5.0, 4.0);
   cout << "Testing area method for triangle: " << "";
   cout << myTriangle.getArea() << endl;

    Rectangle myRectangle("rect", 4.0, 5.0);
    cout << "Testing area method for rectangle: " << "";
    cout << myRectangle.getArea() << endl;


};
