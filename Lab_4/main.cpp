#include <iostream>
using namespace std;

int house();
int apartments();

int main() {
    int choice;
    cout << "Select a task (1-4): ";
    cin >> choice;

    switch (choice) {
    case 1:
        house();
        break;
    case 2:
        apartments();
        break;
    default:
        cout << "There is no such task!" << endl;
    }
    return 0;
}