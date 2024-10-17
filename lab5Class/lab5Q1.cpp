/*
Quang Ly Ho
CSC211
Lab5 Question 1
*/

#include <iostream>
using namespace std;

class Rectangle {
    private:
        int width, height;
    public:
        Rectangle();
        Rectangle(int, int);
        int area();
        int perimeter();
};

Rectangle::Rectangle() {
    width = 0;
    height = 0;
}
Rectangle::Rectangle(int w, int h) {
    width = w;
    height = h;
}
int Rectangle::area() {
    return (width * height);
}
int Rectangle::perimeter() {
    return 2*((width + height));
}

int main() {
    int length, width;

    cout << "Enter length and width for square one: ";
    cin >> length >> width;

    Rectangle squareOne(width, length);

    cout << "Enter length and width for square two: ";
    cin >> length >> width;

    Rectangle squareTwo(width, length);

    cout << "Rectangle one area = " << squareOne.area() << " and perimeter is " << squareOne.perimeter() << "\n\n";

    cout << "Rectangle two area = " << squareTwo.area() << " and perimeter is " << squareTwo.perimeter() << endl;
    return 0;
}