#include <iostream>
#include "stacktype.cpp"
#include "quetype.cpp"
using namespace std;

int main()
{
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
}
