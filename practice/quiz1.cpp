#include <iostream>
using namespace std;

int main() {
    int l, w;
    char symbol;

    cout << "enter l, w, symbol";
    cin >> l >> w >> symbol;

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < w; j++) {
            cout << symbol;
        }
        cout << endl;
    }

    return 0;
}