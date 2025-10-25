#include <iostream>
using namespace std;

void for_cycle()
{
	int a = 1;
	float z, w, j, y = 0.4, t = 5 * 10^5;
	for (int n = 0; n < 5; n++)
	{
		printf("Enter j: ");
		scanf_s("%f", &j);

		z = sqrt(t * a + y) + 4 * exp(-2 * j);
		w = log(0.4 * y) / (7 * a - z);

		cout << "z = " << z << endl;
		cout << "w = " << w << endl;
	}
}