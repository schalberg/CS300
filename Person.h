// Adam Schalberg
// CS300 Fall 2020
// Professor Serce
//Assignment 1, due 10/9/2020

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person {
    private:
        string name;
        int phone;
    public:
        Person(){
            
        }
        Person(string _name, int _phone){
            name = _name;
            phone = _phone;               
        }
        void setName(string _name){
            name = _name;            
        }
        void setPhone(int _phone){
            phone = _phone;
        }
        string getName(){
            return name;
        }
        int getPhone(){
            return phone;
        }
    //overload method to allow the printing of the name and phone 
    //fields of the person objects
    friend ostream& operator<<(ostream& os, Person& _p){
        os << _p.name << " " << _p.phone << endl;
        return os;
    }
};

#endif

