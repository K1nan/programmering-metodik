#ifndef SHAPE_H
#define SHAPE_H

#include<string>

class shape {
public:
	//constructor
	//shape() = delete;
	shape(std::string color);
	shape(const shape& rhs);
	std::string getcolour();
	void setcolour(std::string colour);

	virtual double getarea();//pure virtual funktion

	~shape();
private:
	std::string colour;
	
};

#endif // 

