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
      Contact(string);
      int size;
      //string fName;
      //string lName;
      //int phone;
      string person;
      
};
   Contact::Contact(){
   }
   
   Contact::Contact(string s){
      person = s;
   }

   void createArray(string output){
        int size = 100;
        Contact** cont; //pointer pointer, points to array which points to objects
        cont = new Contact*[size]; 
        for(int i=0; i <size; i++) { //create array that points to 100 objects
            cont[i] = new Contact(output);
            cout<<cont[i]<<"\n";
        }
    }

   //void addRecord(string s, string r, int x){
       //int indxCount = 0;
       //cont[indxCount] = s + " " + r + " " + x;
   //}
   
   int main() {
      char selection;
      cout<<"***MY PHONEBOOK APPLICATION***"<<"\n";
      cout<<"Please choose an operation:"<<"\n";
      cout<<"A(Add) | S (Search) | D(Delete) |L(List) |Q(Quit):";
      cin>>selection;
      selection = toupper(selection);
      if(selection == 'A'){
         cout<<"You've chosen Add";
      } else if(selection == 'S') {
         cout<<"You've chosen Search";
      } else if(selection == 'D'){
         cout<<"You've chosen Delete";
      } else if(selection == 'L'){
         cout<<"You've chosen List";
      } else if(selection == 'Q'){
         cout<<"You've chosen Quit. ";
      } else {
         cout<<"Invalid selection."<<"\n";
         cout<<"Please choose an operation:"<<"\n";
         cout<<"A(Add) | S (Search) | D(Delete) |L(List) |Q(Quit):";
      }
      //}
      //file i/o
      string s; //parse file data for first name
      string t; //parse file data for last name
      int x; //parse file data for phone number
      ifstream file; 
      file.open("C:\\Users\\thesc\\OneDrive\\Desktop\\phonebooktest.txt"); //open file as directed
      while(!file.eof()) { //sets exit condition to continue until end of file is reached
        file >> s >> t >> x; //data in first name/last name/phone# format; this command directs the data into the corresponding var's
        string output = s + " " + t + " " + to_string(x);
        createArray(output); //create the initial array
        //addData(s, t, x);
        //cout<<s<<" "<<t<<" "<<x<<"\n"; //cout to test functionality of i/o stream
      }
      return 0;
   }   
   