#include <list>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(){
	list<string> slist;
	// equivalent to calling slist.push_front("Hello");
	slist.insert(slist.begin(), "Hello!");
	// equivalent to calling slist.push_back("world");
	slist.insert(slist.end(), "world");
	// no push_front on vector but we can insert before begin()
	// warning: inserting anywhere but at the end of a vector might be slow
	vector<string> svec;
	svec.insert(svec.begin(), "Hello!");
	vector<string> v = { "quasi", "simba", "frollo", "scar" };
	// insert the last two elements of v at the beginning of slist
	slist.insert(slist.begin(), v.end() - 2, v.end());
	slist.insert(slist.end(), { "these", "words", "will",
		"go", "at", "the", "end" });
	string s1 = "I love C++";
	s1.insert(s1.size(), 3, '!'); // s == ¡§I love C++!!!

	string s2("C++ Primer");
	s2.insert(s2.size(), " 4th Ed."); // s == "C++ Primer 4th Ed."
	cout << s1 << " " << s2 << endl;
	return 0;
}