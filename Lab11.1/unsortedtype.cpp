#include <iostream>
#include "UnsertedType.h"
using namespace std;

template <class ItemType>
UnsortedType<ItemType>::UnsortedType()
{
    length = 0;
    listData = nullptr;
    currentPos = nullptr;
}

template <class ItemType>
UnsortedType<ItemType>::~UnsortedType()
{
    MakeEmpty();
}

template <class ItemType>
int UnsortedType<ItemType>::LengthIs()
{
    return length;
}

template<class ItemType>
bool UnsortedType<ItemType>::IsFull()
{
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}

template <class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType item)
{
    NodeType* location = new NodeType;
    location->info = item;
    location->next = listData;
    listData = location;
    length++;
}

template <class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item)
{
    NodeType* location = listData;
    NodeType* tempLocation;
    if (item == listData->info)
    {
        tempLocation = location;
        listData = listData->next;
    }
    else
    {
        while (!(item == (location->next)->info))
            location = location->next;
        tempLocation = location->next;
        location->next = (location->next)->next;
    }
    delete tempLocation;
    length--;
}

template <class ItemType>
void UnsortedType<ItemType>::RetrieveItem(ItemType& item, bool& found)
{
    NodeType* location = listData;
    bool moreToSearch = (location != nullptr);
    found = false;
    while (moreToSearch && !found)
    {
        if (item == location->info)
            found = true;
        else
        {
            location = location->next;
            moreToSearch = (location != nullptr);
        }
    }
}

template <class ItemType>
void UnsortedType<ItemType>::MakeEmpty()
{
    NodeType* tempPtr;
    while (listData != nullptr)
    {
        tempPtr = listData;
        listData = listData->next;
        delete tempPtr;
    }
    length = 0;
}

template <class ItemType>
void UnsortedType<ItemType>::ResetList()
{
    currentPos = nullptr;
}

template <class ItemType>
void UnsortedType<ItemType>::GetNextItem(ItemType& item)
{
    if (currentPos == nullptr)
        currentPos = listData;
    else
        currentPos = currentPos->next;
    item = currentPos->info;
}

template <class ItemType>
typename UnsortedType<ItemType>::NodeType*
UnsortedType<ItemType>::mergeSortedLists(NodeType* list1, NodeType* list2)
{
    NodeType* mergedList = nullptr;
    NodeType* tail = nullptr;

    // Merge the two lists
    while (list1 != nullptr && list2 != nullptr)
    {
        NodeType* newNode = new NodeType;
        if (list1->info < list2->info)
        {
            newNode->info = list1->info;
            list1 = list1->next;
        }
        else
        {
            newNode->info = list2->info;
            list2 = list2->next;
        }

        if (mergedList == nullptr)
        {
            mergedList = newNode;
            tail = mergedList;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Append any remaining elements from list1
    while (list1 != nullptr)
    {
        NodeType* newNode = new NodeType;
        newNode->info = list1->info;
        list1 = list1->next;

        tail->next = newNode;
        tail = newNode;
    }

    // Append any remaining elements from list2
    while (list2 != nullptr)
    {
        NodeType* newNode = new NodeType;
        newNode->info = list2->info;
        list2 = list2->next;

        tail->next = newNode;
        tail = newNode;
    }

    return mergedList;
}

template <class ItemType>
void UnsortedType<ItemType>::printList(NodeType* head)
{
    NodeType* temp = head;
    while (temp)
    {
        cout << temp->info << " ";
        temp = temp->next;
    }
    cout << endl;
}
