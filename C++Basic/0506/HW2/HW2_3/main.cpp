#include <iostream>
#include <fstream>
#include <string>
#include "Sales_item.h"
int main()
{
	std::cout << "Enter the file name: ";
	std::string file_name;
	std::cin >> file_name;

	std::ifstream inf(file_name.c_str());

	

	if (!inf)
	{
		std::cout << "Complain: I cannot find the file\n";
	}
	else
	{
		std::cout << "Contents of " << file_name << ":\n";

		Sales_item item, total_item;

		inf >> total_item;

		while (inf >> item)
		{
			if (item.isbn() == total_item.isbn())
			{
				total_item += item;
			}
			else
			{
				std::cout << total_item << std::endl;
				total_item = item;
			}
		}

		std::cout << total_item << std::endl;

	}




	return 0;
}