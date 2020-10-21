#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

class Rectangle 
{
    private:
        std::string myName;
        double myWidth;
        double myHeight;

    public:
        Rectangle(std::string name,  double width, double height);
        ~Rectangle();

        double getArea();

        void print();
        // virtual void print();      // for later testing
        // virtual void print() = 0;  // for later testing
};

#endif

