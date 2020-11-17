#include <iostream>
#include <vector>

#include"shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {

	//std::vector<shape*> sh;
	auto shape1 = new circle("blue", 4);
	auto shape2 = new rectangle(4.2,3,"vit");

	std::cout << shape1->getarea() << " " << shape1->getcolour() << std::endl;
	std::cout << shape2->getarea() << " " << shape2->getcolour() << " " << shape2->getWidth(); 
	
	return 0;
}