#include <iostream>
#include "util.h"
int main()
{
	int numbers [] = { 3, 10, 40, 5, 12, 7, 22, 39 };

	std::cout << "The result:\n";
	std::cout << "Average = " << ::average(numbers, 8) << std::endl;
	std::cout << "Standard deviation = " << ::standard_deviation(numbers, 8) << std::endl;
}