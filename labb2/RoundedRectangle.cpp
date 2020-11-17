#include "RoundedRectangle.h"

double RoundedRectangle::getarea()//A = ab - r² * ( 4 - pi )
{
	double lw = rectangle::getLenght() * rectangle::getWidth();
	double r_2 = radius * radius;
	return lw - r_2 * (4 - pi);
}

RoundedRectangle::RoundedRectangle(std::string colour, double length, double width, double radius) : rectangle(width,length,colour), radius(radius)
{
}

RoundedRectangle::RoundedRectangle(const RoundedRectangle& rhs): rectangle(rhs), radius(rhs.radius)
{
}


double RoundedRectangle::getRadius()
{
	return radius;
}

double RoundedRectangle::getWidth()
{
	return rectangle::getWidth();
}

double RoundedRectangle::getLength()
{
	return rectangle::getLenght();
}

std::string RoundedRectangle::getcolour()
{
	return rectangle::getcolour();
}

void RoundedRectangle::setRadius(double radius)
{
	radius = radius;
}

RoundedRectangle::~RoundedRectangle()
{
}
