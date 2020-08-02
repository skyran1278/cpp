#ifndef BULKQUOTE_H
#define BULKQUOTE_H 
#include "Quote.h"
#include <string>

class Bulk_quote : public Quote { // Bulk_quote inherits from Quote
public:
	Bulk_quote() = default;
	Bulk_quote(const std::string& book, double p, std::size_t qty, double disc) :
		Quote(book, p), min_qty(qty), discount(disc) { }
    // overrides the base version in order to implement the bulk purchase discount policy
    double net_price(std::size_t) const override;
private:
    std::size_t min_qty = 0; // minimum purchase for the discount to apply
    double discount = 0.0; // fractional discount to apply
};
#endif
