#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void displayArray(const vector<int>& arr) {
    for (int elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
}

void addElement(vector<int>& arr, int element) {
    arr.push_back(element);
}

void deleteElement(vector<int>& arr, int element) {
    auto position = find(arr.begin(), arr.end(), element);
    if (position != arr.end()) {
        arr.erase(position);
    } else {
        cout << "Element not found." << endl;
    }
}

vector<int> mergeArrays(const vector<int>& arr1, const vector<int>& arr2, bool ascending) {
    vector<int> merged = arr1;
    merged.insert(merged.end(), arr2.begin(), arr2.end());
    if (ascending) {
        sort(merged.begin(), merged.end());
    } else {
        sort(merged.rbegin(), merged.rend());
    }
    return merged;
}

bool searchElement(const vector<int>& arr, int element) {
    return find(arr.begin(), arr.end(), element) != arr.end();
}

int main() {
    vector<int> array1;
    vector<int> array2;

    int choice, element;
    bool ascending;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Add element to array\n";
        cout << "2. Delete element from array\n";
        cout << "3. Merge two arrays\n";
        cout << "4. Search element in array\n";
        cout << "5. Display array\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to add: ";
                cin >> element;
                addElement(array1, element);
                break;

            case 2:
                cout << "Enter element to delete: ";
                cin >> element;
                deleteElement(array1, element);
                break;

            case 3:
                cout << "Enter elements of second array (end with -1): ";
                while (true) {
                    cin >> element;
                    if (element == -1) break;
                    addElement(array2, element);
                }
                cout << "Merge in ascending order? (1 for Yes, 0 for No): ";
                cin >> ascending;
                array1 = mergeArrays(array1, array2, ascending);
                array2.clear();
                break;

            case 4:
                cout << "Enter element to search: ";
                cin >> element;
                if (searchElement(array1, element)) {
                    cout << "Element found." << endl;
                } else {
                    cout << "Element not found." << endl;
                }
                break;

            case 5:
                cout << "Array elements: ";
                displayArray(array1);
                break;

            case 6:
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

