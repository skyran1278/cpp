#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

double average(vector<int> numbers)
{
  int total = 0;
  for (auto &&number : numbers)
  {
    total += number;
  }

  return double(total) / numbers.size();
}

double standardDev(vector<int> numbers)
{
  double total = 0;
  double ave = average(numbers);
  for (auto &&number : numbers)
  {
    total += pow(number - ave, 2);
  }

  return sqrt(total / numbers.size());
}

int main(int argc, char const *argv[])
{
  size_t size = 8;
  vector<int> numbers = {3, 10, 40, 5, 12, 7, 22, 39};

  cout << "The result:\n";
  cout << "Average = " << average(numbers) << "\n";
  cout << "Standard derivation = " << standardDev(numbers) << "\n";

  return 0;
}
