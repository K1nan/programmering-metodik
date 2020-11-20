#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

#include"shape.h"
#include"Circle.h"
#include "Rectangle.h"
#include "Cylinder.h"
#include "RoundedRectangle.h"
#include "Parallelepiped.h"


void getData(std::vector<shape*>sh) {
	std::cout << std::endl;

	double totalArea = 0;
	std::map<std::string, double> colours;

	for (auto shape : sh)
	{
		totalArea += shape->getarea();

		std::string temp = shape->getcolour();
		double area = shape->getarea();

		colours.insert(std::pair<std::string, double>(temp,area));
		//colours[temp]++;
	}
	std::cout << "Total area: " << totalArea << std::endl;

	std::cout << "Colours: " << std::endl;
	for (auto colour : colours)
		std::cout << colour.first << ": " << colour.second << std::endl;

	std::cout << std::endl;
}
int main() {
	std::string colour;
	double radius = 1;
	double width = 2;
	double length = 2;
	double height = 3;
	double depth = 1;
	//std::vector<shape*> sh;
	//auto shape1 = new circle("blue", 4);
	//auto shape2 = new rectangle(4.2,3,"vit");
	int in ;
	std::vector<shape*>sh;
	sh.push_back(new circle("white", radius));
	sh.push_back(new rectangle(width, length, "yellow"));
	sh.push_back(new RoundedRectangle("gren", length, width, radius));
	sh.push_back(new Cylinder("blue", radius, height));
	sh.push_back(new Parallelepiped("red", length, width, depth));
	getData(sh);

	/*std::cout << "this program will count the area of shapes" << std::endl << "to choose witch shape you want to count type the number of the shape" << std::endl;
	std::cout << "1-Circle" << std::endl << "2-Rectangle" << std::endl << "3-Cylinder" << std::endl << "4-RoundedRectangle" << std::endl << "5-Parallelepiped" << std::endl;
	std::cin >> in;

	switch (in)
	{
	case 1: {
		std::cout << "type in the colour and radius of the circle:" << std::endl << "colour:";
		std::cin >> colour;
		std::cout << "Radius:";
		std::cin >> radius;
		auto shape1 = new circle(colour, radius);
		shape1->setRadius(radius);
		shape1->setColour(colour);
		std::cout << "Circle area is:" << shape1->getarea() << " and colour is:" << shape1->getcolour() << std::endl;
		break;
	}	
	case 2: {
		std::cout << "type in the colour, width and length of the rektangle:" << std::endl << "colour:";
		std::cin >> colour;
		std::cout << "width:";
		std::cin >> width;
		std::cout << "lenght:";
		std::cin >> length;
		auto shape2 = new rectangle(width, length, colour);
		shape2->setLength(length);
		shape2->setWidth(width);
		shape2->setColour(colour);
		std::cout << "Rectangle area is:" << shape2->getarea() << " and colour is: " << shape2->getcolour();
		break;
	}	
	case 3: {
		std::cout << "type in the colour, height and radius of the Cylinder:" << std::endl << "colour:";
		std::cin >> colour;
		std::cout << "Radius:";
		std::cin >> radius;
		std::cout << "Height:";
		std::cin >> height;
		auto shape3 = new Cylinder(colour, radius, height);
		shape3->setRadius(radius);
		shape3->setColour(colour);
		shape3->setHeight(height);
		std::cout << "Cylinder area is:" << shape3->getarea() << " and colour is:" << shape3->getcolour() << std::endl;
		break;
	}	
	case 4: {
		std::cout << "type in the colour, width, lenght and radius of the RoundedRectangle:" << std::endl << "colour:";
		std::cin >> colour;
		std::cout << "Radius:";
		std::cin >> radius;
		std::cout << "width:";
		std::cin >> width;
		std::cout << "lenght:";
		std::cin >> length;
		auto shape4 = new RoundedRectangle(colour, length, width, radius);
		shape4->setRadius(radius);
		shape4->setColour(colour);
		shape4->setLenght(length);
		shape4->setRadius(radius);
		std::cout << "RoundedRectangle area is:" << shape4->getarea() << " and colour is:" << shape4->getcolour() << std::endl;
		break;
	}
	case 5: {
		std::cout << "type in the colour, width, lenght and depth of the Parallelepiped:" << std::endl << "colour:";
		std::cin >> colour;
		std::cout << "Depth:";
		std::cin >> depth;
		std::cout << "width:";
		std::cin >> width;
		std::cout << "lenght:";
		std::cin >> length;
		auto shape5 = new Parallelepiped(colour, length, width, depth);
		shape5->setDepth(depth);
		shape5->setColour(colour);
		shape5->setLenght(length);
		shape5->setWidth(width);
		std::cout << "Parallelepiped area is:" << shape5->getarea() << " and colour is:" << shape5->getcolour() << std::endl;
		break;
	}
	}*/
	return 0;
}