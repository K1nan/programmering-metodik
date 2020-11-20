#include "Circle.h"

double circle::getarea() const//pi * r^2
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

void circle::setColour(std::string colour)
{
    colour = shape::getcolour();
}

double circle::getRadious() const
{
    return radius;
}

std::string circle::getcolour() const
{
    return shape::getcolour();
}

circle::~circle()
{
}

