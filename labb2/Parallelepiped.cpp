#include "Parallelepiped.h"

double Parallelepiped::getarea()//S= 2(ab+bc+ac)=0
{
	double lw = rectangle::getLenght() * rectangle::getWidth();
	double ld = rectangle::getLenght()* depth;
	double wd = rectangle::getWidth() * depth;
	return 2*(lw + ld + wd);
}

Parallelepiped::Parallelepiped(std::string colour , double length, double width, double depth): rectangle(width, length, colour),depth(depth)
{
}

Parallelepiped::Parallelepiped(const Parallelepiped& rhs):rectangle(rhs),depth(rhs.depth)
{
}

double Parallelepiped::getDepth()
{
	return depth;
}

double Parallelepiped::getWidth()
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

void Parallelepiped::setDepth(double depth)
{
	depth = depth;
}

Parallelepiped::~Parallelepiped()
{
}
