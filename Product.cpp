#include "Product.h"


Product::Product() {}

Product::Product(double price, const string &name) : price(price), name(name) {}

Product::~Product() {}

double Product::getPrice() const {
    return price;
}

void Product::setPrice(double price) {
    Product::price = price;
}

const string &Product::getName() const {
    return name;
}

void Product::setName(const string &name) {
    Product::name = name;
}

istream &Product::input(istream &in) {
    cout<<"price: ";in>>price;
    cout<<"name: ";in>>name;
    return in;
}

istream &operator>>(istream &in, Product &product){
    return product.input(in);
}

ostream &Product::output(ostream &os) const {
    os<<"price: "<<price;
    os<<" name: "<<name;
    return os;
}

ostream &operator<<(ostream &os, const Product &product){
    return product.output(os);
}

void Product::isCompatibleWith(Product *other) {
    cout<<0;
}


