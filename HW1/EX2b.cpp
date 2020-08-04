#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
  int total = 0;
  size_t i = 1000;

  while (i < 10000)
  {
    int firstTwoDigits = i / 100;
    int lastTwoDigits = i % 100;

    if (i == pow(firstTwoDigits, 2) + pow(lastTwoDigits, 2))
    {
      total += 1;
      cout << i << " == " << firstTwoDigits << "*" << firstTwoDigits << " + " << lastTwoDigits << "*" << lastTwoDigits << "\n";
    }

    i++;
  }

  cout << total << " numbers found";

  return 0;
}
