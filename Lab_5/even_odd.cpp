#include <iostream>
using namespace std;

int even_odd_num()
{
	int a, b, c, d;
	puts("Enter A: "); 
	cin >> a;
	puts("Enter B: "); 
	cin >> b;
	puts("Enter C: "); 
	cin >> c;
	puts("Enter D: "); 
	cin >> d;

	bool hasEven = false;

	if (a % 2 == 0)
		cout << a << ' ';
		hasEven = true;
	if (b % 2 == 0)
		cout << b << ' ';
		hasEven = true;
	if (c % 2 == 0)
		cout << c << ' ';
		hasEven = true;
	if (d % 2 == 0)
		cout << d << ' ';
		hasEven = true;

	if (hasEven)
		puts("\nThere is an even number among the numbers A, B, C, D");
	else
		puts("\nThere are no even numbers among A, B, C, D");

	return 0;
}
