#include "Rectangle.h"
Rectangle::Rectangle():Shape(4) {
	Rectangle(1, 1);
}

Rectangle::Rectangle(double len, double wid):Shape(4) {
	setLength(len);
	setWidth(wid);
}

double Rectangle::getLength() const {
	return length;
}
double Rectangle::getWidth() const {
	return width;
}
void Rectangle::setLength(double len) {
	if(len > 0)
		length = len;
	else
		throw BadLengthException();
}
void Rectangle::setWidth(double wid) {
	if (wid > 0)
		width = wid;
	else
		throw BadWidthException();
}
double Rectangle::getPerimeter() const {
	return length * 2 + width * 2;
}
double Rectangle::getArea() const {
	return length * width;
}