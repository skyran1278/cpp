#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> coll;    // vector container for ints

    // insert elements with the values 2 to 7
    for (auto i = 2; i < 8; ++i)
        coll.push_back(i);

    // output all elements followed by a space
    for (auto e : coll)
        cout << e << ' ';
    cout << endl;
    return 0;
}
