#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string word;
	vector<string> text;
	while (cin >> word) 
		text.push_back(word);
	cout << "The words longer than 4 characters are: ";
	for (auto s : text) 
		if (s.size() > 4)
			cout << s << " ";	
	cout << endl;
	return 0;
}
