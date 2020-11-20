#include "Cylinder.h"

double Cylinder::getarea() const // s = 2pi r(h + r)
{
	
	return 2 * circle::getarea() +(( height * circle::getarea()) * height);
}

Cylinder::Cylinder(std::string colour, double radius, double height): circle(colour, radius), height(height)
{
}

Cylinder::Cylinder(const Cylinder& rhs): circle(rhs), height(rhs.height)
{
}

double Cylinder::getHeight() const
{
	return height;
}

/*double Cylinder::getRadius()
{
	return circle::getRadious();
}

std::string Cylinder::getcolour()
{
	return circle::getcolour();
}
*/
void Cylinder::setColour(std::string colour)
{
	colour = circle::getcolour();
}

void Cylinder::setRadius(double radius)
{
	radius = circle::getRadious();
}

void Cylinder::setHeight(double height)
{
	height = height;
}

Cylinder::~Cylinder()
{

}
