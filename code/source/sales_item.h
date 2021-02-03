//
// Created by Devin on 2021/2/2.
//

#ifndef SALES_ITEM_H
#define SALES_ITEM_H

#include <iostream>
#include <string>

class sales_item {
public:
    sales_item(const std::string &book) : isbn(book), units_sold(0), revenue(0.0) {}

    sales_item(std::istream &is) { is >> *this; }

    friend std::istream &operator>>(std::istream &, sales_item &);

    friend std::ostream &operator<<(std::ostream &, const sales_item &);

public:
    sales_item &operator+=(const sales_item &);

public:
    double avg_price() const;

    bool same_isbn(const sales_item &rhs) const {
        return isbn == rhs.isbn;
    }

    sales_item() : units_sold(0), revenue(0.0) {}

public:
    std::string isbn;
    unsigned units_sold;
    double revenue;
};

using std::istream;
using std::ostream;

sales_item operator+(const sales_item &, const sales_item &);

inline bool operator==(const sales_item &lhs, const sales_item &rhs) {
    return lhs.units_sold == rhs.units_sold && lhs.revenue == rhs.revenue && lhs.same_isbn(rhs);
}

inline bool operator!=(const sales_item &lhs, const sales_item &rhs) {
    return !(lhs == rhs);
}

inline sales_item &sales_item::operator+=(const sales_item &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

inline sales_item operator+(const sales_item &lhs, const sales_item &rhs) {
    sales_item ret(lhs);
    ret += rhs;
    return ret;
}

inline istream &operator>>(istream &in, sales_item &s) {
    double price;
    in >> s.isbn >> s.units_sold >> price;
    if (in)
        s.revenue = s.units_sold * price;
    else
        s = sales_item();
    return in;
}

inline ostream &operator<<(ostream &out, const sales_item &s) {
    out << s.isbn << "\t" << s.units_sold << "\t" << s.revenue << "\t" << s.avg_price();
    return out;
}

inline double sales_item::avg_price() const {
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
}

#endif
