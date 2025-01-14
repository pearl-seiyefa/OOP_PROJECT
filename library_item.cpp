#include "library_item.h"

LibraryItem::LibraryItem(const std::string& title)
    : title(title), isCheckedOut(false), dueDate("") {}

std::string LibraryItem::getTitle() const { 
    return title; 
}
void LibraryItem::setDueDate(const int& dueDate) { 
    this->dueDate = dueDate; 
}

bool LibraryItem::getIsCheckedOut() const { 
    return isCheckedOut;
}
int LibraryItem::getDueDate() const { 
    return dueDate; 
}

// Methods
void LibraryItem::checkOut() { isCheckedOut = true; }
void LibraryItem::returnItem() { isCheckedOut = false; }
void LibraryItem::renewItem(int extraDays) 
void LibraryItem::markAsLost() { isCheckedOut = false; }
