#include <iostream>
#include "dynarr.h"
using namespace std;

int main()
{
   dynArr obj1, obj2(5);
   int value;

   for(int i=0; i<5; i++)
   {
       cin >> value;
       obj2.setValue(i, value);
   }

   for(int i=0; i<5; i++)
    cout << obj2.getValue(i) << " ";

   cout << endl;

   obj2.allocate(2);

   obj2.setValue(5, 60);
   obj2.setValue(6, 70);

   for(int i=0; i<7; i++)
    cout << obj2.getValue(i) << " ";


}

