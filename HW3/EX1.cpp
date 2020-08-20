#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main(int argc, char const *argv[])
{
  std::ifstream file("HW3/input.txt");
  std::string line;
  std::vector<std::string> content;

  while (std::getline(file, line))
  {
    content.push_back(line);
  }

  std::cout << "The first paragraph of the input file is"
            << "\n\n";

  for (std::vector<std::string>::iterator it = content.begin(); it != content.end(); it++)
  {
    if (*it == "")
    {
      break;
    }
    std::cout << *it << "\n";
  }

  return 0;
}
