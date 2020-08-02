#include <list>
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    list<char> coll;    // list container for chars

    for (auto c = 'a'; c <= 'z'; ++c)
        coll.push_back(c);
	/*
    for (auto& e : coll) {
        if (e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u')
            e = toupper(e);
    }
	*/
	for (auto iter = coll.begin(); iter != coll.end(); ++iter) {
		if (*iter == 'a' || *iter == 'e' || *iter == 'i' ||
			*iter == 'o' || *iter == 'u'){
			*iter = toupper(*iter);
		}
	}
	for (auto e : coll)
		cout << e << " ";

    cout << endl;
    return 0;
}
