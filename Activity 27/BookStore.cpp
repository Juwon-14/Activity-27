//
//  BookStore.cpp
//  Activity 27
//
//  Created by Juwon Hong on 11/2/24.
//

#include "BookStore.h"

std::ostream& operator<<(std::ostream& os, const Book& book) {
    os << "Title: " << book.title << "\n"
       << "Author: " << book.author << "\n"
       << "ISBN: " << book.ISBN << "\n"
       << "Quantity: " << book.quantity << "\n"
       << "Date Added: " << book.addedDate.year << "-" << book.addedDate.month << "-" << book.addedDate.day << "\n";
    return os;
}

void BookStore::addBook(const Book& newBook) {
    for (const auto& book : stock) {
        if (book == newBook) {
            std::cout << "Book already in stock.\n";
            return;
        }
    }
    stock.push_back(newBook);
    std::cout << "Book added: " << newBook.title << "\n";
}

Book* BookStore::searchBook(const std::string& identifier) {
    for (auto& book : stock) {
        if (book.title == identifier || book.ISBN == identifier) {
            std::cout << "Book found:\n" << book << "\n";
            return &book;
        }
    }
    std::cout << "Book not found.\n";
    return nullptr;
}

