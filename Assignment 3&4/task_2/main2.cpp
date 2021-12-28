// CS115-Assignment 3&4_Task Two

// Task Two: Operator Overloading
// implement an assignment operator “=” overloading in the Cat class.

#include "Animal2.h"

int main()
{
  Cat cat1 {"Inheritance", 115.0, "White"}; //Cat name Inheritance and weight 115.0
  cout << cat1.get_name() << ", " << cat1.get_weight() <<  ", " << cat1.get_color() << endl;
  cat1.meow(); //invoke the member function meow

  Cat cat2 = cat1;
  cout << cat2.get_name() << ", " << cat2.get_weight() << ", " << cat2.get_color() << endl; //print out same as cat1
  cat2.meow(); //invoke the member function meow

  Cat cat3 = cat2;
  cout << cat3.get_name() << ", " << cat3.get_weight() << ", " << cat3.get_color() <<endl; //print out same as cat1 and cat2
  cat3.meow(); //invoke the member function meow

  return 0;
}
