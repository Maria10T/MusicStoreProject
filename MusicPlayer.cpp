#include "MusicPlayer.h"

MusicPlayer::MusicPlayer() {}

MusicPlayer::MusicPlayer(double price, const string &name, const string &title, const string &singer,
                         const string &type) : Product(price, name), title(title), singer(singer), type(type) {}

const string &MusicPlayer::getTitle() const {
    return title;
}

void MusicPlayer::setTitle(const string &title) {
    MusicPlayer::title = title;
}

const string &MusicPlayer::getSinger() const {
    return singer;
}

void MusicPlayer::setSinger(const string &singer) {
    MusicPlayer::singer = singer;
}

const string &MusicPlayer::getType() const {
    return type;
}

void MusicPlayer::setType(const string &type) {
    MusicPlayer::type = type;
}

istream &MusicPlayer::input(istream &in) {
    Product::input(in);
    cout<<"title: "; in>>title;
    cout<<"singer: "; in>>singer;
    cout<<"Music players are of two types: VinylPlayer and CdPlayer"<<endl;
    cout<<"type: "; in>>type;
    return in;
}

ostream &MusicPlayer::output(ostream &os) const {
    Product::output(os);
    os<<" title: "; os<<title;
    os<<" singer: "; os<<singer;
    os<<" type: "; os<<type;
    return os;
}

void MusicPlayer::isCompatibleWith(Product *other) {
    if (typeid(*other) == typeid(Song)) {
        if (type == "VinylPlayer" && (*dynamic_cast<Song *>(other)).getType() == "Vinyl") {
            cout << "\nVinylPlayer (" << title << ") is compatible with Vinyl ("
                 << (*dynamic_cast<Song *>(other)).getTitle() << ")\n";
        }
    } else if (typeid(*other) == typeid(Song)) {
        if (type == "CdPlayer" && (*dynamic_cast<Song *>(other)).getType() == "CD") {
            cout << "\nCDPlayer (" << title << ") is compatible with CD ("
                 << (*dynamic_cast<Song *>(other)).getTitle() << ")\n";
        }
    }
}
