#include <iostream>
#include "GasTank.h"
using namespace std;

int main() {
    double userInput;
    GasTank* ptrOne = nullptr;
    GasTank* ptrTwo = nullptr;

    cout << "Enter capacity for your gastank" << endl;
    cin >> userInput;

    while (userInput < 0.1) {
        cout << "Invalid gastank capacity\nPlease enter valid value\n";
    }

    ptrOne = new GasTank(userInput);
    ptrTwo = new GasTank(100);

    ptrOne->fillUp();

    cout << "How much gas will you use for first gas tank?\n";
    cin >> userInput;

    ptrOne->useGas(userInput);

    while ( ptrOne->isEmpty() ) {
        ptrOne->useGas(20);
        cout << "The gas amount is " << ptrOne->getGasLevel() << endl;
    }

    delete ptrOne;
    ptrOne = nullptr;

    cout << "How much gas will you use for second gas tank?\n";
    cin >> userInput;

    ptrTwo->addGas(userInput);

    ( ptrTwo->isFull() ) ? cout << "It's full\n" : cout << "Its not full\n";

    return 0;
}