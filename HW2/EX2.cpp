#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
  const double PI = 3.14159265;
  int throwNumber;
  int inCircleNumber = 0;
  double monteCarloMethodPI;

  cout << "Use a const double to prescribe the value PI=" << PI << "\n";
  cout << "Enter the number of throw: ";
  cin >> throwNumber;

  srand(time(0));
  for (size_t i = 0; i < throwNumber; i++)
  {
    if (pow(double(rand()) / RAND_MAX, 2) + pow(double(rand()) / RAND_MAX, 2) <= 1)
    {
      inCircleNumber++;
    }
  }

  monteCarloMethodPI = double(inCircleNumber) / throwNumber * 4.0;

  cout << "PI=" << monteCarloMethodPI << "\t";
  cout << "error%=" << abs(monteCarloMethodPI - PI) / PI * 100 << "\n";

  return 0;
}
