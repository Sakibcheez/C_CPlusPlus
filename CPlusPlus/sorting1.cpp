#include <iostream>
#include <vector>
#include <algorithm> // for sort function

int main() {
    int n;

    // Asking for the number of elements
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> numbers(n);

    // Taking input for the numbers
    std::cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    // Sorting in ascending order
    std::sort(numbers.begin(), numbers.end());

    // Printing in ascending order
    std::cout << "Numbers in ascending order: ";
    for (int i = 0; i < n; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Printing in descending order
    std::cout << "Numbers in descending order: ";
    for (int i = n - 1; i >= 0; --i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
