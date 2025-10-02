#include <iostream>
#include <conio.h>
using namespace std;

void data_types();
void input_output();

int main()
{
    while (true)
    {

        int choice;
        cout << "Select a task (1-2): ";
        cin >> choice;

        switch (choice) {
        case 1:
            data_types();
            break;
        case 2:
            input_output();
            break;
        default:
            cout << "There is no such task!" << endl;
        }

        cout << "\nPress ESC to exit...\n" << endl;

        int key = _getch();
        if (key == 27) {
            break;
        }
    }

    return 0;
}