// Explain what each line of the following code means. Copy to the code into editor and add a comment to each line.
#include <iostream> // decare library
#include <string> // to using  some special function like to_string
// The standard input/output library and the string library.
using namespace std; // don't need to use std:: any more, it's like in the memory you need to use std

class Person { // declare a class person, a base class

protected: // using protected so that you can be accessed by a member function of derived class
    string name;  // attributes type of data is string 
    int age; // type of data is integer
public: // you use public so that you can access anywhere in the program
    Person(string name, int age) { // Constructor has the same name as the class and no return type. Constructors can be defined within the class definition or outside it.
        this->name = name; // point to this in the local
        this->age = age; // disambiguate between local variables and data members that have the same name
        // if we don't use this, the computer will don't know which one you choose
    }
    virtual ~Person() {  // Person destructor needs to be virtual to call child class destructors also
        cout << "Bye";
    }

    virtual string toString() = 0;  // abstract method. No implementation in Person
};

class Student : public Person { // class Student inherits class Person 
//declares a class Student, which is a child class of Person

private:
    int student_id; // they can just be accessed in class 
    int credits;  // It has additional attributes, student_id and credits,
public:
    Student(string n, int a, int id, int cr) : Person{ n, a } // override method, can have parameters
    {
        student_id = id;
        credits = cr;
    }
    ~Student() {  // destructor for the Student
        cout << "\n";
    }
    string toString()
    {
        return "Name:" + name + " Age:" + to_string(age) + " Id:" + to_string(student_id) + " Credits:" + to_string(credits) + "\n";
    }
};

int main()
{
    Person* student1 = new Student("Joe", 22, 1005, 123); // Person is having abstract method (virtual)
    Person* student2 = new Student("Lisa", 23, 1004, 127);  

    cout << student1->toString(); // it used dynamically 
    cout << student2->toString(); //  operator to print the details of each student

    delete(student1); // clean up the memory 
    delete(student2); // the memory allocated using new is released using delete.
    // like example 10 you show us 
}

/* 
Author: Ha Duc Thanh Vien
Student number: 2202863
Date: 27/4/2023
*/  
