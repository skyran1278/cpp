#include <cmath>
#include <iostream>
#include <string>

#include "app.h"
#include "fmt/color.h"
#include "fmt/format.h"
#include "fmt/xchar.h"
#include "lib1.h"

int print_ok() {
  std::cout << "OK" << std::endl;
  return 0;
}

int main(int argc, char *argv[]) {
  char charStr[] = "Hello, World!中🐍";
  wchar_t charWStr[] = L"Hello, World!中🐍";

  std::string str = "Hello, World!中🐍";    // depends on the compiler: utf-8 or
                                           // big5 (local pages)
  std::wstring wStr = L"Hello, World!中🐍"; // always utf-16

  // https://stackoverflow.com/questions/29218872/n-format-specifier-program-giving-different-outputs-on-different-compilers-why
  // int position = 0;
  // printf("%ls%n\n", charWStr, &position);

  long charStrLen = strlen(charStr);
  long charWStrLen = wcslen(charWStr);

  long strLen = str.length();
  long wStrLen = wStr.length();

  fmt::print("{0} {1} {2} {3}\n", charStrLen, charWStrLen, strLen, wStrLen);

  fmt::print("{0:s}\n", fmt::format(fmt::fg(fmt::color::red), charStr));
  std::cout << charStr << "\n";
  // fmt::print(L"{0}\n", charWStr);
  // std::wcout << charWStr << "\n";

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