#include <iostream>
using namespace std;

int main(){
    const size_t array_size = 10;
    int ia[array_size];
	cout << "The contents are: ";
	for (size_t ix = 0; ix < array_size; ++ix) {
		ia[ix] = ix;
		cout << ia[ix] << ' ';
	}
	cout << endl;
    return 0;
}
