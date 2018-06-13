#ifndef GFXOBJECT_H_INCLUDED
#define GFXOBJECT_H_INCLUDED

#include <iostream>

class GfxObject{
    protected:
        int coordX;
        int coordY;
        int height;
    public:
        GfxObject();
        GfxObject(unsigned int xCoord, unsigned int yCoord, unsigned int heightNum);
        void draw(char table[50][50]);
        void remove(char table[50][50]);
        void move(int delta_x, int delta_y);
};

#include "GfxRectangle.h"
#include "GfxTriangle.h"

#endif // GFXOBJECT_H_INCLUDED

