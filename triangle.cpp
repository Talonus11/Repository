#include "triangle.h"

Triangle::Triangle():
base_(0.0), height_(0.0)
{
    description_="square";
}

void Triangle::setValues(double base, double height)
{
    base_ = base;
    height_ = height;
    description_ = "isosceles triangle";
}

double Triangle::getArea(void)
{
    return 0.5*base_*height_;
}

double Triangle::getPerimeter(void)
{
    return 1; //to be added later
}
