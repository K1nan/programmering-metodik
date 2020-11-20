#ifndef PARALLELEPIPAD_H
#define PARALLELEPIPAD_H

#include "Rectangle.h"

class Parallelepiped : public rectangle{
public:
	virtual double getarea() const override;//S= 2(ab+bc+ac)=0
	//conctroctor
	Parallelepiped(std::string colour, double length, double width, double depth);
	Parallelepiped(const Parallelepiped& rhs);

	double getDepth() const;
	//double getWidth();
	//double getLength();
	//std::string getcolour();

	void setDepth(double depth);
	void setColour(std::string colour);
	void setWidth(double width);
	void setLenght(double lenght);

	~Parallelepiped();
private:
	double depth;

};
#endif // !Parallelepiped

