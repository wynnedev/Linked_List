#include <iostream>
#include <utility>
#include "tnode.h"
// **********************************************************
// * Name:  tlist.h.                                        *
// * Description:   Starter file for doubly-linked list.    *
// *    This is a templated list class designed to use the. *
// *    node class to store multiple occurances of the data *
// *    of type T.                                          *
// * Last Modifed by: Dr. David A. Gaitros                  *
// * Date: 12/8/2019                                        *
// **********************************************************

template <typename T>
class TList
{
public:
    TList();
    bool IsEmpty() const;		// Checks to see whether list is empty
    int GetSize() const;			// Return the size of the list
    void InsertFront(const T& d);	// Insert data d as first element
    void InsertBack(const T& d);		// Insert data d as last element
    void RemoveFront();			// Remove first element of list
    T& GetFirst() const;			// Return first element of list
    T& GetLast() const;			// Return last element of list

    // **********************************************************
    // * Print list contents in order, separated by given       *
    // * delimiter.                                             *
    // **********************************************************

   void Print(std::ostream& os, char delim = ' ') const;

private:
    Node<T>* first;
    Node<T>* last;
    int size;
    static T dummy;
};

#include "tlist.cpp"

