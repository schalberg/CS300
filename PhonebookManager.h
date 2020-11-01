// Adam Schalberg
// CS300 Fall 2020
// Professor Serce
//Assignment 1, due 10/9/2020



#include <iostream>
#include "Person.h"

using namespace std;

class Phonebook{
   private:
      Phonebook *pBook;
      int count; 
      int capacity = 1000000;
   public:
      Phonebook(){
         pBook = new Person[capacity];
         count = 0;
      }
      void addPerson(Person _p){
         pBook[count] =  _p;
         count++;
      }
};

/*class PhonebookManager{
    private:
        Book *phonebook;
        int count; //track the current number of elements
        int capacity = 1000000;
    public:
        PhonebookManager(){
            phonebook = new Book[capacity]; //keeps the array of all person objects
            count = 0;
        }
        void addPerson(Person p){
            phonebook[count]=p;
            count++;
        }*/
        /*void searchPerson(string _name){
            for(int i = 0; i < count; i++) {
                if(p.getName() == _name){
                    return phonebook[i].getNumber();
                }
            }
        }
        
        void deletePerson(Person p){
            for(int i = 0; i < count; i++) {
                if(p.getName() == _name){
                    delete phonebook[i];
                }
            }
        }

        void print(){
            for(int i = 0; i < count; i++){
                cout << phonebook[i];
            }
        }*/
        

};

