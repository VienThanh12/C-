/*

Question 2
a)	What is the function of virtual destructor?
- A special type of destructor
- A destructor is a special member function that is called when an object is destroyed.
- Cleaning up the memory.
- Must be used when a class has vitual function and is intended to be used as a base class for other.
- Like the example on Wednesday that you show us, if we don't you virtual destructor, the code just delete base class and don't delete derived class.
- As you said, it must be a note for a rookie to remember that whenever you write a program use inheritance and want to clean up the memory in base class
as well as derived class, you must use virtual destructor
// Code 
- Base class: ~ Base() {}
- Derived class: ~Derived (){}


b)	Difference between a pointer and a reference as input parameter? Advantages and disadvantages of both.
Difference
- Syntax: A pointer: * symbol, reference: & symbol
- Nullability: A pointer can be null, reference: can not
- Access valuse: need to use * in pointer (*a), reference can be used like any other variable
- Reassignment: A pointer: reassigned  reference cannot be reassigned.
- Print &a it will print memory adress, print *a -> print value or print a -> print memory adress
Pointer:
Advantage 
- Flexibility: Dynamic memory allocation and deallocation.
- Nullability: Useful for indicating that an object does not exist.
- Reassignment: Useful in situations where the object being pointed to changes over time.
Disadvantage: 
Complexity: Complex to use than references
Safety: Can be null or point to invalid memory, leading to crashes or undefined behavior.


Reference
Advantage
- Simplicity: A simpler syntax for accessing the value of an object.
- Safety: References are guaranteed to refer to a valid object.
- Readability: It's clear that the function is operating on an existing object rather than creating a copy of it.
Disadvantage
- Immutability: References cannot be reassigned after they are initialized. 
- Complexity: References can be more complex to use than simple value types.

c)	Polymorphism
- Polymorphism means "many forms"
- It is related to overriding
- This is achieved through virtual methods in a parent class 
- Using pointers to store object addresses, enabling calls to overridden methods in child classes for all objects stored in the pointer.
Code
// You make a class animal with a method like this
class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n";
    }
};
// But we can overriding in derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says: wee wee \n";
    }
};
// so when we call myPig.animalSound(); 
// it will print "The pig says: wee wee"

*/

/* 
Author: Ha Duc Thanh Vien
Student number: 2202863
Date: 27/4/2023
*/
