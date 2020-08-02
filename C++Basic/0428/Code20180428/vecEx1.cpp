#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v{ 1, 2, 3 };
	for (auto &i : v) // for each element in v (note: i is a reference)
		i *= i; // square the element value
	for (auto i : v) // for each element in v
		cout << i << " "; // print the element
	cout << endl;
	return 0;
}
