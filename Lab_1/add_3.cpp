#include <iostream>
#include <cmath>


int add_3()
{
	int i = -6;
	float x = 4.5, z = 1.5e-6, d, f;
	d = tan(-x * i) / sqrt(x - z);
	f = sin(2 * d) / d;
	std::cout << "d = " << d << std::endl;
	std::cout << "f = " << f << std::endl;
	return 0;
}