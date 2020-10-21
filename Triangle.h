#ifndef Triangle_hpp
#define Triangle_hpp

#include <stdio.h>
class Triangle 
{

private:
    double area, triangle_base, triangle_height;
    std::string triangle_name;
public:
     Triangle (std::string name, double base, double height);
    ~Triangle();

    
    double getArea();
    
    
    void print();
};



#endif /* Triangle_hpp */

