#include <iostream>
#include <vector>
#include <string>
int main()
{
	std::cout << "Please inpout M : ";
	double m = 0;
	std::cin >> m;

	int n = 1;
	double sum = 0;

	std::vector<std::string> print_results;

	while(sum < m)
	{
		sum += 1. / n;
		print_results.push_back("1/" + std::to_string(n));
		print_results.push_back("+");

		++n;
	}

	print_results.pop_back();
	print_results.push_back("=" + std::to_string(sum));

	for (const auto& e : print_results)
	{
		std::cout << e;
	}
	std::cout << std::endl;
	std::cout << "The smallest integer N = " << n-1 << std::endl;

	return 0;
}