#include "GfxObject.h"

GfxObject::GfxObject():
    coordX(0), coordY(0), height(0){}

GfxObject::GfxObject(unsigned int xCoord, unsigned int yCoord, unsigned int heightNum):
    coordX(xCoord), coordY(yCoord), height(heightNum){}

void GfxObject::move(int delta_x, int delta_y){
    coordX = coordX + delta_x;
    coordY = coordY + delta_y;
}
