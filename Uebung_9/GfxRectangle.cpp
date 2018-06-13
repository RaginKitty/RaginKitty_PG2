#include "GfxRectangle.h"

GfxRectangle::GfxRectangle(unsigned int xCoord, unsigned int yCoord, unsigned int heightNum, unsigned int widthNum) :
    GfxObject(xCoord, yCoord, heightNum), width(widthNum){}

void GfxRectangle::helper(char table[50][50], char x){
    if(coordY < 50 && coordX < 50){
        for(int i = coordY; (i < (coordY + height) && i < 50); ++i){
            for(int j = coordX; (j < (coordX + width) && j < 50); ++j){
                if(i >= 0 && j >= 0)
                    table[i][j] = x;
            }
        }
    }
}

void GfxRectangle::draw(char table[50][50]){
    //std::cout << "Init drawing:" << std::endl;
    GfxRectangle::helper(table, '*');
    //std::cout << "Drawing terminated!" << std::endl;

}

void GfxRectangle::remove(char table[50][50]){
    //std::cout << "Init removing:" << std::endl;
    GfxRectangle::helper(table, ' ');
    //std::cout << "Removing terminated!" << std::endl;
}

