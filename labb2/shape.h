#ifndef SHAPE_H
#define SHAPE_H

#include<string>

class shape {
public:
	//constructor
	//shape() = delete;
	shape(std::string color);
	shape(const shape& rhs);
	std::string getcolour() const;
	void setcolour(std::string colour);

	virtual double getarea() const = 0;//pure virtual funktion

	virtual ~shape();
private:
	std::string colour;
	
};

#endif // 

