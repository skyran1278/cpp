#include <iostream>
#include "util.h"
#include <vector>
int main()
{
	std::cout << "Input positive integers:\n";
	std::vector<int> numbers;
	int n;
	while (std::cin >> n && n > 0)
	{
		numbers.push_back(n);
	}

	std::cout << "The result:\n";
	std::cout << "Average = " << ::average(numbers) << std::endl;
	std::cout << "Standard deviation = " << ::standard_deviation(numbers) << std::endl;
}