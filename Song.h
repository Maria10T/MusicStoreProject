#include <iostream>
#include <string>
#include <vector>
#include "Product.h"
using namespace std;

#ifndef MUSIC_STORE_SONG_H
#define MUSIC_STORE_SONG_H

class Song: public Product{
private:
string author;
string title;
int length;
string type;
public:
    Song();

    Song(double price, const string &name, const string &author, const string &title, int length, const string &type);

    const string &getAuthor() const;

    void setAuthor(const string &author);

    const string &getTitle() const;

    void setTitle(const string &title);

    int getLength() const;

    void setLength(int length);

    const string &getType() const;

    void setType(const string &type);

    istream &input(istream &in) override;

    ostream &output(ostream &os) const override;

    void isCompatibleWith(Product *other) override;
};


#endif //MUSIC_STORE_SONG_H
