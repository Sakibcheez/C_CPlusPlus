#include "unsortedtype.h"
#include <iostream>

template <class ItemType>
UnsortedType<ItemType>::UnsortedType()
{
    length = 0;
    currentPos = -1;
}

template <class ItemType>
void UnsortedType<ItemType>::MakeEmpty()
{
    length = 0;
}

template <class ItemType>
bool UnsortedType<ItemType>::IsFull()
{
    return (length == MAX_ITEMS);
}

template <class ItemType>
int UnsortedType<ItemType>::LengthIs()
{
    return length;
}

template <class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType item)
{
    if(!IsFull())
    {
        info[length] = item;
        length++;
    }
    else
    {
        std::cout << "List is full!" << std::endl;
    }
}

template <class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item)
{
    int location = 0;
    while (location < length && item != info[location])
        location++;
    if(location < length)
    {
        info[location] = info[length - 1];
        length--;
    }
}

template <class ItemType>
void UnsortedType<ItemType>::RetrieveItem(ItemType& item, bool& found)
{
    int location = 0;
    found = false;
    while (location < length && !found)
    {
        if(item == info[location])
        {
            found = true;
            item = info[location];
        }
        else
        {
            location++;
        }
    }
}

template <class ItemType>
void UnsortedType<ItemType>::ResetList()
{
    currentPos = -1;
}

template <class ItemType>
void UnsortedType<ItemType>::GetNextItem(ItemType& item)
{
    currentPos++;
    item = info[currentPos];
}

// Explicit instantiation for int type
template class UnsortedType<int>;

