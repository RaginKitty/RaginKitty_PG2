#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include "article.h"
#include "list.h"
using namespace std;

//TODO

int main()
{
/*
    food A1;
    A1.input();

    food A2;
    A2.input();

    food A3;
    A3.input();

    A1.printout();
    A2.printout();
    A3.printout();
*/

    FoodList Listf;
    BookList Listb;
    MaterialList Listm;


    cout<<"---food test---\n";

    Listf.loadfromfile("food.txt");
    //Listf.first = &A1;
    //Listf.first->next = &A2;
    //Listf.first->next->next = &A3;
    Listf.printout();

    List* plist=&Listf;
    plist->printout();
    plist->savetofile("foodtest.txt");


    /*
    cout<<"---book test---\n";
    //Listb.loadfromfile("books.txt");
    Listb.first = &A1;
    A1.next = &A2;
    A2.next = &A3;

    Listb.printout();
    List* plist;
    plist=&Listb;
    plist->printout();
    plist->savetofile("booktest.txt");
    */

    /*
    cout<<"---material test---\n";
    Listm.loadfromfile("materials.txt");
    Listm.printout();
    plist=&Listm;
    plist->printout();
    */
}
