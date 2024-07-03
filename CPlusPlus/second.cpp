#include <iostream>
using namespace std;

int main() {
    int x,y;
    cout << "Type a number x : "; // Type a number and press enter
    cin >> x; // Get user input from the keyboard
    cout << "Type a number y: ";
    cin >> y;
    int sum = x+ y ;
    cout << "Your number is: " << x << "\n" <<endl; // Display the input value
    cout << "Your number is: " << y << endl; // end is line ends
    cout << "Sum   is: " << sum << "\n" <<endl;

    return 0;
}
