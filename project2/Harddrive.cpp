#include "Harddrive.h"
#include <string>
#include <iostream>


Harddrive::Harddrive(std::string brand, int capacity) {
	this->brand = brand;
	this->capacity = capacity;
	used = 0;
}

bool Harddrive::useSpace(int fileSize) {
	bool isSaved = false;
	if (capacity >= fileSize + used) {
		used += fileSize;
		isSaved = true;
	}
	return isSaved;
}

bool Harddrive::freeUpSpace(int fileSize) {
	bool isFreed = false;
	if (used >= fileSize) {
		used -= fileSize;
		isFreed = true;
	}
	return isFreed;
}

void Harddrive::printUsed() {
		std::cout << getUsed() << " used of " << getCapacity() << std::endl;
}

void Harddrive::printFree() {
	std::cout << getFree() << " free of " << getCapacity() << std::endl;
}