#include <iostream>
#include <algorithm> // For sort function
using namespace std;

int main() {
    int nA, nB;

    // Input size of array A
    cout << "Enter the number of elements in array A: ";
    cin >> nA;

    // Dynamically allocate array A
    int* A = new int[nA];

    // Input elements for array A
    cout << "Enter " << nA << " elements for array A: ";
    for (int i = 0; i < nA; ++i) {
        cin >> A[i];
    }

    // Input size of array B
    cout << "Enter the number of elements in array B: ";
    cin >> nB;

    // Dynamically allocate array B
    int* B = new int[nB];

    // Input elements for array B
    cout << "Enter " << nB << " elements for array B: ";
    for (int i = 0; i < nB; ++i) {
        cin >> B[i];
    }

    // Allocate array C with size equal to nA + nB
    int* C = new int[nA + nB];

    // Merge arrays A and B into C
    for (int i = 0; i < nA; ++i) {
        C[i] = A[i];
    }
    for (int i = 0; i < nB; ++i) {
        C[nA + i] = B[i];
    }

    // Sort the merged array C
    sort(C, C + nA + nB);

    // Output the sorted merged array C
    cout << "Sorted merged array C: ";
    for (int i = 0; i < nA + nB; ++i) {
        cout << C[i] << " ";
    }
    cout << endl;

    // Deallocating the dynamically allocated arrays
    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
