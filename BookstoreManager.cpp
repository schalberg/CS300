//Adam Schalberg
//CS300 Fall 2020
//Professor Serce
//Assignment 2-client file

class BookstoreManager {
        private:
            Book *book = new Book;
            int count; //number of elements
        public:
            BookstoreManager(){
                book = new Book[1000000]; //create array of book objects
                count = 0;
            }
            void add(Book b){
                book[count] = b;
                count++;
            }
            void search(Book b){

            }
            void delete(Book b){

            }
            void print() {

            }
}

#include <iostream>
#include "Book.h"
#include "BookstoreManager.h"

using namespace std;

int main(){
    BookstoreManager bookstoreManager;

    //prints true if the bookstore is empty
    bookstoreManager.isEmpty();

    //insert 4 books
    string title, authors, publisher;
    int isbn;
    for(int i = 0; i < 4; i++) {
        cout << "Enter book title:";
        cin >> title;
        cout << "Enter authors:";
        cin >> authors;
        cout << "Enter ISBN:";
        cin >> isbn;
        cout << "Enter publisher:"; 
        cin >> publisher;
        Book aBook(title, isbn, authors, publisher);
        bookstoreManager.insert(aBook);
        cout << endl;
    }

    //print bookstore
    bookstoreManager.print();

    //search for books 
    cout << "Searching..." << endl;
    cout << "ISBN:";
    cin >> isbn;
    Book b2(isbn);
    bookstoreManager.search(b2);

    //remove a book
    cout << "Removing..." << endl;
    cout << "ISBN:"; 
    cin >> isbn;
    Book b1(isbn);
    bookstoreManager.remove(b1);

    //print bookstore
    bookstoreManager.print();

    //remove books from a particular publisher 
    cout << "Removing publisher" << endl;
    cout << "Publisher:";
    cin >> publisher;
    bookstoreManager.removePublisher(publisher);

    //print bookstore
    bookstoreManager.print();

    //printsthe number of books 
    bookstoreManager.listSize();

    
}