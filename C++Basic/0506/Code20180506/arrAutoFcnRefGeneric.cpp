#include <iostream>
using namespace std;

template <std::size_t arr_size>
void arrAutoTest(int(&ia)[arr_size]) {
    for (auto i : ia)
        cout << i << " ";
}

int main() {
    const size_t array_size1 = 7;
    int ia[array_size1] = { 0, 1, 2, 3, 4, 5, 6 };
    arrAutoTest(ia);
    cout << endl;
    const size_t array_size2 = 4;
    int ib[array_size2] = { 0, 1, 2, 3 };
    arrAutoTest(ib);
    return 0;
}