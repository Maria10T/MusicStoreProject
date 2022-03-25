#include "ShoppingCart.h"

Product *dynamicAllocation(Product *product){
    Song *asSong= dynamic_cast<Song*>(product);
    MusicPlayer *asMusicPlayer= dynamic_cast<MusicPlayer*>(product);
    Sticker *asSticker= dynamic_cast<Sticker*>(product);

    if (asSong!=NULL){
        return new Song (* asSong);}
    else if (asMusicPlayer!=NULL) {
        return new MusicPlayer(* asMusicPlayer);}
    else if(asSticker!=NULL){
        return new Sticker (* asSticker);}
    return NULL;}

Product *createProduct(){
    int type;
    cout << "0=Song, 1=MusicPlayer, 2=Sticker"<<endl;
    cout<<"Choose product: ";
    cin >> type;
    Product *newproduct;
    if (type == 0) {
        newproduct = new Song;
    } else if (type == 1) {
        newproduct = new MusicPlayer;
    } else if (type == 2) {
        newproduct = new Sticker;
    }
    cin>> *newproduct;
    return newproduct;}

ShoppingCart::ShoppingCart(const vector<Product *> &_products) {
    for (Product *product: _products) {
        products.push_back(dynamicAllocation(product));
    }
}

ShoppingCart::~ShoppingCart() {
    for (auto *product: products) {
        delete product;
    }
}

void ShoppingCart::storeProducts() {
    int n;
    cout << "n = ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "Enter product number " << i + 1 <<":"<< endl;
        products.push_back(createProduct());
    }

}

void ShoppingCart::addProduct() {
    products.push_back(createProduct());
}

void ShoppingCart::addProduct(Product *p) {
    products.push_back(dynamicAllocation(p));
}

void ShoppingCart::showCart() {
    for(auto* product:products){
        cout<<*product<<endl;
    }
}

void ShoppingCart::compatibleProducts() {
    for (int i = 0; i < products.size(); i++) {
        for (int j = 0; j < products.size(); j++) {
            if (products[i] != products[j]) {
                if (typeid(*products[i]) != typeid(Song) || typeid(*products[j]) != typeid(Song) || j > i) {
                    (*products[i]).isCompatibleWith(products[j]);
                }
            }
        }
    }
}

void ShoppingCart::showMenu() {
    cout<<endl;
    cout << "1. Read and store n products" << endl;
    cout << "2. Add new product" << endl;
    cout << "3. Display products " << endl;
    cout << "4. Display compatible products" << endl;
    cout << "5. Exit" << endl;
}

void ShoppingCart::run() {
    int option;

    while (true) {
        showMenu();
        cout << "Option: ";
        cin >> option;

        if (option == 1) {
            storeProducts();
        } else if (option == 2) {
            addProduct();
        } else if (option == 3) {
            showCart();
        }
        else if(option==4){
            compatibleProducts();
        }
        else if (option==5){break;}

    }
}