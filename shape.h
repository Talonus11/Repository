#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape
{
public:
    Shape();
    virtual double getArea (void) = 0; // VIRTUAL makes the methods use the subclass. If set to = 0 it MUST call the subclass method.
    virtual double getPerimeter(void);
    std::string getDescription();
protected:
    std::string description_;
};

#endif // SHAPE_H
