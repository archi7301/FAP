#include <iostream>
using namespace std;

int switch_case() 
{
    setlocale(LC_CTYPE, "Russian");
    int choice;

    cout << "������! ��� �� ������ �������?" << endl;
    cout << "1 - �������������" << endl;
    cout << "2 - ������, ��� ����" << endl;
    cout << "3 - �����������" << endl;
    cout << "�����: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "������! ��� ���� ������!" << endl;
        break;
    case 2:
        cout << "� ���� �� �������, �������! � � ����?" << endl;
        break;
    case 3:
        cout << "�� �������! �������� ���!" << endl;
        break;
    default:
        cout << "� �� ����� ���� �����." << endl;
    }

    return 0;
}
