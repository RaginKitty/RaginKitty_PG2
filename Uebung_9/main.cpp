#include <iostream>
#include "GfxObject.h"

using namespace std;

void deleteScreen(char [50][50]);
void printScreen(char [50][50]);

int main()
{
    char screen[50][50]; //use first[] for y, use second [] for x

    deleteScreen(screen);

    GfxRectangle r1(5,35,8,8); //x, y ,height, width
    r1.draw(screen);

    GfxTriangle d1(25,32,5); //x, y, height
    d1.draw(screen);

    printScreen(screen);

    r1.remove(screen);
    r1.move(10,0);
    r1.draw(screen);
    printScreen(screen);

    //r1.remove(screen);
    //printScreen(screen);

    return 0;
}

void deleteScreen(char table[50][50]){
    for(int i = 0; i < 50; ++i){
        for(int j = 0; j < 50; ++j){
            table[i][j] = ' ';
        }
    }
    return;
}

void printScreen(char table[50][50]){
    for(int i = 0; i < 50; ++i){
        for(int j = 0; j < 50; ++j){
            std::cout << table[i][j];
        }
        std::cout << std::endl;
    }
    return;
}

