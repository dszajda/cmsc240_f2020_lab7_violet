#include <string>
#include "Shape.h"

class Rectangle
{
    private:
        std::string name;
        double width;
        double height;

    public:
        Rectangle(std::string name,  double width, double height);
        ~Rectangle();

        double getArea();

        void print();
        // virtual void print();      // for later testing
        // virtual void print() = 0;  // for later testing
};



