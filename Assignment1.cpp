// Adam Schalberg
// CS300 Fall 2020
// Professor Serce
//Assignment 1, due 10/9/2020


// Write a simple C++ phonebook application program
// the program must: 
//    read the contacct information from a given input file
//    into a dynamically created array of Contact objects. 
//    Each line of the input line includes name and phone 
//    information of a contact. Assume that each name has a 
//    single part
//
//    Allow to perform operations on array of data such as 
//    search for a person, create a new contact, or delete 
//    an existing contact. (Also include a "Quit")  

#include <iostream>
#include <fstream>
using namespace std;

class Contact {
   public:
      string contactFirstName; //string variable for the name of the contact
      string contactLastName;
      int contactNumber; //int variable for phone number
      Contact(){

      }
      Contact(string s, string t, int x) {
         contactFirstName = s;
         contactLastName = t;
         contactNumber = x;
      }

 };

 //method to create object
   /* these arrays should be a reasonable size, maybe 100 items?
      -populate up to 70% capacity in the array before creating a new array
      -there should be pointers of pointers to keep both the index and the data in heap
   */
   
   void createArray(string s, string t, int x) {
      Contact** cont;
      cont = new Contact*[100];
      for(int i=0; i <100; i++) {
         cont[i] = new Contact;
         //cout<<cont[i]<<"\n";
      }

   }

int main() {
      //file i/o
      string s;
      string t;
      int x;
      ifstream file;
      file.open("C:\\Users\\thesc\\OneDrive\\Desktop\\phonebooktest.txt");
      while(!file.eof()) {
        file>>s>>t>>x;
        createArray(s, t, x);
        //cout<<s<<" "<<t<<" "<<x<<"\n"; //cout to test functionality of i/o stream
      }
    return 0;
   }   
   
   //search method? should this be integrated into the 