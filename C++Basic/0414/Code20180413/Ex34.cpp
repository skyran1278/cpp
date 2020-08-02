#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec(10, 1);
	cout << "The original elements in the vector container are: "
		<< " ";
	for (auto iter = ivec.cbegin(); iter != ivec.cend(); ++iter)
		cout << *iter << " ";
	cout << endl;
	cout << "The modified elements in the vector container are: "
		<< " ";
	auto ix = 0;
	for (auto iter = ivec.begin(); iter != ivec.end(); ++iter, ++ix) {
		if (ix % 2 == 0) *iter = 0;
		cout << *iter << " "; // print the element
	}
	cout << endl;
	return 0;
}
