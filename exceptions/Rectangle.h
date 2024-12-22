#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle: public Shape
{
	private:
		double length;
		double width;
	public:
		class BadLengthException {};
		class BadWidthException {};

		Rectangle();
		Rectangle(double, double); //constructor that takes the length and width
		double getLength() const;
		double getWidth() const;
		void setLength(double len);
		void setWidth(double wid);
		double getPerimeter() const;
		double getArea() const;
};

#endif