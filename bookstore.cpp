#include "bookstore.h"
#include <iostream>

Book::Book(const std::string& title, const std::string& author, double price)
    : title(title), author(author), price(price) {
}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

double Book::getPrice() const {
    return price;
}

void Bookstore::addBook(const Book& book) {
    books.push_back(book);
}
