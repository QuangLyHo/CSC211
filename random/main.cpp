#include <iostream>
using namespace std;

template<class T>
T largestInt(T a, T b);

int main() {
    cout << largestInt(2.7,5.1);
    cout<< endl;
    cout << largestInt(2,5);

    return 0;
}

template<class T>
T largestInt(T a, T b) {
    T result;

    a > b ? result = a : result = b;
    return result; 
}