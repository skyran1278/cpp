#include <list>
#include <iostream>
using namespace std;

int main()
{
	list<char> coll;    // list container for chars

	for (auto c = 'a'; c <= 'z'; ++c)
		coll.push_back(c);

	for (auto e : coll)
		cout << e << " ";

	cout << endl;
	return 0;
}
