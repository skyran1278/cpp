#include <sstream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main(){
	string A;
	getline(cin, A); // A=[1.1, 3.0, 6.5; 7.8, 4.5, 2.2; 3.4, 5.6, 8.9]
	vector<string> vs;
	string s;
	for (auto c : A) {
		if (c == '[') {
			s.clear();
		}
		else if (c == ',')
			s.push_back(' ');
		else if (c == ';' || c == ']'){
			vs.push_back(s);
			s.clear();
		}
		else
			s.push_back(c);
	}
	for (auto e : vs)
		cout << e << endl;
	return 0;
}
