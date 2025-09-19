#include <iostream>
#include <cmath>


int add_2()
{
	int n = 2;
	float x = 1.3e-4, b = -0.12, z, y;
	z = 1 / (x - 1) + sin(x) - sqrt(n);
	y = (exp(-b) + 1) / 2 * z;
	std::cout << "z = " << z << std::endl;
	std::cout << "y = " << y << std::endl;
	return 0;
}