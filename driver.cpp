#include <iostream>
#include <string>

#include "tlist.h"

#define OS std::cout

int main(){
    TList<int> list;
    list.Print(OS);
    std::cout << "IsEmpty " <<  list.IsEmpty() << std::endl;
    int i = 0;
    list.InsertFront(1);
    list.InsertFront(2);
    list.InsertFront(3);
    list.InsertFront(4);
    list.InsertFront(5);
    list.Print(OS);

    list.InsertBack(1);
    list.InsertBack(2);
    list.InsertBack(3);
    list.InsertBack(4);
    list.InsertBack(5);
    list.Print(OS);

    list.RemoveFront();
    list.Print(OS);

    std::cout << "Program Terminated...";
}