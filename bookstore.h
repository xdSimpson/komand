#pragma once
#include <iostream>
#include <vector>
#include <string>

class Book {
public:
    Book(const std::string& title, const std::string& author, double price);
    std::string getTitle() const;
    std::string getAuthor() const;
    double getPrice() const;

private:
    std::string title;
    std::string author;
    double price;
};
