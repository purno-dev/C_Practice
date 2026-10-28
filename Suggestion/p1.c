/*A library has 120 books available. When a student borrows a book, the available book count decreases
by one. Write a C program using the decrement operator to update and display the number of available books.*/

#include<stdio.h>

int main ()
{
    int books_available=120;

    books_available--;
    printf("Books Available %d",books_available);
    return 0;
}