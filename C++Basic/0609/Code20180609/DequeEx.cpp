#include <deque>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    deque<string> coll;    // deque container for strings

    // insert elements at the front
    coll.push_front("programming");
    coll.push_front("C++");
    coll.push_front("I love");

    // insert an element at the back
    coll.push_back("language");

    // output all elements followed by a space
    for (auto e : coll)
        cout << e << ' ';
    cout << endl;
    return 0;
}
