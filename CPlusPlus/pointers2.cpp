#include <iostream>
using namespace std;

// Function that takes a pointer as a parameter
void increment(int* ptr) {
    // Dereferencing the pointer to increment the value
    (*ptr)++;
}

int main() {
    int num = 10;

    cout << "Before increment: " << num << endl;

    // Passing the address of the variable `num` to the function
    increment(&num);

    cout << "After increment: " << num << endl;

    return 0;
}

