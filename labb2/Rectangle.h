#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class rectangle : shape {
public:
	virtual double getarea();

	//constructor
	rectangle(double width, double length, std::string colour);
	rectangle(const rectangle& rhs);

	//getter
	double getWidth();
	double getLenght();
	std::string getcolour();

	void setWidth(double width);
	void setLength(double length);

	~rectangle();
private:
	double width;
	double length;
};
#endif
