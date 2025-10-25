#include <iostream>
#include <conio.h>

using namespace std;

void interactive_debugging();
void planned_debugging();

int main()
{
	while (true)
	{
		int choice;
		cout << "Select your task (1 or 2): " << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			interactive_debugging();
			break;
		case 2:
			planned_debugging();
			break;
		default:
			cout << "There is no such task!" << endl;
		}
		
		int key = _getch();
		if (key == 27)
			break;
	}
	return 0;
}