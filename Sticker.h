#include <iostream>
#include <string>
#include <vector>
#include "Product.h"
#include "Song.h"
#include "MusicPlayer.h"

using namespace std;

#ifndef MUSIC_STORE_STICKER_H
#define MUSIC_STORE_STICKER_H

class Sticker: public Product {
private:
    string text;
public:
    Sticker();

    Sticker(double price, const string &name, const string &text);

    const string &getText() const;

    void setText(const string &text);

    istream &input(istream &in) override;

    ostream &output(ostream &os) const override;

    void isCompatibleWith(Product *other) override;
};


#endif //MUSIC_STORE_STICKER_H
