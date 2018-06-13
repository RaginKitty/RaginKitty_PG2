#include "GfxRectangle.h"

GfxRectangle::GfxRectangle(unsigned int xCoord, unsigned int yCoord, unsigned int heightNum, unsigned int widthNum) :
    GfxObject(xCoord, yCoord, heightNum), width(widthNum){}

void GfxRectangle::helper(char table[50][50], char x){
    if(coordY < 50 && coordX < 50 && (coordY + height) < 50 && (coordX + width) < 50){
        for(unsigned int i = coordY; i < (coordY + height); ++i){
            for(unsigned int j = coordX; j < (coordX + width); ++j){
                if( x == '*')
                    table[i][j] = '*';
                else if(x == ' ')
                    table[i][j] = ' ';
            }
        }
    }
}

void GfxRectangle::draw(char table[50][50]){
    std::cout << "Init drawing:" << std::endl;
    GfxRectangle::helper(table, '*');
    std::cout << "Drawing terminated!" << std::endl;

}

void GfxRectangle::remove(char table[50][50]){
    std::cout << "Init removing:" << std::endl;
    GfxRectangle::helper(table, ' ');
    std::cout << "Removing terminated!" << std::endl;
}

