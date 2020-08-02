#include "Quote.h"
#include "Bulk_Quote.h"
#include <iostream>

using namespace std;

int main(){
    Quote q("032-171-4113", 42.38);
	cout << "Net price for three copies of " << q.isbn() << " is: " << q.net_price(3) << endl;
    Bulk_quote bq1("032-171-4113", 42.38, 10, 0.2);
	cout << "Net price for three copies of " << bq1.isbn() << " is: " << bq1.net_price(3) << endl;
    Bulk_quote bq2("032-171-4113", 42.38, 10, 0.2);
	cout << "Net price for 30 copies of " << bq2.isbn() << " is: " << bq2.net_price(30) << endl;
    return 0;
}