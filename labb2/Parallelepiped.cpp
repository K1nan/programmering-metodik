#include "Parallelepiped.h"

double Parallelepiped::getarea() const//S= 2(ab+bc+ac)=0
{
	/*double lw = rectangle::getLenght() * rectangle::getWidth();
	double ld = rectangle::getLenght()* depth;
	double wd = rectangle::getWidth() * depth;
	return 2*(lw + ld + wd);*/
	return 2 * rectangle::getarea() + 2 * getWidth() * depth + 2 * getLenght() * depth;
}

Parallelepiped::Parallelepiped(std::string colour , double length, double width, double depth): rectangle(width, length, colour),depth(depth)
{
}

Parallelepiped::Parallelepiped(const Parallelepiped& rhs):rectangle(rhs),depth(rhs.depth)
{
}

double Parallelepiped::getDepth() const
{
	return depth;
}

/*double Parallelepiped::getWidth()
{
	return rectangle::getWidth();
}

double Parallelepiped::getLength()
{
	return rectangle::getLenght();
}

std::string Parallelepiped::getcolour()
{
	return rectangle::getcolour();
}
*/
void Parallelepiped::setDepth(double depth)
{
	depth = depth;
}

void Parallelepiped::setColour(std::string colour)
{
	colour = rectangle::getcolour();
}

void Parallelepiped::setWidth(double width)
{
	width = rectangle::getWidth();
}

void Parallelepiped::setLenght(double lenght)
{
	lenght = rectangle::getLenght();
}

Parallelepiped::~Parallelepiped()
{
}
