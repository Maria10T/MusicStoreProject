#include "Song.h"

Song::Song() {}

Song::Song(double price, const string &name, const string &author, const string &title, int length, const string &type)
        : Product(price, name), author(author), title(title), length(length), type(type) {}

const string &Song::getAuthor() const {
    return author;
}

void Song::setAuthor(const string &author) {
    Song::author = author;
}

const string &Song::getTitle() const {
    return title;
}

void Song::setTitle(const string &title) {
    Song::title = title;
}

int Song::getLength() const {
    return length;
}

void Song::setLength(int length) {
    Song::length = length;
}

const string &Song::getType() const {
    return type;
}

void Song::setType(const string &type) {
    Song::type = type;
}

istream &Song::input(istream &in) {
    Product::input(in);
    cout<<"author: "; in>>author;
    cout<<"title: ";in>>title;
    cout<<"length: ";in>>length;
    cout<<"Songs are of two types: Vinyl and CD"<<endl;
    cout<<"type: "; in>>type;
    return in;
}

ostream &Song::output(ostream &os) const {
    Product::output(os);
    os<<" author: "; os<<author;
    os<<" title: ";os<<title;
    os<<" length: ";os<<length;
    os<<" type: "; os<<type;
    return os;
}

void Song::isCompatibleWith(Product *other) {
    if (typeid(*other) == typeid(Song))
    {
        if (author == (*dynamic_cast<Song*>(other)).author)
        {
            cout << "\nSong (" << title << ") is compatible with Song (" << (*dynamic_cast<Song*>(other)).getTitle() << ")\n";
        }
    }
}
