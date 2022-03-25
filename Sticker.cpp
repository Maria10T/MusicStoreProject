#include "Sticker.h"

Sticker::Sticker() {}

Sticker::Sticker(double price, const string &name, const string &text) : Product(price, name), text(text) {}

const string &Sticker::getText() const {
    return text;
}

void Sticker::setText(const string &text) {
    Sticker::text = text;
}

istream &Sticker::input(istream &in) {
    Product::input(in);
    cout<<"text: ";in>>text;
    return in;
}

ostream &Sticker::output(ostream &os) const {
    Product::output(os);
    os<<" text: ";os<<text;
    return os;
}

void Sticker::isCompatibleWith(Product *other) {
    if (typeid(*other) == typeid(Song))
    {
        if (text.find((*dynamic_cast<Song*>(other)).getName()) != std::string::npos ||
            text.find((*dynamic_cast<Song*>(other)).getAuthor()) != std::string::npos ||
            text.find((*dynamic_cast<Song*>(other)).getTitle()) != std::string::npos ||
            text.find((*dynamic_cast<Song*>(other)).getType()) != std::string::npos)
        {
            cout << "\nSticker (" << name << ") is compatible with Song (" << (*dynamic_cast<Song*>(other)).getTitle() << ")\n";
        }
    }

    else if (typeid(*other) == typeid(MusicPlayer))
    {
        if (text.find((*dynamic_cast<MusicPlayer*>(other)).getName()) != std::string::npos ||
            text.find((*dynamic_cast<MusicPlayer*>(other)).getTitle()) != std::string::npos ||
            text.find((*dynamic_cast<MusicPlayer*>(other)).getSinger()) != std::string::npos ||
            text.find((*dynamic_cast<MusicPlayer*>(other)).getType()) != std::string::npos)

        {

            cout << "\nSticker (" << name << ") is compatible with MusicPlayer (" << (*dynamic_cast<MusicPlayer*>(other)).getTitle() << ")\n";
        }
    }
}
