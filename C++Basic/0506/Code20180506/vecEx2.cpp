#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v{ 1, 2, 3 };
    for (decltype(v.size()) idx = 0; idx != v.size(); ++idx){
        v[idx] = v[idx] * v[idx];
        cout << v[idx] << " ";
    }
    cout << endl;
    return 0;
}
