#include <iostream>
#include "Harddrive.h"
#include "Laptop.h"
#include <string>
#include <vector>
using namespace std;

int main() {
    bool enoughSpace;
    Harddrive c_drive("Toshiba", 200000);
    cout << c_drive.getBrand() << endl;

    enoughSpace = c_drive.useSpace(12345);

    if (enoughSpace) cout << "Save completed.\n";
    else cout << "Save failed.\n";

    enoughSpace = c_drive.freeUpSpace(6789);

    if (enoughSpace) cout << "Print deleted.\n";
    else cout << "Delete failed.\n";

    enoughSpace = c_drive.useSpace(234567);

    if (enoughSpace) cout << "Save completed.\n";
    else cout << "Save failed.\n";

    c_drive.printUsed();

    vector<Harddrive> harddrives;
    harddrives.push_back(c_drive);
    Harddrive c_driveTwo("Western Digital", 124000);
    harddrives.push_back(c_driveTwo);

    harddrives.at(0).printFree();
    harddrives.at(1).printFree();
}