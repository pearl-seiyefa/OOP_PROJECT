#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int ISBN;

public:
    Book(const std::string& title, const std::string& author, const int& ISBN){};
    std::string getTitle() const{};
    std::string getAuthor() const{};
    int  getISBN() const{};
    void setTitle(const std::string& title){};
    void setAuthor(const std::string& author){};
    void setISBN(const int& ISBN){};
};

#endif

