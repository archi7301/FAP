#include <iostream>
#include <conio.h>
using namespace std;

int even_odd_num();
int switch_case();
int discriminant();

int main()
{
    while (true)
    {

        int choice;
        cout << "Select a task (1-3): ";
        cin >> choice;

        switch (choice) {
        case 1:
            even_odd_num();
            break;
        case 2:
            switch_case();
            break;
        case 3:
            discriminant();
            break;
        default:
            cout << "There is no such task!" << endl;
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