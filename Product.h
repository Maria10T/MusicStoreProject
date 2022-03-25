#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef MUSIC_STORE_PRODUCT_H
#define MUSIC_STORE_PRODUCT_H

class Product {
protected:
    double price;
    string name;
public:
    Product();

    Product(double price, const string &name);

    virtual ~Product();

    double getPrice() const;

    void setPrice(double price);

    const string &getName() const;

    void setName(const string &name);

    virtual istream &input(istream &in);
    friend istream &operator>>(istream &in, Product &product);

    virtual ostream &output(ostream &os) const;
    friend ostream &operator<<(ostream &os, const Product &product);

    virtual void isCompatibleWith(Product* other);

};


#endif //MUSIC_STORE_PRODUCT_H
