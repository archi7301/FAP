#include <iostream>
using namespace std;

int apartments() {
    int apartmentNumber;
    cout << "Enter the apartment number: ";
    cin >> apartmentNumber;

    const int floorsPerEntrance = 9;
    const int apartmentsPerFloor = 4;
    const int entrances = 4;
    const int apartmentsPerEntrance = floorsPerEntrance * apartmentsPerFloor;

    if (apartmentNumber < 1 || apartmentNumber > entrances * apartmentsPerEntrance) {
        cout << "Such an apartment does not exist in this building!" << endl;
        return 1;
    }

    int entrance = (apartmentNumber - 1) / apartmentsPerEntrance + 1;
    int floor = ((apartmentNumber - 1) % apartmentsPerEntrance) / apartmentsPerFloor + 1;

    cout << "Entrance: " << entrance << endl;
    cout << "Floor: " << floor << endl;
    return 0;
}
