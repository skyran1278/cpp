#ifndef UTIL_H
#define UTIL_H
#include <cstddef>
#include <cmath>
#include <vector>
using VectorInt = std::vector<int>;

double average(const VectorInt& numbers)
{
	double ave = 0;

	for(const auto& e : numbers)
	{
		ave += e;
	}

	ave /= static_cast<double>(numbers.size());

	return ave;
}

double standard_deviation(const VectorInt& numbers)
{
	double sigma = 0;
	double ave = average(numbers);

	for (const auto& e : numbers)
	{
		double tmp = e - ave;
		sigma += tmp * tmp;
	}

	sigma /= static_cast<double>(numbers.size());

	sigma = std::sqrt(sigma);

	return sigma;

}

#endif // UTIL_H
