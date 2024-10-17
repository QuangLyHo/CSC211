/*
Quang Ly Ho
CSC211
Lab5 Question 2
*/

#include <iostream>
using namespace std;

int main() {
    int sizeOne, sizeTwo, i, count = 0;
    bool isSame = true;

    cout << "Enter size of array one and two: ";
    cin >> sizeOne >> sizeTwo;

    int arrayOne[sizeOne];
    int arrayTwo[sizeTwo];

    if (sizeOne != sizeTwo) {
        cout << "The two arrays are not equal, based on array size!\n";
    } 
    else {
        for (i = 0; i < sizeOne; i++) {
            int num;
            cout << "Enter value for array one, position " << i+1 << ": ";
            cin >> num;
            arrayOne[i] = num;
        }
        for (i = 0; i < sizeTwo; i++) {
            int num;
            cout << "Enter value for array two, position " << i+1 << ": ";
            cin >> num;
            arrayTwo[i] = num;
        }
        while (isSame && count < sizeOne) {
                arrayOne[count] == arrayTwo[count] ? count++ 
                : isSame = false;
            }

            if (isSame) {
                cout << "Arrays are equal!\n";
            }
            else {
                cout << "Arrays are NOT equal!\n";
        }
    }

    return 0;
}