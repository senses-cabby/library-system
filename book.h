// book.h

#ifndef BOOK_H
#define BOOK_H

struct Book {
    int bookId;
    char title[100];
    int authorId;
};

void displayBook(struct Book book);

#endif
