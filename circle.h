#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape
{
public:
    Circle();
    void setValues(double radius);
    double getArea (void);
    double getPerimeter(void);
private:
    double radius_;

};

#endif // CIRCLE_H
