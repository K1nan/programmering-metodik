#ifndef CYLINDER_H
#define CYLINDER_H

#include "Circle.h"

class Cylinder : public circle {
public:
	virtual double getarea() const override;//V=h*pi*r^2

	//constructor
	Cylinder(std::string colour,double radius, double height);
	Cylinder(const Cylinder& rhs);

	//getters
	double getHeight() const;
	//double getRadius() const;
	//std::string getcolour() const;

	void setColour(std::string colour);
	void setRadius(double radius);
	void setHeight(double height);

	~Cylinder();
private:
	double height;
	const double pi = 3.14159265359;
};


#endif