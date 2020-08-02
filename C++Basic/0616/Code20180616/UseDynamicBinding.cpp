#include "Quote.h"
#include "Bulk_Quote.h"
#include <iostream>

using namespace std;

// calculate and print the price for the given number of copies, applying any discounts
double print_total(ostream& os, const Quote& item, size_t n)
{
    // depending on the type of the object bound to the item parameter
    // calls either Quote::net_price or Bulk_quote::net_price
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() // calls Quote::isbn
        << " # sold: " << n << " total due: " << ret << endl;
    return ret;
}

int main(){
    // basic has type Quote; bulk has type Bulk_quote
    Quote basic("032-171-4113", 42.38); // C++ Primer ISBN-10
    Bulk_quote bulk("032-171-4113", 42.38, 10, 0.2); // C++ Primer ISBN-10
    Quote *pBulk = new Bulk_quote("978-0321714114", 42.38, 10, 0.2); // C++ Primer ISBN-13
    print_total(cout, basic, 20); // calls Quote version of net_price
    print_total(cout, bulk, 20); // calls Bulk_quote version of net_price
    print_total(cout, *pBulk, 20); // calls Bulk_quote version of net_price
    delete pBulk;
    return 0;
}