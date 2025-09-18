#include <iostream>
#include <cmath>

void main()
{
	float a = 1.75, b = 4.5e-4, y, r;
	y = a * exp(-2 * b) - sqrt(1 + a);
	r = log(1 + 20 * b) / (1 + a);
	std::cout << " y = " << y << std::endl;
	std::cout << " r = " << r << std::endl;
}