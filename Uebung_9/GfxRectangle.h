#ifndef GFXRECTANGLE_H_INCLUDED
#define GFXRECTANGLE_H_INCLUDED

#include "GfxObject.h"

class GfxRectangle: public GfxObject{
    int width;
    public:
        GfxRectangle(unsigned int xCoord, unsigned int yCoord, unsigned int heightNum, unsigned int widthNum);
        void draw(char table[50][50]);
        void remove(char table[50][50]);
    private:
        void helper(char table[50][50], char x);
};

#endif // GFXRECTANGLE_H_INCLUDED

