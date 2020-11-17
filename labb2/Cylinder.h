#ifndef CYLINDER_H
#define CYLINDER_H

#include "Circle.h"

class Cylinder : circle {
public:
	virtual double getarea();//V=h*pi*r^2

	//constructor
	Cylinder(std::string colour,double radius, double height);
	Cylinder(const Cylinder& rhs);

	//getters
	double getHeight();
	double getRadius();
	std::string getcolour();

	void setHeight(double height);

	~Cylinder();
private:
	double height;
	const double pi = 3.14159265359;
};


#endif