#include "bookstore.h"
#include <iostream>

void showMenu() {
    std::cout << "1. Add book" << std::endl;
    std::cout << "2. Show a list of books" << std::endl;
    std::cout << "3. Buy book" << std::endl;
    std::cout << "4. Show a list of purchased books" << std::endl;
    std::cout << "5. Exit" << std::endl;
}

int main() {

    Bookstore bookstore;
    int choice;

    do {
        showMenu();
        std::cin >> choice;

        try {

            switch (choice) {

            case 1: {
                std::string title, author;
                double price;
                std::cout << "Введите название, автора и цену книги: ";
                std::cin >> title >> author >> price;
                bookstore.addBook(Book(title, author, price));
                break;
            }
            case 2: {
                bookstore.printBooks();
                break;
            }
