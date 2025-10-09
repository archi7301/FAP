#include <iostream>

int add_my();
int add_1();
int add_2();
int add_3();

int main() {
    int choice;
    std::cout << "Select a task (1-4): ";
    std::cin >> choice;

    switch (choice) 
    {
    case 1:
        add_my();
        break;
    case 2:
        add_1();
        break;
    case 3:
        add_2();
        break;
    case 4:
        add_3();
        break;
    default:
        std::cout << "There is no such task!" << std::endl;
    }

    return 0;
}
