// this is a WRONG code

#include <string>
using namespace std;

string& manip(const string& s)
{
  string ret = s;
  ret += " is terrible";
  return ret;
}

int main(){
  string s = "The program ";
  string sTerrible = manip(s);
  return 0;
}
