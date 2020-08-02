#include <list>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(){
	vector<string> v = { "quasi", "simba", "frollo", "scar" };
	// insert the last two elements of v at the beginning of slist
	list<string> slist;
	slist.insert(slist.begin(), v.end() - 2, v.end());
	slist.insert(slist.end(), { "these", "words", "will",
		"go", "at", "the", "end" });
	for (auto e : slist)
		cout << e << ' ';
	cout << endl;
	return 0;
}