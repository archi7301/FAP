#include <iostream>
using namespace std;

int switch_case() 
{
    setlocale(LC_CTYPE, "Russian");
    int choice;

    cout << "Привет! Что ты хочешь сделать?" << endl;
    cout << "1 - Поздороваться" << endl;
    cout << "2 - Узнать, как дела" << endl;
    cout << "3 - Попрощаться" << endl;
    cout << "Выбор: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Привет! Рад тебя видеть!" << endl;
        break;
    case 2:
        cout << "У меня всё отлично, спасибо! А у тебя?" << endl;
        break;
    case 3:
        cout << "До встречи! Хорошего дня!" << endl;
        break;
    default:
        cout << "Я не понял твой выбор." << endl;
    }

    return 0;
}
