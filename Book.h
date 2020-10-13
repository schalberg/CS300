
#include <iostream>
using namespace std;

class Book{
    private:
        string title;
        string authors;
        string publisher;
        int isbn;

    public:
        book(){

        }

        book(string, string, string, int){

        }

        ~book() {
            //need a for loop
        }

        void setTitle(string _title){
            title = _title;
        }

        void setAuthors(string _authors) {
            authors = _authors;
        }

        void setPublisher(string _publisher) {
            publisher = _publisher;
        }

        void setIsbn(int _isbn){
            isbn = _isbn;
        }

        string getTitle(){
            return title;
        }

        string getAuthors() {
            return authors;
        }

        string getPublisher(){
            return publisher;
        }

        int getIsbn(){
            return isbn;
        }

};