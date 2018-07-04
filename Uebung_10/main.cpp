#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include "article.h"
#include "list.h"

int main()
{

    FoodList Listf;
    BookList Listb;
    MaterialList Listm;



    std::cout<<"---food test---\n";
    Listf.loadfromfile("food.txt");
    Listf.printout();

    List* plist=&Listf;
    plist->printout();
    plist->savetofile("foodtest.txt");


    /*
    std::cout<<"---book test---\n";
    Listb.loadfromfile("books.txt");
    Listb.printout();
    plist=&Listb;
    plist->printout();
    /*

    /*
    std::cout<<"---material test---\n";
    Listm.loadfromfile("materials.txt");
    Listm.printout();
    plist=&Listm;
    plist->printout();
    */
}
