#include "RoundedRectangle.h"

double RoundedRectangle::getarea() const//A = ab - r² * ( 4 - pi )
{
	/*double lw = rectangle::getLenght() * rectangle::getWidth();
	double r_2 = radius * radius;
	return lw - r_2 * (4 - pi);*/
	const int squared_corners = 4 * radius * radius;   //Remove the squared corners
	const int rounded_corners = radius * radius * pi; //Replace with the rounded
	return rectangle::getarea() - squared_corners + rounded_corners;
}

RoundedRectangle::RoundedRectangle(std::string colour, double length, double width, double radius) : rectangle(width,length,colour), radius(radius)
{
}

RoundedRectangle::RoundedRectangle(const RoundedRectangle& rhs): rectangle(rhs), radius(rhs.radius)
{
}


double RoundedRectangle::getRadius() const
{
	return radius;
}

/*double RoundedRectangle::getWidth()
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
*/
void RoundedRectangle::setRadius(double radius)
{
	radius = radius;
}

void RoundedRectangle::setColour(std::string colour)
{
	colour = rectangle::getcolour();
}

void RoundedRectangle::setLenght(double length)
{
	length = rectangle::getLenght();
}

void RoundedRectangle::setWidth(double width)
{
	width = rectangle::getWidth();
}

RoundedRectangle::~RoundedRectangle()
{
}
