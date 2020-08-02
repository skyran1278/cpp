#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string line;
    cout << "Enter a line of strings: ";
    getline(cin, line);
    for (auto& c : line)
        c = tolower(c);
    cout << "The line in lowercase is: " << line << endl;
    return 0;
}
