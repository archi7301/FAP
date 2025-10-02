#include <iostream>
#include <iomanip>
using namespace std;

int house()
{
	char roof, wall, door, space = ' ';

	cout << "Enter the char for the roof: "; cin >> roof;
	cout << "Enter the char for the wall: "; cin >> wall;
	cout << "Enter the char for the door: "; cin >> door;

	cout << setw(7) << setfill(space) << roof << endl;
	cout << setw(6) << setfill(space) << roof << roof << roof << endl;
	cout << setw(5) << setfill(space) << roof << roof << roof << roof << roof << endl;

	cout << setw(4) << setfill(space) << wall << wall << wall << wall << wall << wall << wall << endl;
    cout << setw(4) << setfill(space) << wall << space << space << door << space << space << wall << endl;
    cout << setw(4) << setfill(space) << wall << wall << wall << wall << wall << wall << wall << endl;

	return 0;
}
