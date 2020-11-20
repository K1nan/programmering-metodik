#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class circle : public shape{
public:

	virtual double getarea() const;
	//constructor
	circle(std::string color, int radius);
	circle(const circle& rhs);
	
	void setRadius(double radius);
	void setColour(std::string colour);

	double getRadious() const;
	std::string getcolour() const;
	~circle();
private:
	double radius;
	const double pi = 3.14159265359;
};

#endif