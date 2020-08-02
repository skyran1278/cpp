#include <array>
#include <iostream>
using namespace std;

int main()
{
	array<int, 6> coll = { 2, 3, 4, 5, 6, 7 };
	for (auto e : coll)
		cout << e << " ";
	cout << endl;
	return 0;
}
