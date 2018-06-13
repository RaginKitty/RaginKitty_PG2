# include "GfxTriangle.h"

GfxTriangle::GfxTriangle(unsigned int xCoord, unsigned int yCoord, unsigned int heightNum) :
    GfxObject(xCoord, yCoord, heightNum){}

void GfxTriangle::helper(char table[50][50], char x){
    if(coordY < 50 && coordX < 50){
        int left = coordX;
        int right = coordX;
        for(int i = coordY; (i < (coordY + height) && i < 50); ++i){
            for(int j = left; (j <= right && j <50); ++j)
                if(i >= 0 && j >= 0)
                    table[i][j] = x;
            --left;
            ++right;
        }
    }
}

void GfxTriangle::draw(char table[50][50]){
    //std::cout << "Init drawing:" << std::endl;
    helper(table, '*');
    //std::cout << "Drawing terminated!" << std::endl;

}

void GfxTriangle::remove(char table[50][50]){
    //std::cout << "Init removing:" << std::endl;
    helper(table, ' ');
    //std::cout << "Removing terminated!" << std::endl;
}


