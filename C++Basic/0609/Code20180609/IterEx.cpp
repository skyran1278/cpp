#include <list>
#include <string>
#include <iostream>
using namespace std;

int main(){
    list<string> a = { "SW Chang", "CC Chou", "CS Chen" };
    cout << "The first author is: " << *(a.begin()) << endl;
    cout << "The last author is: " << *(a.rbegin()) << endl;
    cout << "The authors in order are: ";
    for (auto it = a.cbegin(); it != a.cend(); ++it)
        cout << *it << " ";
    cout << endl;
    cout << "The authors in reverse order are: ";
    for (auto it = a.crbegin(); it != a.crend(); ++it)
        cout << *it << " ";
    cout << endl;
    return 0;
}