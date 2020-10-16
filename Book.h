//Adam Schalberg
//CS300 Fall 2020
//Professor Serce
//Assignment 2 

#include <iostream>
using namespace std;

class Book{
    private:
        string title, authors, publisher;
        int isbn;

    public:
        void setTitle(string);
        void setAuthors(string);
        void setPublisher(string);
        void setIsbn(int);
        string getTitle();
        string getAuthors();
        string getPublisher();
        int getIsbn();
};

        Book::Book(){

        }

        Book::Book(string, string, string, int){

        }

        Book::~Book() {
            //need a for loop
        }

        void Book::setTitle(string _title){
            title = _title;
        }

        void Book::setAuthors(string _authors) {
            authors = _authors;
        }

        void Book::setPublisher(string _publisher) {
            publisher = _publisher;
        }

        void Book::setIsbn(int _isbn){
            isbn = _isbn;
        }

        string Book::getTitle(){
            return title;
        }

        string Book::getAuthors() {
            return authors;
        }

        string Book::getPublisher(){
            return publisher;
        }

        int Book::getIsbn(){
            return isbn;
        }

};