#include <iostream>
using namespace std;

void while_cycle()
{
	int a = 1;
	float z, w, j = 1, y = 0.4, t = 5 * 10 ^ 5;

	while (j < 2.2)
	{
		z = sqrt(t * a + y) + 4 * exp(-2 * j);
		w = log(0.4 * y) / (7 * a - z);

		cout << "z = " << z << endl;
		cout << "w = " << w << endl;

		j = j + 0.2;
	}
}