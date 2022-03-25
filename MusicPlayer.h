#include <iostream>
#include <string>
#include <vector>
#include "Product.h"
#include "Song.h"

using namespace std;

#ifndef MUSIC_STORE_MUSICPLAYER_H
#define MUSIC_STORE_MUSICPLAYER_H

class MusicPlayer: public Product {
private:
    string title;
    string singer;
    string type;
public:
    MusicPlayer();

    MusicPlayer(double price, const string &name, const string &title, const string &singer, const string &type);

    const string &getTitle() const;

    void setTitle(const string &title);

    const string &getSinger() const;

    void setSinger(const string &singer);

    const string &getType() const;

    void setType(const string &type);

    istream &input(istream &in) override;

    ostream &output(ostream &os) const override;

    void isCompatibleWith(Product *other) override;
};


#endif //MUSIC_STORE_MUSICPLAYER_H
