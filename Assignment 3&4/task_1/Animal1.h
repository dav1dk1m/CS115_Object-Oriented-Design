// CS115-Assignment 3&4_Task One


/*Besides all the variables and methods derived from the Animal class, the Cat and Dog classes
should have at least one specific variable and one specific method in each class. For example,
Cat class will have a meow() method and Dog class will have a bark() method. */

#include <iostream>
#include <string>
using namespace std;

// Task One: Inheritance

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
