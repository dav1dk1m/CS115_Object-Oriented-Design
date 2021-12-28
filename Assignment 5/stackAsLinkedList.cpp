// CS115-Assignment 5

// File: stackAsLinkedList.cpp
// implement the code in four member functions
// 1. Desctructor of StackAslinkedList: ~StackAsLinkedList () 
// 2. Push function: Push (Rainfall& rainfall)
// 3. Pop function: Pop ()
// 4. Top function: Top () const

#include "stackAsLinkedList.h"

StackAsLinkedList::StackAsLinkedList () :
    list ()
    {}

void StackAsLinkedList::Purge ()
{
    list.Purge (); //traverses all the elements in the list and deletes each of them one by one
    count = 0;  
}

StackAsLinkedList::~StackAsLinkedList () 
{ 
	Purge(); //Deletes the elements in the container
}


void StackAsLinkedList::Push (Rainfall& rainfall) //Push adds a data value to the top of the stack.
{
    list.Prepend (&rainfall); //  LinkedList<Rainfall*> list;  prepend a list of Raillfall class
    ++count;                  //  list.Prepend adds a new element at the front-end of the list
}

void StackAsLinkedList::Pop () //removes (pop-out) the element from the top of the stack
{
    if (count == 0)            // if no elements found in the container or eqaul to 0
    {
      throw domain_error ("Empty Stack"); //every element is removed and print out Empty Stack
    }							
		
    Rainfall& result = *list.First(); //returns an element stored in the first ListElement
    list.Extract (&result);     		// searches for elements and deletes that elements
    --count;                        // removes element from the top and reduce stack by one
}

Rainfall& StackAsLinkedList::Top () const //Top function is referncing the top element of the stack 
{
    if (count == 0)                   // if no elements found in the container or eqaul to 0
    {                                 
      throw domain_error ("Empty Stack");  //every element is removed and print out Empty Stack
    }
    	
    return *list.First (); // returns an element stored in the first ListElement
}
