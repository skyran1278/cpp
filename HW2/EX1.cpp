#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  double m;
  double s = 1;
  int n = 1;

  cout << "Please input M: ";
  cin >> m;

  cout << "1/1";

  while (s <= m)
  {
    n++;
    cout << "+1/" << n;
    s += 1.0 / n;
  }

  cout << "=" << s << "\n\n";
  cout << "The smallest integer N=" << n << "\n";

  return 0;
}
