#include <iostream>
#include "stacktype.cpp"
#include "quetype.cpp"

using namespace std;

int main()
{

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

        stk.Push(3);

        if(stk.IsFull())
        cout << "stack is full" << endl;
    else
        cout << "stack is not full" << endl;

      int a = stk.Top();

      cout << a << endl ;

       StackType<int> temp;

      cout << "Stack contents: ";
    while (!stk.IsEmpty()) {
        int top = stk.Top();  // Get the top element
        cout << top << " ";  // Print the element
        temp.Push(top);  // Push the element onto the temporary stack
        stk.Pop();  // Pop the element from the original stack
    }

    cout << endl;

    // Restore the original stack from the temporary stack
    while (!temp.IsEmpty()) {
        stk.Push(temp.Top());
        temp.Pop();
    }




/*
StackType<char> stk;
    bool flag = true;

    string s = "(((";

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
}
