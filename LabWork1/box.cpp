#include "box.h"

Box::Box()
{
    int height = width = depth = 0;
}

Box::Box(int h, int w,int d)
{
    height = h;
    width = w;
    depth = d;
}

int Box::getVolume()
{
    return height*width*depth;
}
