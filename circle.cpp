#include "circle.h"
#include "math.h"

Circle::Circle(): radius_(0.0)
{
    description_="circle";
}

void Circle::setValues(double radius) {
    radius_ = radius;
}

double Circle::getArea(void)
{
    return M_PI*pow(radius_,2.0);
}

double Circle::getPerimeter(void)
{
    return M_PI*(radius_*2);
}
