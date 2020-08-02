#include <iostream>
using namespace std;

int sum(int arr[], size_t num){
	int summation = 0;
	for (size_t i = 0; i < num; ++i) summation += arr[i];
	return summation;
}

int main()
{
	int ia[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int ib[3] = { 1, 3, 8 };
	cout << "The sum of ia is: " << sum(ia, 10) << endl;
	cout << "The sum of ib is: " << sum(ib, 3) << endl;
	return 0;
}
