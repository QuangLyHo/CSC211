#ifndef HARDDRIVE_H
#define HARDDRIVE_H
#include <iostream>
#include <string>
using namespace std;

class Harddrive {
private:
    string brand;
    int capacity;
    int used;
public:
    Harddrive() : brand(""), used(0), capacity(0) {};
    Harddrive(string, int);
    string getBrand() { return brand; }
    int getCapacity() { return capacity; };
    int getUsed() { return used; };
    int getFree() { return capacity - used; };
    bool useSpace(int);
    bool freeUpSpace(int);
    void printUsed();
    void printFree();
};

#endif