#ifndef PATRON_H
#define PATRON_H

#include <string>

class Patron {
private:
    std::string name;
    int libraryCardNumber;

public:
    Patron(const std::string& name, const std::string& libraryCardNumber){};
    std::string getName() const{};
    int getLibraryCardNumber() const{};
    void updateContactInfo(const std::string& newContactInfo){};
    bool canBorrowMoreBooks(int currentBorrowedCount, int maxLimit) const{};
};

#endif