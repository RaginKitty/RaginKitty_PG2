#ifndef GFXTRIANGLE_H_INCLUDED
#define GFXTRIANGLE_H_INCLUDED

#include "GfxObject.h"

class GfxTriangle: public GfxObject{
    public:
        GfxTriangle(unsigned int xCoord, unsigned int yCoord, unsigned int heightNum);
        void draw(char table[50][50]);
        void remove(char table[50][50]);
    private:
        void helper(char table[50][50], char x);
};

#endif // GFXTRIANGLE_H_INCLUDED
