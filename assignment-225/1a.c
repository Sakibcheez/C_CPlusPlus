#include <iostream>
#include <fstream>
#include <queue>
#include <map>
#include <string>
#include <bitset>

using namespace std;

// Structure to represent a node in the Huffman tree
struct HuffmanNode {
    char data;
    int frequency;
    HuffmanNode* left;
    HuffmanNode* right;

    HuffmanNode(char data, int frequency) {
        left = right = nullptr;
        this->data = data;
        this->frequency = frequency;
    }
};

// Comparator for the priority queue
struct Compare {
    bool operator()(HuffmanNode* left, HuffmanNode* right) {
        return left->frequency > right->frequency;
    }
};

// Recursive function to generate Huffman codes
void generateHuffmanCodes(HuffmanNode* root, string code, map<char, string>& huffmanCodes) {
    if (!root) return;

    if (root->data != '\0') {
        huffmanCodes[root->data] = code;
    }

    generateHuffmanCodes(root->left, code + "0", huffmanCodes);
    generateHuffmanCodes(root->right, code + "1", huffmanCodes);
}

// Function to build the Huffman tree and generate the codes
void buildHuffmanTree(const map<char, int>& frequencyMap, map<char, string>& huffmanCodes) {
    priority_queue<HuffmanNode*, vector<HuffmanNode*>, Compare> minHeap;

    // Create leaf nodes for each character and push them into the min-heap
    for (auto& pair : frequencyMap) {
        minHeap.push(new HuffmanNode(pair.first, pair.second));
    }

    // Build the Huffman tree
    while (minHeap.size() > 1) {
        HuffmanNode* left = minHeap.top();
        minHeap.pop();
        HuffmanNode* right = minHeap.top();
        minHeap.pop();

        HuffmanNode* merged = new HuffmanNode('\0', left->frequency + right->frequency);
        merged->left = left;
        merged->right = right;

        minHeap.push(merged);
    }

    // Generate the Huffman codes
    generateHuffmanCodes(minHeap.top(), "", huffmanCodes);
}

// Function to encode the input file using the Huffman codes
void encodeFile(const string& inputFilename, const string& outputFilename) {
    ifstream inputFile(inputFilename);
    if (!inputFile) {
        cout << "Error opening input file." << endl;
        return;
    }

    map<char, int> frequencyMap;
    char ch;

    // Read the input file and calculate the frequency of each character
    while (inputFile.get(ch)) {
        frequencyMap[ch]++;
    }
    inputFile.close();

    map<char, string> huffmanCodes;
    buildHuffmanTree(frequencyMap, huffmanCodes);

    // Now encode the input file based on the Huffman codes
    inputFile.open(inputFilename);
    ofstream outputFile(outputFilename);

    string encodedString;
    while (inputFile.get(ch)) {
        encodedString += huffmanCodes[ch];
    }

    outputFile << encodedString;
    inputFile.close();
    outputFile.close();
}

// Function to decode the encoded file
void decodeFile(const string& encodedFilename, const string& decodedFilename) {
    ifstream encodedFile(encodedFilename);
    if (!encodedFile) {
        cout << "Error opening encoded file." << endl;
        return;
    }

    string encodedString;
    char bit;

    // Read the entire encoded string
    while (encodedFile.get(bit)) {
        encodedString += bit;
    }
    encodedFile.close();

    // Build the same Huffman tree (using the same frequency map)
    map<char, int> frequencyMap;
    frequencyMap['A'] = 10; frequencyMap['B'] = 10; frequencyMap['C'] = 10;
    frequencyMap['D'] = 10; frequencyMap['E'] = 10; frequencyMap['F'] = 10;
    frequencyMap['R'] = 10; frequencyMap['S'] = 10; frequencyMap['W'] = 10;

    map<char, string> huffmanCodes;
    buildHuffmanTree(frequencyMap, huffmanCodes);

    // Reverse the Huffman codes map to decode easily
    map<string, char> reverseHuffmanCodes;
    for (auto& pair : huffmanCodes) {
        reverseHuffmanCodes[pair.second] = pair.first;
    }

    string decodedString;
    string currentCode = "";

    // Decode the encoded string
    for (size_t i = 0; i < encodedString.length(); i++) {
        currentCode += encodedString[i];

        // If we find a matching code, add the corresponding character to the decoded string
        if (reverseHuffmanCodes.find(currentCode) != reverseHuffmanCodes.end()) {
            decodedString += reverseHuffmanCodes[currentCode];
            currentCode = "";
        }
    }

    // Write the decoded string to the output file
    ofstream decodedFile(decodedFilename);
    decodedFile << decodedString;
    decodedFile.close();
}

int main() {
    int choice;
    cout << "Choose an option:" << endl;
    cout << "1. Encode" << endl;
    cout << "2. Decode" << endl;
    cin >> choice;

    if (choice == 1) {
        encodeFile("input.txt", "output.txt");
        cout << "Encoding complete. Output written to output.txt." << endl;
    } else if (choice == 2) {
        decodeFile("output.txt", "decoded.txt");
        cout << "Decoding complete. Output written to decoded.txt." << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}

