#include <iostream>

using namespace std;

void interactive_debugging()
{
	float b, z, x = -4 * pow(10, -3), s = 1.1, j = 4;
	while (j < 7.5)
	{
		b = 12 * s - exp(-s / 2) * (x - j);

		if (b < 1.5)
			z = sqrt(-2 * x * j) + b;
		else
			if (b >= 1.5)
				z = abs(13 * x * j) + b;

		cout << "b = " << b << endl;
		cout << "z = " << z << endl;

		j = j + 0.5;
	}
}