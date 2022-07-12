#include <cmath>
#include <iostream>
#include <string>

#include "app.h"
#include "lib1.h"

int print_ok() {
  std::cout << "OK" << std::endl;
  return 0;
}

int main(int argc, char *argv[]) {
  std::string input;

  std::cout << "Please input sqrt number: ";
  std::cin >> input;

  if (input == "") {
    std::string initial = "10";
    input = initial;
  }

  print_ok();
  lib1 l1;
  l1.print_is_initialized();

  // convert input to double
  const double inputValue = std::stod(input);

  // calculate square root
  const double outputValue = sqrt(inputValue);
  std::cout << "The square root of " << inputValue << " is " << outputValue
            << std::endl;
  return 0;
}