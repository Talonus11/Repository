#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

class Triangle : public Shape
{
public:
    Triangle();
    void setValues(double base, double height);
    double getArea (void);
    double getPerimeter(void);
private:
    double base_, height_;
};

#endif // TRIANGLE_H
