#include <iostream>
#include <iterator>
using namespace std;

int sum(int* beg, int* last){
	int summation = 0;
	while (beg != last){
		summation += *beg++;
	}
	return summation;
}

int main()
{
	int ia[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int ib[3] = { 1, 3, 8 };
	cout << "The sum of ia is: " << sum(begin(ia), end(ia)) << endl;
	cout << "The sum of ib is: " << sum(begin(ib), end(ib)) << endl;
	return 0;
}
