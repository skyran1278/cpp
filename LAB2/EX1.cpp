#include <iostream>
#include <cmath>
#include "triangle.h"

using namespace std;

int main(int argc, char const *argv[])
{
  Triangle triangle;

  cout << "Please input the x & y coordinates of the 1st vertex:\n";
  cin >> triangle.A.x >> triangle.A.y;

  cout << "Please input the x & y coordinates of the 2nd vertex:\n";
  cin >> triangle.B.x >> triangle.B.y;

  cout << "Please input the x & y coordinates of the 3nd vertex:\n";
  cin >> triangle.C.x >> triangle.C.y;

  double a = pow(triangle.C.x - triangle.B.x, 2) + pow(triangle.C.y - triangle.B.y, 2);
  double b = pow(triangle.A.x - triangle.C.x, 2) + pow(triangle.A.y - triangle.C.y, 2);
  double c = pow(triangle.A.x - triangle.B.x, 2) + pow(triangle.A.y - triangle.B.y, 2);

  if (a + b == c)
  {
    cout << "This is a right triangle!\n";
    cout << "The right angle is at the Vertex 3";
  }
  else if (a + c == b)
  {
    cout << "This is a right triangle!\n";
    cout << "The right angle is at the Vertex 2";
  }
  else if (b + c == a)
  {
    cout << "This is a right triangle!\n";
    cout << "The right angle is at the Vertex 1";
  }
  else
  {
    cout << "This is not a right triangle!";
  }
}
