#include <list>
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    list<char> coll;    // list container for chars

    for (auto c = 'a'; c <= 'z'; ++c)
        coll.push_back(c);

    for (auto& e : coll) {
        if (e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u')
            e = toupper(e);
    }

    for (auto e : coll)
        cout << e << " ";

    cout << endl;
    return 0;
}
