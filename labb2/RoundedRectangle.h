#ifndef ROUNDEDRECTANGLE_H
#define ROUNDEDRECTANGLE_H

#include "Rectangle.h"

class RoundedRectangle : rectangle {
public:
	virtual double getarea();
	//constroctor
	RoundedRectangle(std::string colour ,double length,double width , double radius );
	RoundedRectangle(const RoundedRectangle& rhs);

	//getter
	double getRadius();
	double getWidth();
	double getLength();
	std::string getcolour();

	void setRadius(double radius);

	~RoundedRectangle();
private:
	const double pi = 3.14159265359;
	double radius;
};

#endif // !ROundedRectangle_H

//RoundedRectangle