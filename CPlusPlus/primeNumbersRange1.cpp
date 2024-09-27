#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= n; i++) { // check divisibility up to the square root of n
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int start, end, primeCount = 0;

    while(true) {

    // Taking range input from the user
    cout << "Enter the starting number of the range: ";
    cin >> start;
    cout << "Enter the ending number of the range: ";
    cin >> end;

    // Displaying prime numbers within the range and counting them
    cout << "Prime numbers between " << start << " and " << end << " are: ";
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            primeCount++;
        }
    }

    cout << endl;

    // Displaying the total count of prime numbers
    cout << "Total number of prime numbers in the range: " << primeCount << endl;

    }

    return 0;
}
