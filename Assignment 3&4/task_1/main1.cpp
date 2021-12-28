// CS115-Assignment 3&4_Task One


/*Besides all the variables and methods derived from the Animal class, the Cat and Dog classes
should have at least one specific variable and one specific method in each class. For example,
Cat class will have a meow() method and Dog class will have a bark() method. */

// Task One: Inheritance

#include "Animal1.h"

int main()
{
  Dog dog {"CS", 115.0, "black"}; //Dog name CS and weight 115.0
  cout << dog.get_name() << ", " << dog.get_weight() << ", " << dog.get_color() << endl;
  dog.bark(); //invoke the member function bark
  
  cout << endl;
  Cat cat {"Inheritance", 115.0, "oragne"}; //Cat name Inheritance and weight 115.0
  cout << cat.get_name() << ", " << cat.get_weight() << ", " << cat.get_color() << endl;
  cat.meow(); //invoke the member function meow

  return 0;
}
