#include <iostream>
#include "pqtype.cpp"
using namespace std;

int main()
{
    PQType<int> pq(15);

    if(pq.IsEmpty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    //4 9 2 7 3 11 17 0 5 1
    pq.Enqueue(4);
    pq.Enqueue(9);
    pq.Enqueue(2);
    pq.Enqueue(7);
    pq.Enqueue(3);
    pq.Enqueue(11);
    pq.Enqueue(17);
    pq.Enqueue(0);
    pq.Enqueue(5);
    pq.Enqueue(1);

    if(pq.IsEmpty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    int temp;
    pq.Dequeue(temp);
    cout << temp << endl;

    pq.Dequeue(temp);
    cout << temp << endl;

    pq.Dequeue(temp);
    cout << temp << endl;
}
