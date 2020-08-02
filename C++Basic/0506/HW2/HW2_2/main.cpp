#include <iostream>
#include <string>
#include <cmath>
#include <random>

int main()
{
	std::cout << "Use a const double to prescribe the value PI=3.14.59265\n";

	std::cout << "Enter the number of throw: ";

	int throw_times = 0;

	std::cin >> throw_times;

	int inside = 0;

	std::random_device device;
	std::default_random_engine engine(device());
	std::uniform_real_distribution<double> uniform_dist(0, 1);

	for (int current_time = 0; current_time != throw_times; ++current_time)
	{
		double x = uniform_dist(engine);
		double y = uniform_dist(engine);

		double distant = std::sqrt(x*x + y*y);

		if (distant <= 1)
			++inside;		
	}

	double exact_pi = 4. * atan(1.);
	double numerical_pi = 4. * double(inside) / throw_times;
	std::cout << "PI = " << numerical_pi << "  " << "error% = " << std::abs((numerical_pi-exact_pi) / exact_pi) * 100  << std::endl;

	return 0;
}