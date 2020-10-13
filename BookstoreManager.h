#include <iostream>
#include <Book.h>

using namespace std;

class Bookstore{
    private:
        int size;
    public:
        //returns true if the array is empty, otherwise false
        bool isEmpty() {
            return true;
        }

        //returns true if the array is full, otherwise false
        bool isFull() {
            return true;
        }

        //prints the number of books in the array
        int listSize() {
            return size;
        }

        // prints the content of the array
        void print(){

        }

        //asks user to enter new book info, and it adds the books in order. 
        //if the arra is full, it'll double the size of the array
        void insert(Book){

        }
        
        //asks user to enter ISBN info, and it removes the book from the array; shifts the
        //other elements up in the array.
        //Prints "Not Found" if search fails. 
        void remove(Book){

            if(){

            } else {
                cout << "Not Found" << endl;
            }
        }

        void search(Book) {

            if() {

            } else {
                cout << "Not Found" << endl;
            }
        }
};  