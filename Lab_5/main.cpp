#include <iostream>
#include "unsortedtype.cpp"
#include "studentinfo.h"

using namespace std;

// lab 4 unsorted

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



// student info starts


    UnsortedType<studentInfo> list2;

    studentInfo s1(15234, "Jon", 2.6), s2(13732, "Tyrion", 3.9);
    studentInfo s3(13569, "Sandor", 1.2), s4(15467, "Ramsey", 3.1);
    studentInfo s5(16285, "Arya", 3.1);

    list2.InsertItem(s1);
    list2.InsertItem(s2);
    list2.InsertItem(s3);
    list2.InsertItem(s4);
    list2.InsertItem(s5);


    studentInfo t;
    for(int i=0; i<list2.LengthIs(); i++)
    {
        list2.GetNextItem(t);// t = s1, t=s2, t=s3
        t.print();// s1.print(), s2.print()
    }
    cout << endl;
    list2.ResetList();


    studentInfo deletedStudent(15467, "", 0);
    list2.DeleteItem(deletedStudent);

    for(int i=0; i<list2.LengthIs(); i++)
    {
        list2.GetNextItem(t);// t = s1, t=s2, t=s3
        t.print();// s1.print(), s2.print()
    }
    cout << endl;
    list2.ResetList();
/*
    // Retrieve student with ID 13569
    studentInfo searchStudent(13569, "", 0);  // Only ID is needed for search
    bool found = false;

    list2.RetrieveItem(searchStudent, found);

    if(found)
    {
        cout << "Record found: ";
        searchStudent.print();
    }
    else
    {
        cout << "Record with ID 13569 is not found." << endl;
    }
*/


}
