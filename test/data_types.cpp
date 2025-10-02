#include <iostream>
void data_types()
{
	float x = 3, y;
	y = x * x + sin(x);
	std::cout << y;
	std::cout << "\n";

	double t, u, k = 4, a = 4.1, z = 5e-5;
	t = 2 * tan(k) / a + log(3 + z) + exp(z);
	u = sqrt(t + 1) - sin(z) * cos(t);
	std::cout << "t=" << t;
	std::cout << "\n";
	std::cout << "u=" << u;
}
