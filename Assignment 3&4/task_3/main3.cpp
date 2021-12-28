// CS115-Assignment 3&4_Task Three

// Task Three: Template Function

#include "Animal3.h"

int main()
{
  Cat cat1 {"Inheritance", 115.0, "oragne"}; //Cat name Inheritance and weight 115.0
  cout << cat1.get_name() << ", " << cat1.get_weight() << ", " << cat1.get_color() <<endl;
  cat1.meow(); //invoke the member function meow

  Cat cat2 = cat1;
  cout << cat2.get_name() << ", " << cat2.get_weight() << ", " << cat2.get_color() <<endl;//print out same as cat1
  cat2.meow(); //invoke the member function meow

  Cat cat3 = cat2;
  cout << cat3.get_name() << ", " << cat3.get_weight() << ", " << cat3.get_color() <<endl; //print out same as cat1 and cat2
  cat3.meow(); //invoke the member function meow

  Dog dog1 {"CS", 115.0, "black"}; //Dog name CS and weight 115.0
  cout << dog1.get_name() << ", " << dog1.get_weight() << ", " << dog1.get_color() <<endl;
  dog1.bark(); //invoke the member function bark

  Dog dog2 = dog1;

  cout << dog2.get_name() << ", " << dog2.get_weight() << ", " << dog2.get_color() <<endl;//print out same as dog1
  dog2.bark(); //invoke the member function bark

  Dog dog3 = dog2;
  cout << dog3.get_name() << ", " << dog3.get_weight() << ", " << dog3.get_color() <<endl; //print out same as dog1 and dog2
  dog3.bark(); //invoke the member function bark
  
  return 0;
}
