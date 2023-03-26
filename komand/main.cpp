#include "bookstore.h"
#include <locale>
#include <iostream>

void showMenu() {
    setlocale(LC_ALL, "Rus");
    std::cout << "1. Добавить книгу" << std::endl;
    std::cout << "2. Показать список книг" << std::endl;
    std::cout << "3. Купить книгу" << std::endl;
    std::cout << "4. Показать список купленных книг" << std::endl;
    std::cout << "5. Выйти" << std::endl;
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
                cout << "Функция добавления книги в разработке" << endl;
                break;
            }
            case 2: {
                cout << "Функция вывода книг в разработке" << endl;
                break;
            }
            case 3: {
                cout << "Функция покупки книг в разработке" << endl;
                break;
            }
            case 4: {
                cout << "Функция вывода купленных книг в разработке" << endl;
                break;
            case 5: {
                std::cout << "Выход..." << std::endl;
                break;
            }
            default: {
                std::cout << "Некорректный выбор. Попробуйте еще раз." << std::endl;
            }
            }
        }
        catch (const std::exception& e) {
            std::cerr << "Ошибка: " << e.what() << std::endl;
        }
    } while (choice != 5);

    return 0;
}
