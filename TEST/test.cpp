#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  double *var1 = nullptr;
  double var2 = 1;
  double var3 = 2;

  cout << &var2 << "\n";

  var2 = 10;
  cout << &var2 << "\n";

  var1 = &var3;

  *var1 = 11;

  return 0;
}
