#ifndef ARTICLE_H_INCLUDED
#define ARTICLE_H_INCLUDED

class article{
protected:
    char* descr;
    int id;
    int stock;
    int minstock;
    float price;

public:
    article* next;

public:
    article();
    article(char* dscr, int ident, int stck, int minstck, float prce);
    virtual void input();
    virtual void printout();
    virtual void savetofile(const char* fHandle) = 0;
    virtual void loadfromfile(const char* fHandle);
    void addstock(int delta);
    void removestock(int delta);
};

class food: public article{
protected:
    char* supplier;
    int storeability;
public:
    food();
    food(char* dscr, int ident, int stck, int minstck, float prce, char* suppler, int strability);
    virtual void input();
    virtual void printout();
    virtual void savetofile(const char* fHandle);
    virtual void loadfromfile(const char* fHandle);
};

class book: public article{
protected:
    char* publisher;
    char* author;
public:
    book();
    book(char* dscr, int ident, int stck, int minstck, float prce, char* pblisher, char* authr);
    virtual void input();
    virtual void printout();
    virtual void savetofile(const char* fHandle);
    virtual void loadfromfile(const char* fHandle);
};

class material: public article{
protected:
    char* supplier;
    float weight;
public:
    material();
    material(char* dscr, int ident, int stck, int minstck, float prce, char* suppler, float wght);
    virtual void input();
    virtual void printout();
    virtual void savetofile(const char* fHandle);
    virtual void loadfromfile(const char* fHandle);
};

#endif // ARTICLE_H_INCLUDED
