#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec(10, 1);
	cout << "The original elements in the vector container are: "
		<< " ";
	for (auto i : ivec)
		cout << i << " ";
	cout << endl;
	cout << "The modified elements in the vector container are: "
		<< " ";
	for (decltype(ivec.size()) ix = 0; ix != ivec.size(); ++ix) {
		if (ix % 2 == 0) ivec[ix] = 0;
		cout << ivec[ix] << " "; // print the element
	}
	cout << endl;
	return 0;
}
