#include <cmath>
#include <iostream>
#include <string>

#include "app.h"
#include "fmt/format.h"
#include "lib1.h"

int print_ok() {
  std::cout << "OK" << std::endl;
  return 0;
}

int main(int argc, char *argv[]) {
  char charStr[] = "Hello, World!中🐍";
  wchar_t charWStr[] = L"Hello, World!中🐍";

  std::string str = "Hello, World!中🐍";    // depends on the compiler: utf-8 or
                                           // big5 (localpages)
  std::wstring wStr = L"Hello, World!中🐍"; // always utf-16

  // https://stackoverflow.com/questions/29218872/n-format-specifier-program-giving-different-outputs-on-different-compilers-why
  // int position = 0;
  // printf("%ls%n\n", charWStr, &position);

  fmt::print("{0}\n", charStr);

  long charStrLen = strlen(charStr);
  long charWStrLen = wcslen(charWStr);

  long strLen = str.length();
  long wStrLen = wStr.length();

  std::cout << charStr;
  // std::cout << charWStr;

  std::string input = "";

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