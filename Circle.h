#ifndef __CIRCLE_H__
#define __CIRCLE_H__
#include <iostream>

class Circle
{
    private:
    double m_radius;
    std::string m_name;

    public:
	Circle(std::string name, double radius);
        ~Circle();

        double getArea();

        void print();
        // virtual void print();      // for later testing
        // virtual void print() = 0;  // for later testing
};

#endif