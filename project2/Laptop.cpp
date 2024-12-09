#include "Harddrive.h"
#include "Laptop.h"
#include <string>
#include <iostream>

using namespace std;

Laptop::Laptop(string lBrand, float lSize, string hdBrand, int hdCapacity) 
    : brand(lBrand), size(lSize), hardDrive(hdBrand, hdCapacity) {}


bool Laptop::createFiles(int size) {
    return hardDrive.useSpace(size);
}

bool Laptop::removeFiles(int size) {
    return hardDrive.freeUpSpace(size);
}

void Laptop::printDriveInfo() {
    cout << "Hardrive brand: " << hardDrive.getBrand() << endl;
    hardDrive.printUsed();
}

void Laptop::print() {
    cout << "Laptop brand: " << brand << endl;
    cout << "size: " << size << "inches" << endl;
    
    printDriveInfo();
    cout << endl;
}