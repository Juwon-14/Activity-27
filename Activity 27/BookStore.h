//
//  BookStore.h
//  Activity 27
//
//  Created by Juwon Hong on 11/2/24.
//

#ifndef BOOKSTORE_H
#define BOOKSTORE_H

#include <vector>
#include <string>
#include <iostream>

// Structure for Date
struct Date {
    int year;
    int month;
    int day;

    Date(int y, int m, int d) : year(y), month(m), day(d) {}
};
// Structure for a customer
struct Person {
    std::string name;
    std::string contactInfo;

    Person(const std::string& n, const std::string& c) : name(n), contactInfo(c) {}
};
// Structure for a Book
struct Book {
    std::string title;
    std::string author;
    std::string ISBN;
    int quantity;
    Date addedDate;

    Book(const std::string& t, const std::string& a, const std::string& isbn, int qty, const Date& date)
        : title(t), author(a), ISBN(isbn), quantity(qty), addedDate(date) {}

    bool operator==(const Book& other) const {
        return (ISBN == other.ISBN || title == other.title);
    }
};
// Overload the << operator for easy book display
std::ostream& operator<<(std::ostream& os, const Book& book);

// Structure for the BookStore
struct BookStore {
    std::string storeName;
    std::string location;
    std::vector<Book> stock;

    void addBook(const Book& newBook);
    Book* searchBook(const std::string& identifier);
};

#endif
