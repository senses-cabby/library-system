// main.c

#include <stdio.h>
#include "book.h"
#include "author.h"
#include "user.h"

int main() {
    // Create books
    struct Book book1 = {1, "The C Programming Language", 1};
    struct Book book2 = {2, "Programming in C", 2};

    // Create authors
    struct Author author1 = {1, "Brian W. Kernighan"};
    struct Author author2 = {2, "Stephen G. Kochan"};

    // Create users
    struct User user1 = {101, "coder123"};
    struct User user2 = {102, "programmingFan"};

    // Display book information
    printf("Book Information:\n");
    displayBook(book1);
    printf("\n");
    displayBook(book2);

    // Display author information
    printf("\nAuthor Information:\n");
    printf("Author ID: %d, Name: %s\n", author1.authorId, author1.name);
    printf("Author ID: %d, Name: %s\n", author2.authorId, author2.name);

    // Display user information
    printf("\nUser Information:\n");
    printf("User ID: %d, Username: %s\n", user1.userId, user1.username);
    printf("User ID: %d, Username: %s\n", user2.userId, user2.username);

    return 0;
}
