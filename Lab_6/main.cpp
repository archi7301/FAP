#include <iostream>
#include <conio.h>

using namespace std;

void for_cycle();
void while_cycle();
void do_while_cycle();

int main()
{
	while (true)
	{
		int choice;
		cout << "Select a task (1-3)" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			for_cycle();
			break;
		case 2:
			while_cycle();
			break;
		case 3:
			do_while_cycle();
			break;
		default:
			cout << "There is no such task" << endl;
		}

		cout << "\nPress ESC to exit...\n" << endl;

		int key = _getch();
		if (key == 27)
		{
			break;
		}
	}
	return 0;
}