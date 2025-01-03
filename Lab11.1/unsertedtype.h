#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

template <class ItemType>
class UnsortedType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };

public:
    UnsortedType();
    ~UnsortedType();
    bool IsFull();
    int LengthIs();
    void MakeEmpty();
    void RetrieveItem(ItemType&, bool&);
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void ResetList();
    void GetNextItem(ItemType&);
    NodeType* mergeSortedLists(NodeType* list1, NodeType* list2);
    void printList(NodeType* head);  // Member function to print the list

private:
    NodeType* listData;
    int length;
    NodeType* currentPos;
};

#endif // UNSORTEDTYPE_H_INCLUDED
