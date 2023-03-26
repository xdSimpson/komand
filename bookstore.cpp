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

void Bookstore::printBooks() const {
    for (const auto& book : books) {
        std::cout << book.getTitle() << " - " << book.getAuthor() << " - " << book.getPrice() << std::endl;
    }
    system("pause");
}

void Bookstore::buyBook(const std::string& title) {
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->getTitle() == title) {
            purchasedBooks.push_back(*it);
            books.erase(it);
            return;
        }
        system("pause");
    }
    throw std::runtime_error("The book was not found");
    system("pause");
}
void Bookstore::printPurchasedBooks() const {
    for (const auto& book : purchasedBooks) {
        std::cout << book.getTitle() << " - " << book.getAuthor() << " - " << book.getPrice() << std::endl;
    }
    system("pause");
}
