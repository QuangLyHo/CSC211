#include <iostream>
#include "Harddrive.h"
#include "Laptop.h"
#include <string>
#include <vector>
using namespace std;

int main() {
    string laptopBrand, hdBrand;
    float size;
    int capacity;
    bool spaceForFiles;
    Laptop* personalLaptop = nullptr;
    Laptop schoolLaptop("Dell", 15.6, "Seagate", 256000);

    cout << "Laptop brand: ";
    cin >> laptopBrand;
    cout << "Laptop size: ";
    cin >> size;
    cout << "Harddrive brand: ";
    cin >> hdBrand;
    cout << "Harddrive size: ";
    cin >> capacity;

    cout << endl;

    personalLaptop = new Laptop(laptopBrand, size, hdBrand, capacity);
    cout << "The school's laptop\n";
    schoolLaptop.print();
    cout << "The student's laptop\n";
    personalLaptop->print();

    spaceForFiles = personalLaptop->createFiles(23456);

    spaceForFiles ? cout << "Save complete\n" : cout << "Save failed\n";

    spaceForFiles = personalLaptop->removeFiles(12345);

    spaceForFiles ? cout << "Delete completed\n" : cout << "Delete failed\n";

    personalLaptop->printDriveInfo();

    return 0;
}