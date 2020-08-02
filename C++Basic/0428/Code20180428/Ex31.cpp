#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	unsigned lineNo = 0;
	while (getline(cin, s))
		cout << "(Line " << ++lineNo <<") "  << s << endl;
	return 0;
}
