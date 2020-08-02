#include <iostream>
#include <iterator>
using namespace std;
int main()
{
	const size_t arrSize = 7;
	int ia[arrSize];
	cout << "The first one: " << endl;
	for (size_t i = 0; i < arrSize; ++i) {
		ia[i] = i + 24;
		cout << ia[i] << ' ';
	}
	cout << endl;
	cout << "The second one: " << endl;
	int cnt = 0;
	for (auto& i: ia){ 
		i = cnt + 24;
		cnt++;
		cout << i << ' ';
	}
	cout << endl;
	cout << "The third one: " << endl;
	auto beg = begin(ia);
	auto last = end(ia);
	cnt = 0;
	while (beg != last) {
		*beg = cnt + 24;
		cout << *beg << ' ';
		++beg;
		++cnt;
	}
	return 0;
}