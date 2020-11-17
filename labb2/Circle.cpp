#include "Circle.h"

double circle::getarea()//pi * r^2
{
    return pi *(radius*radius);
}

circle::circle(std::string color , int radius):shape(color), radius(radius)
{
 
}

circle::circle(const circle& rhs):radius(rhs.radius), shape(rhs)
{
}

void circle::setRadius(double radius)
{
    radius = radius;
}

double circle::getRadious()
{
    return radius;
}

std::string circle::getcolour()
{
    return shape::getcolour();
}

circle::~circle()
{
}

