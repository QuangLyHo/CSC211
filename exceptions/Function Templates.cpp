#include <iostream>
using namespace std; 

template <class T>
void print(T val);

template <class T>  
void swapValues(T& val1, T& val2); 


int main() {
	int num1 = 100, num2 = 50;
	string s1 = "hi", s2 = "bye";
	//demonstrating that the print function works with multiple data types
	print("hello");
	print(110);
	print('*');

	cout << endl;

	//showing that swapValues works with int
	cout << "Original values: " <<endl;
	print(num1);
	print(num2);
	swapValues(num1, num2);
	cout << "After the swap : " <<endl;
	print(num1);
	print(num2);

	//showing that swapValues works with string
	cout << "Original values: " << endl;
	print(s1);
	print(s2);
	swapValues(s1, s2);
	cout << "After the swap : " << endl;
	print(s1);
	print(s2);


	return 0;
}

template <class T>
void print(T val) {
	cout << val << endl;
}


template <class T>
void swapValues(T& val1, T& val2) {
	T temp = val1;
	val1 = val2;
	val2 = temp;
}
