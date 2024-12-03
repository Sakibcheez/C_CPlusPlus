#include <iostream>
#include "binarysearchtree.cpp"
using namespace std;

int main()
{
    TreeType<int> tree;

    if(tree.IsEmpty())
        cout << "Tree is empty" << endl;
    else
        cout << "Tree is not empty" << endl;

    // 4 9 2 7 3 11 17 0 5 1

    tree.InsertItem(4);
    tree.InsertItem(9);
    tree.InsertItem(2);
    tree.InsertItem(7);
    tree.InsertItem(3);
    tree.InsertItem(11);
    tree.InsertItem(17);
    tree.InsertItem(0);
    tree.InsertItem(5);
    tree.InsertItem(1);

    if(tree.IsEmpty())
        cout << "Tree is empty" << endl;
    else
        cout << "Tree is not empty" << endl;

    cout << tree.LengthIs() << endl;

    int temp;
    bool found;

    tree.RetrieveItem(temp = 9, found);
    if(found)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    tree.RetrieveItem(temp = 13, found);
    if(found)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;
//inorder
    tree.ResetTree(IN_ORDER);
    found = false;
    while(found != true)
    {
        tree.GetNextItem(temp, IN_ORDER, found);
        cout << temp << " ";
    }
    cout << endl;
// preorder
    tree.ResetTree(PRE_ORDER);
    found = false;
    while(found != true)
    {
        tree.GetNextItem(temp, PRE_ORDER, found);
        cout << temp << " ";
    }
    cout << endl;
//post order
    tree.ResetTree(POST_ORDER);
    found = false;
    while(found != true)
    {
        tree.GetNextItem(temp, POST_ORDER, found);
        cout << temp << " ";
    }
    cout << endl;
//print
    tree.Print();

    // empty
    tree.MakeEmpty();

    cout << endl ;

    if(tree.IsEmpty())
        cout << "Tree is empty" << endl;
    else
        cout << "Tree is not empty" << endl;

}
