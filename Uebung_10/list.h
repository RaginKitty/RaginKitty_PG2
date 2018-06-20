#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include "article.h"

class list{
protected:
    article* first;
public:
    virtual void printout();
    virtual void savetofile();
    void searchid();
    void searchdescr();
};

class FoodList: public list{
public:
    void addelement();
    void loadfromfile();
};

class BookList: public list{
public:
    void addelement();
    void loadfromfile();
    void searchauthor();
};

class MaterialList: public list{
public:
    void addelement();
    void loadfromfile();
};

#endif // LIST_H_INCLUDED
