#include "dynarr.h"
#include <iostream>

using namespace std;

dynArr::dynArr()
{
    data = NULL;
    size = 0;
}
dynArr::dynArr(int s)
{
    data = new int[s];
    size = s;
}
dynArr::~dynArr()
{
    delete [] data;
}
int dynArr::getValue(int index)
{
    return data[index];
}
void dynArr::setValue(int index, int value)
{
    data[index] = value;
}
void dynArr::allocate(int additionalSize)//2
{
    int *temp = new int[size+additionalSize];//7
    for(int i=0; i<size; i++)
    {
        temp[i] = data[i];
    }
    delete [] data;
    data = temp;
    temp = NULL;
    size += additionalSize;

}

