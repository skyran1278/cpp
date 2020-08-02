#include <iostream>
using namespace std;

int main() {
	const size_t array_size = 5;
	int ia[array_size] = { 0, 1, 2, 3, 4 };
	for (auto& i : ia)
		i += 2;
	for (auto i : ia)
		cout << i << " ";
	cout << endl;
	return 0;
}
