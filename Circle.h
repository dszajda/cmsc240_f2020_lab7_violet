#include <string>
#include "Shape.h"

class Circle: public Shape
{
    private:
    double m_radius;

    public:
	Circle(std::string shapeName, double radius);
        ~Circle();

        double getArea();

        void print();
        // virtual void print();      // for later testing
        // virtual void print() = 0;  // for later testing
};

