#include <iostream>
#include <string>
#include <vector>
#include "Product.h"
#include "Song.h"
#include "MusicPlayer.h"
#include "Sticker.h"
#include "ShoppingCart.h"

using namespace std;

int main() {
    Song *song1 = new Song(20.5, "CD Christmas Song", "Ed Sheeran and Elton John", "Merry Christmas", 150, "CD");
    Song *song2 = new Song(22.5, "Vinyl Christmas Song", "Elvis Presley", "Blue Christmas", 160, "Vinyl");
    MusicPlayer *musicPlayer1 = new MusicPlayer(30.5, "Christmas music player", "Blue Christmas", "Elvis Presley","VinylPlayer");
    MusicPlayer *musicPlayer2 = new MusicPlayer(35.5, "Christmas music player", "White Christmas", "Elvis Presley","VinylPlayer");
    Sticker *sticker1 = new Sticker(10, "Christmas sticker","Merry Christmas!:)");

    vector<Product *> v = {song1, song2, musicPlayer1, musicPlayer2, sticker1};
    ShoppingCart cart(v);
    cart.run();
    delete song1;
    delete song2;
    delete musicPlayer1;
    delete musicPlayer2;
    delete sticker1;
    return 0;
}