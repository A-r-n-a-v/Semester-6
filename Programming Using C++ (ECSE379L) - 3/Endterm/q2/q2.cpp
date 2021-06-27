// Definitions
/*
-----Answer 1-----
When we talk about object-oriented programming, inheritance is the mechanism through which a class acquires the properties, definitions, behaviours and characteristics of another class. The new subclass which is being derived from the existing superclass is often called a Child class or Derived class; Superclass is usually termed as Parent class OR Base class. Inheritance lets you create a hierarchy of classes and facilitates the reusability of code (fields and methods) that can be extremely efficient in hierarchical systems. This is what makes inheritance a very important concept in OOPs.
Types of Inheritance,
Single Inheritance - When a child class inherits only from a single parent class (A→B)
Multiple Inheritance - When a child class inherits from more than one parent classes (A,B→C)
Hierarchical Inheritance - When more than one child classes inherit from a single parent class (A→B,C,D)
Multilevel Inheritance - When a child class inherits from a parent class which in turn inherits from another parent class (A→B→C)
Hybrid Inheritance (Virtual Inheritance) - When more than two modes of inheritance are present in a system (A→B,C→D)
In the above example, “Multiple Inheritance” is present.
*/

// including required libraries
#include <iostream>    // this library enables i/o operations
#include <string>    // this library enables string usage

// using 'std' namespace for std:: scope
using namespace std;

// declaration of class FATHER
class FATHER {
    // public members
    public:
        string q1, q2, q3;    // father's three qualities as string
        
        // FATHER class' constructor to take father qualities input from user
        FATHER() {
            getline(cin, q1);    // reading and storing father's quality 1
            getline(cin, q2);    // reading and storing father's quality 2
            getline(cin, q3);    // reading and storing father's quality 3
        }
        
        // function to output father's qualities
        void father_quality() {
            cout << q1 << endl;    // outputting father's quality 1
            cout << q2 << endl;    // outputting father's quality 2
            cout << q3 << endl;    // outputting father's quality 3
        }
};

// declaration of class MOTHER
class MOTHER {
    public:
        string q4, q5, q6;
        
        // MOTHER class' constructor to take input of mother's qualities from user
        MOTHER() {
            getline(cin, q4);    // reading and storing father's quality 1
            getline(cin, q5);    // reading and storing father's quality 2
            getline(cin, q6);    // reading and storing father's quality 3
        }
    
        // function to output mother's qualities
        void mother_quality() {
            cout << q4 << endl;    // outputting mother's quality 1
            cout << q5 << endl;    // outputting mother's quality 2
            cout << q6 << endl;    // outputting mother's quality 3
        }
};

// declaration of class CHILD
class CHILD: public FATHER, public MOTHER {
    // public members
    public:
        // function to output child's quality
        void child_quality() {
            father_quality();    // calling inherited function from FATHER class to output his qualities
            mother_quality();    // calling inherited function from MOTHER class to output her qualities
            cout << " CHILD has all the qualities of their parents.";
        }
};

// main() function
int main()
{
    CHILD c;    // declaring an object of CHILD class, since CHILD class inherits classes FATHER and MOTHER, their constructor will automatically be called first
    c.child_quality();    // calling CHILD member function to output child's qualities
    
    return 0;
}
