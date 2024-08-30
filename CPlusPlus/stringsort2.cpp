#include <iostream>
#include <algorithm> // For sort function
#include <vector>    // For vector container
#include <string>    // For string functions

using namespace std;

int main() {
    vector<string> words;
    string word;
    int n;

    // Input the number of words
    cout << "Enter the number of words: ";
    cin >> n;

    // Input words from the user
    cout << "Enter the words: ";
    for (int i = 0; i < n; ++i) {
        cin >> word;
        words.push_back(word);
    }

    // Sorting the words alphabetically
    sort(words.begin(), words.end());

    // Output the sorted words like a dictionary
    cout << "\nSorted words (like a dictionary):" << endl;
    for (const auto& w : words) {
        cout << w << endl;
    }

    return 0;
}

