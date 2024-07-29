
#include <iostream>

using namespace std;

int main()
{

    string food = "Pizza";

cout << food << endl ;
cout << &food << endl;



string food1 = "Pizza";
string* ptr = &food1;


cout << food1 << "\n";


cout << &food1 << "\n";


cout << ptr << "\n";

cout << *ptr << "\n";

// Change the value of the pointer
*ptr = "Hamburger";

// Output the new value of the pointer (Hamburger)
cout << *ptr << "\n";

// Output the new value of the food variable (Hamburger)
cout << food1 << "\n";


}
