#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class rectangle : public shape {
public:
	virtual double getarea() const override;

	//constructor
	rectangle(double width, double length, std::string colour);
	rectangle(const rectangle& rhs);

	//getter
	double getWidth() const;
	double getLenght() const;
	std::string getcolour() const;

	void setWidth(double width);
	void setLength(double length);
	void setColour(std::string colour);

	~rectangle();
private:
	double width;
	double length;
};
#endif
