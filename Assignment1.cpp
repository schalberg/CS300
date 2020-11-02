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
#include "Person.h"
#include "PhonebookManager.h"

using namespace std;

void userSelection(){
   cout<<"Please choose an operation:"<<"\n";
   cout<<"A(Add) | S (Search) | D(Delete) |L(List) |Q(Quit):";
}   

int main(){
   Phonebook pManager;
   string first, last, name;
   int phone;
   char selection;
   ifstream inFile;
   inFile.open("C:\\Users\\thesc\\OneDrive\\Desktop\\phonebook.txt");
   while(!inFile.eof()){
      inFile >>first>>last>>phone;
      name = first+" "+last;
      Person p(name, phone);
      pManager.addPerson(p);
   }
   cout<<"***MY PHONEBOOK APPLICATION***"<<"\n";
   userSelection();
   cin>>selection;
   selection = toupper(selection);
   if(selection == 'A'){
      //prompt the user for the name and phone number of the person to add
      //to the array, call the add method
      cout << "Enter name: ";
      cin >> name;
      cout << "Enter phone: ";
      cin >> phone;
      Person p(name, phone);
      pManager.addPerson(p);
      userSelection();
   } else if(selection == 'S') {
      //prompt the user to provide a name, scan the contents of the array for that 
      //name and return the phone number associated with that name
      string a, b, searchName;
      string result;
      char temp;
      cout << "Enter name: ";
      cin >> a >> b;
      searchName = a + " " + b;
      //ensure that user input is formatted to match data in array
      for(int i = 0; i < searchName.length(); i++){ 
         temp = searchName[i];
         temp = toupper(temp);
         result += temp;
      }
      pManager.search(result);
      userSelection();
      //prompt the user for a name, search the array for that name and remove it by shifting
      //each object w/in the array down one index, overwriting the selected record in the process
   } else if(selection == 'D'){
         string a, b, _name;
         cout << "Enter name: ";
         cin >> a >> b;
         _name = a + " " + b;
         pManager.deletePerson(_name);
         cout << "Deleted." << endl;
         userSelection();
         //call delete method
   } else if(selection == 'L'){
      //call print method, printing out the contents of the array
      pManager.print();
      userSelection();
   } else if(selection == 'Q'){
      cout<<"You've chosen Quit. ";
      pManager.~Phonebook();
      //call quit method
   } else {  //addresses invalid input
      cout<<"Invalid selection."<<"\n";
      userSelection();
   }

   return 0;
}

