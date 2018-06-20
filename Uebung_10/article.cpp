#include "article.h"+
#include <iostream>

article::article():descr(0), id(0), stock(0), minstock(0), price(0){}

article::article(char* dscr, int ident, int stck, int minstck, float prce):
        descr(dscr), id(ident), stock(stck), minstock(minstck), price(prce){}

void article::input(){}
void article::printout(){}
void article::savetofile(){}
void article::loadfromfile(){}
void article::addstock(int delta){
    stock = stock + delta;
}
void article::removestock(int delta){
    if(stock - delta >= minstock)
        stock = stock - delta;
    else{
        std::cout << "Can't remove that much stock" << std::endl;
    }
}



food::food(): article(), supplier(0), storeability(0){}

food::food(char* dscr, int ident, int stck, int minstck, float prce, char* suppler, int strability):
        article(dscr, ident, stck, minstck, prce), supplier(suppler), storeability(strability){}

void food::input(){}
void food::printout(){}
void food::savetofile(){}
void food::loadfromfile(){}



book::book(): article(), publisher(0), author(0){}

book::book(char* dscr, int ident, int stck, int minstck, float prce, char* pblisher, char* authr):
        article(dscr, ident, stck, minstck, prce), publisher(pblisher), author(authr){}

void book::input(){}
void book::printout(){}
void book::savetofile(){}
void book::loadfromfile(){}



material::material(): article(), supplier(0), weight(0){}

material::material(char* dscr, int ident, int stck, int minstck, float prce, char* suppler, float wght):
        article(dscr, ident, stck, minstck, prce), supplier(suppler), weight(wght){}

void material::input(){}
void material::printout(){}
void material::savetofile(){}
void material::loadfromfile(){}
