#include <iostream>
#include <thread> // For sleep_for
#include <chrono> // For chrono::milliseconds
using namespace std;

void printNumbers(int n) {
    if (n > 100) // Base condition
        return;
    cout << n << "%" << endl;
    this_thread::sleep_for(chrono::milliseconds(10)); // Sleep for 1000 milliseconds (1 second)
    printNumbers(n + 1); // Recursive call
}

int main() {
    printNumbers(1); // Start from 1
    return 0;
}
