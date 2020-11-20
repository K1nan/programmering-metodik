#ifndef ROUNDEDRECTANGLE_H
#define ROUNDEDRECTANGLE_H

#include "Rectangle.h"

class RoundedRectangle : public rectangle {
public:
	virtual double getarea() const override;
	//constroctor
	RoundedRectangle(std::string colour ,double length,double width , double radius );
	RoundedRectangle(const RoundedRectangle& rhs);

	//getter
	double getRadius() const;
	//double getWidth();
	//double getLength();
	//std::string getcolour();

	void setRadius(double radius);
	void setColour(std::string colour);
	void setLenght(double length);
	void setWidth(double width);

	~RoundedRectangle();
private:
	const double pi = 3.14159265359;
	double radius;
};

#endif // !ROundedRectangle_H

//RoundedRectangle