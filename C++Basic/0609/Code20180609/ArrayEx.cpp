#include <array>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    array<string, 5> coll ;
    coll[0] = "I";
    coll[1] = "love";
    coll[2] = "C++";
    coll[3] = "programming";
    coll[4] = "language";
    for (auto e : coll)
        cout << e << " ";
    cout << endl;
    return 0;
}
