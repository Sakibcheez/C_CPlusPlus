#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr (combination)
int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to print Pascal's Triangle
void printPascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int j = 0; j < rows - i - 1; j++) {
            cout << " ";
        }

        // Print numbers in the current row
        for (int j = 0; j <= i; j++) {
            cout << combination(i, j) << " ";
        }

        cout << endl;
    }
}

int main() {
    int rows;
    while(true){
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;

    printPascalsTriangle(rows);
    }

    return 0;
}
