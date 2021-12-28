// Name: DongYun Kim
// Student Number: 200405213
// Date: 2021-11-14
// CS115-Assignment 3&4_Task Four


// Task Four: Pointer
// do instantiation to create Cat and Dog instances. In your
// instantiation, please create pointers for Cat and dog.

#include <iostream>
#include <string>
using namespace std;

class Animal
{
  public:
  //Getters
  string get_name()
  {
    return name_;
  }
  double get_weight()
  {
    return weight_;
  }
// Getter function for color and return back color_;
  string get_color()
  {
    return color_;
  }

  protected: // Accessible by Animal and classes that inherit it
  //constructor
  Animal(string name,double weight, string color): name_{name}, weight_{weight}, color_{color}
  {
    cout << "Animal Constructor" << endl;
  }

  //Member vars
  string name_;
  double weight_;
  string color_;
};

// Inheritance-Derived-class: Cat; Base-class: Animal
class Cat: public Animal
{
  public:
  //Cat Constructor
  Cat(string name,double weight, string color): Animal{name, weight, color}
  {
    cout << "Cat Constructor" << endl;
  }

  // Method
  void meow()
  {
    cout << "meow meow" << endl;
  }
};

// Inheritance-Derived-class: Dog; Base-class: Animal
class Dog: public Animal
{
  public:
  //Dog Constructor
  Dog(string name,double weight, string color): Animal{name, weight, color}
  {
    cout << "Dog Constructor" << endl;
  }

  // Method
  void bark()
  {
    cout << "woof woof" << endl;
  }
};