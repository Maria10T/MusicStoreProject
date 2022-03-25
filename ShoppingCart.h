#include <iostream>
#include <string>
#include <vector>
#include "Product.h"
#include "Song.h"
#include "MusicPlayer.h"
#include "Sticker.h"

using namespace std;

#ifndef MUSIC_STORE_SHOPPINGCART_H
#define MUSIC_STORE_SHOPPINGCART_H

class ShoppingCart {
private:
    vector<Product *> products;
public:
    ShoppingCart(const vector<Product *> &_products);

    virtual ~ShoppingCart();

    void storeProducts();

    void addProduct();

    void addProduct(Product *p);

    void showCart();

    void compatibleProducts();

    void showMenu();

    void run();

};


#endif //MUSIC_STORE_SHOPPINGCART_H
