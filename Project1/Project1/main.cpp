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
                std::cout << "Enter the title, author and price of the book: ";
                std::cin >> title >> author >> price;
                bookstore.addBook(Book(title, author, price));
                break;
            }
            case 2: {
                bookstore.printBooks();
                break;
            }
            case 3: {
                std::string title;
                std::cout << "Enter the name of the book: ";
                std::cin >> title;
                bookstore.buyBook(title);
                break;
            }
            case 4: {
                bookstore.printPurchasedBooks();
                break;                }
            case 5: {
                std::cout << "Exit..." << std::endl;
                break;
            }
            default: {
                std::cout << "Incorrect choice. Try again." << std::endl;
            }
            }
        }
        catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    } while (choice != 5);

    return 0;
}