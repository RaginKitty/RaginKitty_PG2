#include "article.h"
#include <iostream>
#include <fstream>

article::article():id(0), stock(0), minstock(0), price(0), next(0){
    descr = new char[20];
}

article::article(char* dscr, int ident, int stck, int minstck, float prce):
    descr(dscr), id(ident), stock(stck), minstock(minstck), price(prce), next(0){
    descr = new char[20];
    descr = dscr;
    }

void article::input(){
    std::cout << "Insert description of article: ";
    std::cin >> descr;
    std::cout << "Insert ID of article: ";
    std::cin >> id;
    std::cout << "Amount of items of this article in stock: ";
    std::cin >> stock;
    std::cout << "Insert minimum amount of items of this article in stock: ";
    std::cin >> minstock;
    std::cout << "Insert price of this article: ";
    std::cin >> price;
}
void article::printout(){
    std::cout << std::endl << "Description: " << descr << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Stock: " << stock << std::endl;
    std::cout << "Minstock: " << minstock << std::endl;
    std::cout << "Price: " << price << std::endl;
}
void article::savetofile(const char* fHandle){
    std::ofstream fs(fHandle, std::ios::app);
        if(!fs){
            std::cout << "File couldn't be opened" << std::endl;
        }
        else{
            fs << "***" << std::endl;
            fs << descr << std::endl;
            fs << id << std::endl;
            fs << stock << std::endl;
            fs << minstock << std::endl;
            fs << price << std::endl;
            fs.close();
        }
}

void article::loadfromfile(std::ifstream& fs){
            fs >> descr;
            fs >> id;
            fs >> stock;
            fs >> minstock;
            fs >> price;
}
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



food::food(): article(), storeability(0){
    supplier = new char[20];
}

food::food(char* dscr, int ident, int stck, int minstck, float prce, char* suppler, int strability):
    article(dscr, ident, stck, minstck, prce), storeability(strability){
    supplier = new char[20];
    supplier = suppler;
    }

void food::input(){
    article::input();
    std::cout << "Insert name of supplier: ";
    std::cin >> supplier;
    std::cout << "Insert maximum number of articles to store: ";
    std::cin >> storeability;
    std::cout << std::endl;
}
void food::printout(){
    article::printout();
    std::cout << "Supplier: " << supplier << std::endl;
    std::cout << "Storeability: " << storeability << std::endl;
}
void food::savetofile(const char* fHandle){
    article::savetofile(fHandle);
    std::ofstream fs(fHandle, std::ios::app);
        if(!fs){
            std::cout << "File couldn't be opened" << std::endl;
        }
        else{
            fs << supplier << std::endl;
            fs << storeability << std::endl;
            fs.close();
        }
}
void food::loadfromfile(std::ifstream& fs){
    article::loadfromfile(fs);
    fs >> supplier;
    fs >> storeability;
}



book::book(): article(){
    publisher = new char[20];
    author = new char[20];
}

book::book(char* dscr, int ident, int stck, int minstck, float prce, char* pblisher, char* authr):
    article(dscr, ident, stck, minstck, prce){
    publisher = new char[20];
    publisher = pblisher;
    author = new char[20];
    author = authr;
    }

void book::input(){
    article::input();
    std::cout << "Insert name of publisher: ";
    std::cin >> publisher;
    std::cout << "Insert name of author: ";
    std::cin >> author;
    std::cout << std::endl;
}
void book::printout(){
    article::printout();
    std::cout << "Publisher: " << publisher << std::endl;
    std::cout << "Author: " << author << std::endl;
}
void book::savetofile(const char* fHandle){
    article::savetofile(fHandle);
    std::ofstream fs(fHandle, std::ios::app);
        if(!fs){
            std::cout << "File couldn't be opened" << std::endl;
        }
        else{
            fs << publisher << std::endl;
            fs << author << std::endl;
            fs.close();
        }
}
void book::loadfromfile(std::ifstream& fs){
    article::loadfromfile(fs);
    fs >> publisher;
    fs >> author;
}



material::material(): article(), weight(0){
    supplier = new char[20];
}

material::material(char* dscr, int ident, int stck, int minstck, float prce, char* suppler, float wght):
    article(dscr, ident, stck, minstck, prce), weight(wght){
    supplier = new char[20];
    supplier = suppler;
    }

void material::input(){
    article::input();
    std::cout << "Insert name of supplier: ";
    std::cin >> supplier;
    std::cout << "Insert weight of article: ";
    std::cin >> weight;
    std::cout << std::endl;
}
void material::printout(){
    article::printout();
    std::cout << "Supplier: " << supplier << std::endl;
    std::cout << "Weight: " << weight << std::endl;
}
void material::savetofile(const char* fHandle){
    article::savetofile(fHandle);
    std::ofstream fs(fHandle, std::ios::app);
        if(!fs){
            std::cout << "File couldn't be opened" << std::endl;
        }
        else{
            fs << supplier << std::endl;
            fs << weight << std::endl;
            fs.close();
        }
}
void material::loadfromfile(std::ifstream& fs){
    article::loadfromfile(fs);
    fs >> supplier;
    fs >> weight;
}
