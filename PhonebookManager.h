// Adam Schalberg
// CS300 Fall 2020
// Professor Serce
//Assignment 1, due 10/9/2020

#include <iostream>
#include "Person.h"

using namespace std;

class Phonebook{
   private:
      Person *pBook;
      int count; 
      int capacity = 1000000; //default array size
   public:
      Phonebook(){ //create new array
         pBook = new Person[capacity];
         count = 0;
      }
      ~Phonebook(){ //destructor
         delete[] pBook;
      }
      void resizeArray(){
          capacity = capacity * 2; //double the potential size of the array
          Person *pBookTemp;
          pBookTemp = new Person[capacity]; //create a temporary array with double the size of the original
          for(int i = 0; i < count; i++) { //run a loop to migrate the data from the original array to the new array
              pBookTemp[i] = pBook[i]; 
          }
          //make the original array match the new array, effectively doubling size of original while maintaining the
          //original's data
          pBook = pBookTemp; 
          delete [] pBookTemp; //delete the now unnecessary temp array
      }
      //take the created person object, insert it into array
      void addPerson(Person _p){
         if(count < (capacity * .7)){ //ensure there is enough space in the array for the new element
            pBook[count] =  _p;
            count++;
         } else { //if not, resize the array then add the new element
             resizeArray();
             pBook[count] =  _p;
             count++;
         }
      }
      //printing out the contents of the array
      void print(){
        for(int i = 0; i<count; i++)
            cout<<pBook[i].getName() <<pBook[i].getPhone() <<endl;
      }
      //check the value of a string against the name field of person object
      //print the phone number associated with that name to console
      void search(string _name){
          for(int i = 0; i<count; i++){
            if(pBook[i].getName() == _name) {
                cout << "Phone Number: " << pBook[i].getPhone() << endl;
            }
          }
      }
      //take user input, search the array for an object with the matching name and 
      //delete it by shifting the index of all elements with an index that is higher
      //down by one index value, overwriting the object targeted for deletion
      void deletePerson(string _name) {
          int index = 0;
          while (pBook[index].getName() != _name) {
            index++;
          }
          for(int i = index; i < count; i++) {
              pBook[i] = pBook[i+1];
          }
     }
};




