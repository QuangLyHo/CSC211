#include <iostream>
#include <string>
#include "GasTank.h"
using namespace std;

GasTank::GasTank(double c) : capacity(c), amount(0) {};
void GasTank::addGas(double gas) {
    if ((gas + amount) > capacity) {
        amount = capacity;
    } else amount += gas;
}
void GasTank::useGas(double gas) {
    if ((amount - gas) <= 0) {
        amount = 0;
    } else amount -= gas;
}
bool GasTank::isEmpty() { return (amount < 0.1); }
bool GasTank::isFull() { return (amount >= (capacity - 0.1)); }
double GasTank::getGasLevel() { return amount; }
double GasTank::fillUp() {
    int difference = capacity - amount;
    amount = capacity;
    return difference;
}