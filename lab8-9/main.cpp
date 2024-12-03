#include <iostream>
#include "stacktype.cpp"
#include "quetype.cpp"

using namespace std;

int main()
{
/*
  StackType<int> stk;

    stk.Push(5);
    stk.Push(7);
    stk.Push(4);
    stk.Push(2);

    if(stk.IsEmpty())
        cout << "stack is Empty" << endl;
    else
        cout << "stack is not Empty" << endl;

    if(stk.IsFull())
        cout << "stack is full" << endl;
    else
        cout << "stack is not full" << endl;

    stk.Push(3);  // No overflow check needed here, because you should be checking if full first

    if(stk.IsFull())
        cout << "stack is full" << endl;
    else
        cout << "stack is not full" << endl;

   int a = stk.Top();
    cout << "Top element: " << a << endl;

   StackType<int> temp;

    cout << "Stack contents: ";
    while (!stk.IsEmpty()) {
        int top = stk.Top();
        cout << top << " ";
        temp.Push(top);
        stk.Pop();
    }

    cout << endl;

    // Restore the original stack from the temporary stack (reverse order to maintain original stack sequence)
    while (!temp.IsEmpty()) {
        stk.Push(temp.Top());
        temp.Pop();
    }

    // Display the stack contents again to show the restoration of the original stack
    cout << "Restored Stack contents: ";
    while (!stk.IsEmpty()) {
        int top = stk.Top();
        cout << top << " ";
        stk.Pop();
    }

    cout << endl;
*/

/*
StackType<char> stk;
    bool flag = true;

    string s = "((()))";

    for(int i=0; i<s.length(); i++)
    {
        char c = s[i];

        if(c == '(')
        {
            stk.Push('(');
        }else
        {
            if(stk.IsEmpty())
            {
                flag = false;
                break;
            }
            stk.Pop();
        }
    }

    if(flag && stk.IsEmpty())
        cout << "Balanced" << endl;
    else
        cout << "Not balanced" << endl;

    cout << endl << endl << endl;



    int n = 15;
    QueType<string> q(n);
    string a = "";

    q.Enqueue("1");

    for(int i=1; i<=n; i++)
    {
        q.Dequeue(a);
        cout << a << endl;
        try{
            q.Enqueue(a+"0");
            q.Enqueue(a+"1");
        }catch(FullQueue f)
        {
            break;
        }
    }
*/
        QueType <int> que1(5) ;

        if(que1.IsEmpty())
            cout << "Queue is Empty" << endl ;
        else
            cout << "Not Empty" << endl ;

        que1.Enqueue(5);
        que1.Enqueue(7);
        que1.Enqueue(4);
        que1.Enqueue(2);

        if(que1.IsEmpty())
            cout << "Queue is Empty" << endl ;
        else
            cout << "Not Empty" << endl ;

            if(que1.IsFull())
            cout << "Queue is Full" << endl ;
        else
            cout << "Not Full" << endl ;

            que1.Enqueue(6);

            if(que1.IsFull())
            cout << "Queue is Full" << endl ;
        else
            cout << "Not Full" << endl ;

            que1.Enqueue(7);

            //while (!que1.IsEmpty()) {
        //cout << que1.front() << " ";  // Print the front element
        //que1.Dequeue;  // Remove the front element
   // }















}
