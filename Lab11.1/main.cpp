#include <iostream>
#include "UnsertedType.h"

using namespace std;

int main()
{
    UnsortedType<int> list1;
    UnsortedType<int> list2;

    int m, n;

    // Read the first sequence
    cin >> m;
    for (int i = 0; i < m; ++i)
    {
        int value;
        cin >> value;
        list1.InsertItem(value);  // Insert into the first list
    }

    // Read the second sequence
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int value;
        cin >> value;
        list2.InsertItem(value);  // Insert into the second list
    }

    // Merge the two sorted lists (since mergeSortedLists is a member function)
    typename UnsortedType<int>::NodeType* mergedList = list1.mergeSortedLists(list1.listData, list2.listData);

    // Print the merged list
    list1.printList(mergedList);  // Print using the class method

    return 0;
}
