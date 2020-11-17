#include "Cylinder.h"

double Cylinder::getarea() // s = 2pi r(h + r)
{
	
	return 2 * pi * circle::getRadious() * (height + circle::getRadious());
}

Cylinder::Cylinder(std::string colour, double radius, double height): circle(colour, radius), height(height)
{
}

Cylinder::Cylinder(const Cylinder& rhs): circle(rhs), height(rhs.height)
{
}

double Cylinder::getHeight()
{
	return height;
}

double Cylinder::getRadius()
{
	return circle::getRadious();
}

std::string Cylinder::getcolour()
{
	return circle::getcolour();
}

void Cylinder::setHeight(double height)
{
	height = height;
}

Cylinder::~Cylinder()
{

}
