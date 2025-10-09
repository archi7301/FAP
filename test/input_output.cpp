#include <iostream>    
#include <iomanip>     
#include <stdio.h>     
#include <conio.h>     
using namespace std;   

void input_output()
{
	setlocale(LC_CTYPE, "Russian");   
	int t;
	cout << "Введите t=";   
	cin >> t;			    
	cout << "t=" << t << endl;
	cout << "Тип Размер в байтах: " << endl;        
	cout << "int: " << sizeof(int) << endl;	        
	cout << "char: " << sizeof(char) << endl;       
	cout << "float: " << sizeof(float) << endl;		
	cout << "double: " << sizeof(double) << endl;

	char c, probel; probel = ' ';
	cout << "Введите символ: "; cin >> c;
	cout << setw(35) << setfill(probel) << probel;   
	cout << setw(10) << setfill(c) << c << endl;	 
	cout << setw(34) << setfill(probel) << probel;	 
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c << endl;

	double e = 2.71828;
	cout << setw(3) << setprecision(2) << e << endl;   

	printf("\n\t Privet\n");     
	printf("\n... Press key");
	_getch();

	char name[60];
	puts("Как вас зовут? ");
	gets_s(name);
	printf("Привет, %s\n", name);
}
