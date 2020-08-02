#include <iostream>
#include <string>
using namespace std;

// returns the index of the first occurrence of c in s
// the reference parameter occurs counts how often c occurs
string::size_type find_char(const string &s, char c,
  string::size_type &occurs)
{
  auto ret = s.size(); // position of the first occurrence, if any
  occurs = 0; // set the occurrence count parameter
  for (decltype(ret) i = 0; i != s.size(); ++i) {
    if (s[i] == c) {
      if (ret == s.size())
        ret = i; // remember the first occurrence of c
      ++occurs; // increment the occurrence count
    }
  }
  return ret; // count is returned implicitly in occurs
}

int main() {
  string s = "Hello world";
  string::size_type cnt;
  auto index = find_char(s, 'o', cnt);
  cout << "Character o first occurs at the index of " << index << " in " << s << endl;
  cout << "Character o occurs " << cnt << " times" << " in " << s << endl;
  return 0;
}


