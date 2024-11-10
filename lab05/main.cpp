#include <iostream>
#include "sortedtype.cpp"
#include "timestamp.h"
using namespace std;

int main()
{
    SortedType<int> list1;

    cout << list1.LengthIs() << endl;

    list1.InsertItem(5);
    list1.InsertItem(7);
    list1.InsertItem(4);
    list1.InsertItem(2);
    list1.InsertItem(1);

    int temp;
    //cout << list1.LengthIs() << endl;
    for(int i=0; i<list1.LengthIs(); i++)
    {
        list1.GetNextItem(temp);
        cout << temp << " ";
    }
    cout << endl;
    list1.ResetList();

    temp = 6;
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

    if(list1.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;


    SortedType<timeStamp> list2;

    timeStamp t1(15, 34, 23);
    timeStamp t2(13, 13, 02), t3(43, 45, 12), t4(25, 36, 17);
    timeStamp t5(52, 02, 20);

    list2.InsertItem(t1);
    list2.InsertItem(t2);
    list2.InsertItem(t3);
    list2.InsertItem(t4);
    list2.InsertItem(t5);

    timeStamp deletedTime(25, 36, 17);

    list2.DeleteItem(deletedTime);

    for(int i=0; i<list2.LengthIs(); i++)
    {
        list2.GetNextItem(deletedTime);
        deletedTime.print();
    }

}
