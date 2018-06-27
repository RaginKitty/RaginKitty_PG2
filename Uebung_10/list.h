#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include "article.h"

class List{
public:
    article* first;
public:
    List();
    List(const List& old);
    virtual void printout();
    virtual void savetofile(const char* fHandle);
    virtual void addelement();
    virtual void loadfromfile(const char* fHandle);
    void searchid();
    void searchdescr();
};

class FoodList: public List{
public:
    FoodList();
    FoodList(const FoodList& old);
    virtual void addelement();
    virtual void loadfromfile(const char* fHandle);
};

class BookList: public List{
public:
    BookList();
    BookList(const BookList& old);
    virtual void addelement();
    virtual void loadfromfile(const char* fHandle);
    void searchauthor();
};

class MaterialList: public List{
public:
    MaterialList();
    MaterialList(const MaterialList& old);
    virtual void addelement();
    virtual void loadfromfile(const char* fHandle);
};

#endif // LIST_H_INCLUDED
