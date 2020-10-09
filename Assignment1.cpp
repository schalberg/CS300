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
#include <sstream>
using namespace std;

class Contact {
   public: 
      Contact();
      Contact(string, string, int);
      int size;
      string fName;
      string lName;
      int phone;
      string person;
      
};
   Contact::Contact(){
   }
   
   Contact::Contact(string s, string t, int x){
      fName = s;
      lName = t;
      phone = x;
   }

   void createArray(){
        int size = 100;
        Contact** cont; //pointer pointer, points to array which points to objects
        cont = new Contact*[size]; 
        for(int i=0; i <size; i++) { //create array that points to 100 objects
            cont[i] = new Contact();
            
        }
    }
   
   //write the add method to match to the first empty index of the array, redirected to the 
   //contact object...since it's a pointer, should I use a reference to find the array?

   void addRecord(string s, string r, int x){
      int indxCount = 0;
      std::stringstream ss;
      ss << s << " " << r << " " << x;
      //*cont[indxCount] = ss.str();
     // indxCount+=4; // need to increment by 4 as the int in the array takes up 4 bytes of memory
   }

   //void searchRecord(){
      //search the array for data
   //}

   //void deleteRecord(){
      //get address of data (&) with pointer
      //set detail to null
   //}
   
   //void listRecords(){
      //print out the records
   //}
   
   int main() {
      
      
      //file i/o
      string s; //parse file data for first name
      string t; //parse file data for last name
      int x; //parse file data for phone number
      ifstream file; 
      file.open("C:\\Users\\thesc\\OneDrive\\Desktop\\phonebooktest.txt"); //open file as directed
      while(!file.eof()) { //sets exit condition to continue until end of file is reached
         file >> s >> t >> x; //data in first name/last name/phone# format; this command directs the data into the corresponding var's
         //string output = s + " " + t + " " + to_string(x); //commented out, need to preserve the object's 3 fields
         createArray(); //create the initial array
      }
      char selection;
      cout<<"***MY PHONEBOOK APPLICATION***"<<"\n";
      cout<<"Please choose an operation:"<<"\n";
      cout<<"A(Add) | S (Search) | D(Delete) |L(List) |Q(Quit):";
      cin>>selection;
      selection = toupper(selection);
      if(selection == 'A'){
         cout<<"You've chosen Add";
         //call add method
      } else if(selection == 'S') {
         cout<<"You've chosen Search";
         //call search method
      } else if(selection == 'D'){
         cout<<"You've chosen Delete";
         //call delete method
      } else if(selection == 'L'){
         cout<<"You've chosen List";
         //call list method
      } else if(selection == 'Q'){
         cout<<"You've chosen Quit. ";
         //call quit method
      } else {  //addresses invalid input
         cout<<"Invalid selection."<<"\n";
         cout<<"Please choose an operation:"<<"\n";
         cout<<"A(Add) | S (Search) | D(Delete) |L(List) |Q(Quit):";
      }
      
      return 0;
   }   
   