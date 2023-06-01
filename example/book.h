#pragma once
/**
 *  Book
 **/
#ifndef BOOK_H
#define BOOK_H

#include "../source/shared.h"
#include <sstream>

using std::cout;
using std::stringstream;

class Book {
    private:
        int isbn;
        string title;
        string author;
        string publisher;
        float price;
        int stock;
        void showDetails();
    public:
        Book() = default;
        Book(string details);
        void setDetails(string details);
        bool verify(string title, string author);
        string toString();
        bool purchase();
        friend std::ostream& operator<<(std::ostream& os, Book book);
};

#endif
