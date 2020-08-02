#ifndef UTIL_H
#define UTIL_H
#include <cstddef>
#include <cmath>

double average(int numbers [], std::size_t array_size)
{
	double ave = 0;

	for (std::size_t index = 0; index != array_size; ++index)
	{
		ave += *(numbers + index);
	}

	ave /= static_cast<double>(array_size);

	return ave;
}

double standard_deviation(int numbers [], std::size_t array_size)
{
	double sigma = 0;
	double ave = average(numbers, array_size);

	for (std::size_t index = 0; index != array_size; ++index)
	{
		double tmp = numbers[index] - ave;
		sigma += tmp * tmp;
	}

	sigma /= static_cast<double>(array_size);

	sigma = std::sqrt(sigma);

	return sigma;

}

#endif // UTIL_H
