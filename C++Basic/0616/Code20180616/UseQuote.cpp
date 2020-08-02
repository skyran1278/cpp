#include "Quote.h"
#include <iostream>

using namespace std;

int main(){
    Quote q("032-171-4113", 42.38); // C++ Primer
    cout << "Net price for three copies of " << q.isbn() << " is: " << q.net_price(3) << endl;
    return 0;
}