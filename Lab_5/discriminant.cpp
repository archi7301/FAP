#include <iostream>
#include <cmath>
using namespace std;

int discriminant()
{
	int a, b, c, d;
	float x1{}, x2{};

	puts("Enter the coefficient A: ");
	cin >> a;
	puts("Enter the coefficient B: ");
	cin >> b;
	puts("Enter the coefficient C: ");
	cin >> c;

	d = b^2 - 4 * a * c;

	if (d < 0)
		printf("\nThere are no roots\n");
	else
		x1 = (-b + sqrt(d)) / 2 * a;
		x2 = (-b - sqrt(d)) / 2 * a;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;

	return 0;
}