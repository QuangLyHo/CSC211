#include <iostream>

using namespace std; 

//float divide(int , int );

int main() {
	int num1 = 10, num2 = 0;
	float quo;
	try {
		if (num2 == 0) {
			throw string("Division by zero error");
		}
		else {
			quo = static_cast<float>(num1)/num2;
		}
		cout << "The quotient is " << quo << endl;
	}
	catch (string exceptionS){
		cout << exceptionS << endl;
	}
	// int num1 = 10, num2 = 3;
	// float quo;
	// try {
	// 	if (num2 == 0)
	// 		throw string("division by zero error");
	// 	else {
	// 		quo = static_cast<float>(num1) / num2;
	// 	}
	// 	cout << "The quotient is " << quo << endl;
	// }
	// catch (string exceptionString)  {
	// 	cout << exceptionString << endl;
	// }
	return 0;
}



//divide function throws an exception if divisor is 0
/*
float divide(int num1, int num2) {
	if (num2 == 0)
		throw string("division by zero error");
	else {
		return static_cast<float>(num1) / num2;
	}
}
*/