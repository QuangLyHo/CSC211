#ifndef SHAPE_H
#define SHAPE_H

class Shape {
protected:
	int numSides;
	static int numShapes;

public:

	Shape(int numSides);
	int getSides() const { return numSides; }
	virtual double getPerimeter() const = 0;
	static int getCount() ;
};



#endif
