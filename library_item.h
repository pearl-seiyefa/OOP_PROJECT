#ifndef LIBRARY_ITEM_H
#define LIBRARY_ITEM_H

#include <string>

class LibraryItem {
private:
    std::string title;        
    bool isCheckedOut;        
    int dueDate;     

public:
    
    LibraryItem(const std::string& title){};

    
    std::string getTitle() const{};
    bool getIsCheckedOut() const{};
    int getDueDate() const{};

    
    void setTitle(const std::string& title){};
    void setIsCheckedOut(bool status){};
    void setDueDate(const int& dueDate){};

    
    virtual void checkOut(){};
    virtual void returnItem(){};
    virtual void renewItem(int extraDays){};
    virtual void markAsLost(){};


    virtual ~LibraryItem() = default;
};

#endif
