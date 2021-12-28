// Name: DongYun Kim
// Student Number: 200405213
// Date: 2021-11-14
// CS115-Assignment 3&4_Task Four


// Task Four: Pointer
// do instantiation to create Cat and Dog instances. In your
// instantiation, please create pointers for Cat and dog.

#include "Animal4.h"

int main()
{
  Dog dog1("CS", 115.0, "black"); //instantiating a Dog instance
  Cat cat1("UR", 2021.0, "orange"); //instantiating a Cat instance

  Dog* dogPtr = &dog1; //creating a pointer for the Dog instance
  Cat* catPtr = &cat1; //creating a pointer for the Cat instance

  dogPtr->bark(); //using the pointer to the Dog instance to invoke the member function bark
  catPtr->meow(); //using the pointer to the Cat instance to invoke the member function meow


  return 0;
}
