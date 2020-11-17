#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class circle : shape{
public:

	virtual double getarea();
	//constructor
	circle(std::string color, int radius);
	circle(const circle& rhs);
	void setRadius(double radius);
	double getRadious();
	std::string getcolour();
	~circle();
private:
	double radius;
	const double pi = 3.14159265359;
};

#endif