#include <iostream>
#include <string>
#include "Fraction.h"

// https://stackoverflow.com/questions/7757278/what-does-and-mean-in-c-for-cout-cin
int main(int argc, char const *argv[])
{
  std::string input = "";
  std::cout << "<1>Enter some fractions terminated by '#'\n";
  while (std::cin >> input && input != "#")
  {
    /* code */
  }

  return 0;
}
