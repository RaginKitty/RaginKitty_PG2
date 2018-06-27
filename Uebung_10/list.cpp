#include "list.h"
#include <iostream>
#include <fstream>

List::List(): first(0){}

List::List(const List& old):first(old.first){}

void List::printout(){
    article* pointer = first;
    while(pointer != 0){
        pointer->printout();
        pointer = pointer->next;
    }
}
void List::addelement(){}
void List::loadfromfile(const char* fHandle){
    article* particle = first;
    std::ifstream fs(fHandle);
    if(fs){
        while(particle != 0){
            particle->loadfromfile(fHandle);
            particle = particle->next;
        }
    }
}
void List::savetofile(const char* fHandle){
    article* particle = first;
    std::ofstream fs(fHandle, std::ios::trunc);
    if(fs){
        fs << fHandle << ":" << std::endl;
        fs.close();
        while(particle != 0){
            particle->savetofile(fHandle);
            particle = particle->next;
        }
    }
}
void List::searchid(){}
void List::searchdescr(){}

FoodList::FoodList(): List() {}
FoodList::FoodList(const FoodList& old): List(old){}
void FoodList::addelement(){}
void FoodList::loadfromfile(const char* fHandle){
    food* fparticle = new food;
    article* particle = (article*)fparticle;
    particle = first;
    std::ifstream fs(fHandle);
    if(fs){
        while(particle != 0){
            particle->loadfromfile(fHandle);
            particle = particle->next;
        }
    }
}

BookList::BookList(): List(){}
BookList::BookList(const BookList& old): List(old){}
void BookList::addelement(){}
void BookList::loadfromfile(const char* fHandle){
    book* bparticle = new book;
    article* particle = (article*)bparticle;
    particle = first;
    std::ifstream fs(fHandle);
    if(fs){
        while(particle != 0){
            particle->loadfromfile(fHandle);
            particle = particle->next;
        }
    }
}
void BookList::searchauthor(){}

MaterialList::MaterialList(): List(){}
MaterialList::MaterialList(const MaterialList& old): List(old){}
void MaterialList::addelement(){}
void MaterialList::loadfromfile(const char* fHandle){
    material* mparticle = new material;
    article* particle = (article*)mparticle;
    particle = first;
    std::ifstream fs(fHandle);
    if(fs){
        while(particle != 0){
            particle->loadfromfile(fHandle);
            particle = particle->next;
        }
    }
}
