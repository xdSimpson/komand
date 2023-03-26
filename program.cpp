#include "bookstore.h"
#include <locale>
#include <iostream>

void showMenu() {
    std::cout << "1. Add book" << std::endl;
    std::cout << "2. Show book list" << std::endl;
    std::cout << "3. Buy a book" << std::endl;
    std::cout << "4. Show a list of bought books" << std::endl;
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
                cout << "Function addBook is in development" << endl;
                break;
            }
            case 2: {
                cout << "Function book output is in development" << endl;
                break;
            }
            case 3: {
                cout << "Function book buying is in development" << endl;
                break;
            }
            case 4: {
                cout << "Function bought book output is in development" << endl;
                break;
            case 5: {
                std::cout << "Exit..." << std::endl;
                break;
            }
            default: {
                std::cout << "Incorrect choice. Try again" << std::endl;
            }
            }
        }
        catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    } while (choice != 5);

    return 0;
}
