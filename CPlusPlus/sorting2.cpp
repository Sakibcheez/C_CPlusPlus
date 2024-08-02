#include <iostream>
#include <algorithm> // For sort function

using namespace std;

int main() {
    int n;

    // Asking for the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    // Dynamically allocate an array of size n
    int* numbers = new int[n];

    // Taking input for the numbers
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    // Printing the numbers as entered
    cout << "You entered: ";
    for (int i = 0; i < n; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Sorting in ascending order
    sort(numbers, numbers + n);

    // Printing in ascending order
    cout << "Numbers in ascending order: ";
    for (int i = 0; i < n; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Deallocating the dynamically allocated array
    delete[] numbers;

    return 0;
}
