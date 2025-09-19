#include <iostream>
#include <cmath>


int add_1()
{
	int k = 4;
	float x = 2e-4, a = 8.1, t, u;
	t = 2 * k / a + log(2 + x);
	u = sqrt(k - 1) / (t + 1);
	std::cout << "t = " << t << std::endl;
	std::cout << "u = " << u << std::endl;
	return 0;
}