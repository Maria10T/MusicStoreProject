# MusicStoreProject
Make a shopping cart and check whether the pair (music, player, sticker) fit well with each other. We have three categories of products: Song, Music Player and Sticker. All of them have a price and a name.
A Song also contain its author(s), a title and its length (seconds).
A Music Player also contains the title and the singer.
A Sticker also includes an extra string.
Songs are of two types: Vinyl and CD. And MusicPlayer also have two types: VinylPlayer and CdPlayer.

Two products are compatible in one of the next cases:
Two Songs are compatible if they have the same author.
A Music Player is compatible with a Song if the Song is a Vinyl and the Music Player is a VinylPlayer, and similarly for CD and CdPlayer
A sticker is compatible with any Song that have common words with the Sticker’s message
A sticker is compatible with any Music Player that have common words with the Sticker’s message
 Add to cart 5 or more products of which there are at least 3 compatible pairs.

Tasks:
1. Read and store n products;
2. Add a new product using function overloading:
           - void addProduct()- first time we read the type of the product;
           - void addProduct( Product *p)- first time we discover the type of the product;
3. Display the products that are in the cart;
4. Display the compatible pairs in the cart.
