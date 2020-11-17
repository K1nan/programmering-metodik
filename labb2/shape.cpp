#include "shape.h"

shape::shape(std::string color) : colour(color)
{
}

shape::shape(const shape& rhs)
{
	colour = rhs.colour;
}

std::string shape::getcolour()
{
	return colour;
}

void shape::setcolour(std::string colour)
{
	colour = colour;
}

double shape::getarea()
{
	return 0;
}

shape::~shape()
{
	
}

