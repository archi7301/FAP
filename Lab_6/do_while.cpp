#include <iostream>

using namespace std;

void do_while_cycle()
{
	int a = 1;
	float z, w, j, y = 0.4, t = 3;
	do
	{
		printf("Enter j:");
		scanf_s("%f", &j);

		z = sqrt(t * a + y) + 4 * exp(-2 * j);
		w = log(0.4 * y) / (7 * a - z);

		cout << "z = " << z << endl;
		cout << "w = " << w << endl;

		t = t + 0.2;
	}

	while (t < 4.2);
}