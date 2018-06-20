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
  FoodList Listf;
  BookList Listb;
  MaterialList Listm;

  cout<<"---food test---\n";

  Listf.loadfromfile("food.txt");
  Listf.printout();

  List* plist=&Listf;
  plist->printout();
  plist->savetofile("foodtest.txt");

  /*
  cout<<"---book test---\n";
  Listb.loadfromfile("books.txt");
  Listb.printout();
  plist=&Listb;
  plist->printout();

  cout<<"---material test---\n";
  Listm.loadfromfile("materials.txt");
  Listm.printout();
  plist=&Listm;
  plist->printout();
  */
}
