#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask the user for the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    // Declare arrays A and B with size n
    int A[n], B[n];

    // Input elements for array A
    cout << "Enter " << n << " elements for array A: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Copy elements from array A to array B
    for (int i = 0; i < n; i++) {
        B[i] = A[i];
    }

    // Display elements of array B
    cout << "Elements of array B: ";
    for (int i = 0; i < n; i++) {
        cout << B[i] << " ";
    }

    return 0;
}
