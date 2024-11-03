//
//  main.cpp
//  Activity 27
//
//  Created by Juwon Hong on 11/2/24.
//

#include <iostream>
#include "BookStore.h"

int main() {
    BookStore myStore = {"Berkeley Bookstore", "456 Library Rd."};

    myStore.addBook({"Data Science Essentials", "Tim", "9781234567890", 5, Date(2024, 11, 3)});
    myStore.addBook({"Introduction to Algorithms", "Tom", "9780262033848", 3, Date(2024, 11, 4)});

    Person customer("Juwon Hong", "Juwon@abcd.com");

    std::string query = "Data Science Essentials";
    Book* foundBook = myStore.searchBook(query);
    std::cout << (foundBook ? "Success! Found the book: " + foundBook->title + " by " + foundBook->author + ".\n"
                            : "Sorry, we couldn't find that book in our inventory.\n");

    return 0;
}
