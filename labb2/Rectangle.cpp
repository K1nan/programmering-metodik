#include "Rectangle.h"

double rectangle::getarea()//w * l
{
	return width* length;
}

rectangle::rectangle(double width, double length, std::string colour ): width(width), length(length), shape(colour)
{
}

rectangle::rectangle(const rectangle& rhs): width(rhs.width), length(rhs.length), shape(rhs)
{
}

double rectangle::getWidth()
{
	return width;
}

double rectangle::getLenght()
{
	return length;
}

std::string rectangle::getcolour()
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

rectangle::~rectangle()
{
}
