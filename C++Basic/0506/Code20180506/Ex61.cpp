#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string stringToLower(string& s){
	for (char& c : s) c = tolower(c);
	return s;
}

int main()
{
	string s;
	cout << "Enter a string: ";
	getline(cin, s);
	cout << "The input string in a lowercase is: "
		<< stringToLower(s) << endl;
	return 0;
}
