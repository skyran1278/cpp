#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int total = 0;
  int number;

  cout << "Enter a squence of numbers to be summed: ";

  while (true)
  {
    cin >> number;

    if (number >= 0)
    {
      total += number;
    }
    else
    {
      break;
    }
  }

  cout << "sum is: " << total;

  return 0;
}
