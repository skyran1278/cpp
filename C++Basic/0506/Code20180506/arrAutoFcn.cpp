#include <iostream>
using namespace std;

void arrAutoTest(int ia[]) {
	for (auto i : ia)
		cout << i << " ";
}

int main() {
	const size_t array_size = 5;
	int ia[array_size] = { 0, 1, 2, 3, 4 };
	arrAutoTest(ia);
	return 0;
}