#include <iostream>
#include "unsortedtype.cpp"
using namespace std;

int main()
{
    UnsortedType<int> list1;

    list1.InsertItem(5);
    list1.InsertItem(7);
    list1.InsertItem(6);
    list1.InsertItem(9);

    int temp;
    for(int i=0; i<list1.LengthIs(); i++)
    {
        list1.GetNextItem(temp);
        cout << temp << " ";
    }
    cout << endl;
    list1.ResetList();

    cout << list1.LengthIs() << endl;

    list1.InsertItem(1);

    for(int i=0; i<list1.LengthIs(); i++)
    {
        list1.GetNextItem(temp);
        cout << temp << " ";
    }
    cout << endl;
    list1.ResetList();

    temp = 4;
    bool flag;
    list1.RetrieveItem(temp, flag);
    if(flag)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    temp = 5;
    list1.RetrieveItem(temp, flag);
    if(flag)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    temp = 9;
    list1.RetrieveItem(temp, flag);
    if(flag)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    temp = 10;
    list1.RetrieveItem(temp, flag);
    if(flag)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    if(list1.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;

    list1.DeleteItem(5);

    if(list1.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;

    list1.DeleteItem(1);

    for(int i=0; i<list1.LengthIs(); i++)
    {
        list1.GetNextItem(temp);
        cout << temp << " ";
    }
    cout << endl;
    list1.ResetList();

    list1.DeleteItem(6);
    for(int i=0; i<list1.LengthIs(); i++)
    {
        list1.GetNextItem(temp);
        cout << temp << " ";
    }
    cout << endl;
    list1.ResetList();
}
