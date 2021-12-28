// CS115-Assignment 3&4_Task Two

#include <iostream>
#include <string>
using namespace std;

// Task Two: Operator Overloading
// implement an assignment operator “=” overloading in the Cat class.

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

// using assignment "=" overloading in the Cat class so that it allows
// to create new Cat instances from existing objects.
  void operator=(const Cat& c)
  {
    name_ = c.name_;
    weight_ = c.weight_;
    color_ = c.color_;
  }

};
