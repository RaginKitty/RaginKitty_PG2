# include "GfxTriangle.h"

GfxTriangle::GfxTriangle(unsigned int xCoord, unsigned int yCoord, unsigned int heightNum) :
    GfxObject(xCoord, yCoord, heightNum){}

void GfxTriangle::helper(char table[50][50], char x){
    if(coordY < 50 && coordX < 50 && (coordY + (height-1)) < 50 && (coordX + (height -1) < 50) && (coordX - (height -1) >= 0)){
        unsigned int left = coordX;
        unsigned int right = coordX;
        for(unsigned int i = coordY; i < (coordY + height); ++i){
            if( x == '*'){
                for(unsigned int help_Int = left; help_Int <= right; ++help_Int)
                    table[i][help_Int] = '*';
            }
            else if(x == ' '){
                for(unsigned int help_Int = left; help_Int <= right; ++help_Int)
                    table[i][help_Int] = ' ';
            }
            --left;
            ++right;
        }
    }
}

void GfxTriangle::draw(char table[50][50]){
    std::cout << "Init drawing:" << std::endl;
    GfxTriangle::helper(table, '*');
    std::cout << "Drawing terminated!" << std::endl;

}

void GfxTriangle::remove(char table[50][50]){
    std::cout << "Init removing:" << std::endl;
    GfxTriangle::helper(table, ' ');
    std::cout << "Removing terminated!" << std::endl;
}


