#include "Shape.h"
#include "Rectangle.h"
#include <iostream>

using namespace std;

int main() {
	float length, width;
	bool createdRectangle = false;
	cout << "Type a length and width: ";
	cin >> length >> width;
	Rectangle* rptr = nullptr;

	do {
		try {
			rptr = new Rectangle(length, width);
			createdRectangle = true;
		}
		catch (Rectangle::BadLengthException  e) {
			cout << "bad length. Type a new length: ";
			cin >> length; 
		}
		catch (Rectangle::BadWidthException  e) {
			cout << "bad width. Type a new width: ";
			cin >> width;
		}
	} while (!createdRectangle );

	cout << "The length and width are: ";
	cout << rptr->getLength() << " and " << rptr->getWidth() << endl;

	return 0;
}

