#include "Shape.h"
using namespace std;


class Rectangle{

    private:
    string name;
    double width;
    double height;

    public:
    double getArea( double width, double height);
    void print();

};