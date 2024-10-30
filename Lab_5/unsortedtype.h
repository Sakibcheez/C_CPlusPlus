const int MAX_ITEMS = 5;

template <class ItemType>

class UnsortedType
{
public :
    UnsortedType();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType&, bool&);

    // The & after ItemType indicates that this parameter is passed by reference,
    //meaning the function operates directly on the original item rather than a copy.
    //By passing ItemType by reference, any changes made to this parameter within the function will affect
    //the original variable outside the function

    void ResetList();
    void GetNextItem(ItemType&);
private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};
