#include "Rectangle.h"

double rectangle::getarea() const//w * l
{
	return width* length;
}

rectangle::rectangle(double width, double length, std::string colour ): width(width), length(length), shape(colour)
{
}

rectangle::rectangle(const rectangle& rhs): width(rhs.width), length(rhs.length), shape(rhs)
{
}

double rectangle::getWidth() const
{
	return width;
}

double rectangle::getLenght() const
{
	return length;
}

std::string rectangle::getcolour() const
{
	return shape::getcolour();
}

void rectangle::setWidth(double width)
{
	width = width;
}

void rectangle::setLength(double length)
{
	length = length;
}

void rectangle::setColour(std::string colour)
{
	colour = shape::getcolour();
}

rectangle::~rectangle()
{
}
