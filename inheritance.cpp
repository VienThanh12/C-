#include<iostream>
using namespace std;

class Animal {
public:
    int age = 0;

public:
    int SetAge(){
        return 19;
    }
    void eat() {
        std::cout << "Animal is eating." << std::endl;
  }
};

class Dog : public Animal {
public:
  void bark() {
    std::cout << "Dog is barking." << std::endl;
  }
};

int main() {
  Dog myDog;
  cout << myDog.SetAge() << endl;
  cout << myDog.age << endl;
  myDog.eat(); // inherited from Animal class
  myDog.bark();
  return 0;
}
