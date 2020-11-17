#ifndef PARALLELEPIPAD_H
#define PARALLELEPIPAD_H

#include "Rectangle.h"

class Parallelepiped : rectangle{
public:
	virtual double getarea();//S= 2(ab+bc+ac)=0
	//conctroctor
	Parallelepiped(std::string colour, double length, double width, double depth);
	Parallelepiped(const Parallelepiped& rhs);

	double getDepth();
	double getWidth();
	double getLength();
	std::string getcolour();

	void setDepth(double depth);

	~Parallelepiped();
private:
	double depth;

};
#endif // !Parallelepiped

