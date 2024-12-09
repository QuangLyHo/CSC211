#ifndef LAPTOP_H
#define LAPTOP_H
#include <iostream>
#include <string>
#include "Harddrive.h"
using namespace std;

class Laptop {
private:
    string brand;
    float size;
    Harddrive hardDrive;
public:
    Laptop(string, float, string, int );
    string getBrand() { return brand; };
    float getSize() { return size; };
    bool createFiles(int);
    bool removeFiles(int);
    void printDriveInfo();

    void print();
};


#endif