#include <iostream>
#include <cmath>

using namespace std;

double average(int *numbers, size_t size)
{
  int total = 0;
  for (size_t i = 0; i < size; i++)
  {
    total += numbers[i];
  }
  return double(total) / size;
}

double standardDev(int *numbers, size_t size)
{
  double total = 0;
  double ave = average(numbers, size);
  for (size_t i = 0; i < size; i++)
  {
    total += pow(numbers[i] - ave, 2);
  }
  return sqrt(total / size);
}

int main(int argc, char const *argv[])
{
  size_t size = 8;
  int numbers[size] = {3, 10, 40, 5, 12, 7, 22, 39};

  cout << "The result:\n";
  cout << "Average = " << average(numbers, size) << "\n";
  cout << "Standard derivation = " << standardDev(numbers, size) << "\n";

  return 0;
}
