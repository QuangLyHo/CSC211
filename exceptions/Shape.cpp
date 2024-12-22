#include "Shape.h"

int Shape::numShapes = 0;


Shape::Shape(int numSides) { 
	this->numSides = numSides; 
	numShapes++;
}
int Shape::getCount()   {
	return numShapes;
}