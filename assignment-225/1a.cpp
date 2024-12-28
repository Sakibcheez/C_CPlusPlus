//Sakib Ahmed Shishir
//Assignment 2, CSE225

#include <bits/stdc++.h>

using namespace std;

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


struct Compare {
    bool operator()(HuffmanNode* left, HuffmanNode* right) {
        return left->frequency > right->frequency;
    }
};


void generateHuffmanCodes(HuffmanNode* root, string code, map<char, string>& huffmanCodes) {
    if (!root) return;

    if (root->data != '\0') {
        huffmanCodes[root->data] = code;
    }

    generateHuffmanCodes(root->left, code + "0", huffmanCodes);
    generateHuffmanCodes(root->right, code + "1", huffmanCodes);
}


HuffmanNode* buildHuffmanTree(const map<char, int>& frequencyMap, map<char, string>& huffmanCodes) {
    priority_queue<HuffmanNode*, vector<HuffmanNode*>, Compare> minHeap;


    for (auto& pair : frequencyMap) {
        minHeap.push(new HuffmanNode(pair.first, pair.second));
    }


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


    generateHuffmanCodes(minHeap.top(), "", huffmanCodes);

    return minHeap.top();
}


void encodeFile(const string& inputFilename, const string& outputFilename, map<char, string>& huffmanCodes) {
    ifstream inputFile(inputFilename);
    if (!inputFile) {

        ofstream createFile(inputFilename);
        createFile << "ABCAFEDERWERJERDASDFDFDWEWEESD";
        createFile.close();
        inputFile.open(inputFilename);
    }

    map<char, int> frequencyMap;
    char ch;


    while (inputFile.get(ch)) {
        frequencyMap[ch]++;
    }
    inputFile.close();

    HuffmanNode* root = buildHuffmanTree(frequencyMap, huffmanCodes);


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


void decodeFile(const string& encodedFilename, const string& decodedFilename, HuffmanNode* root) {
    ifstream encodedFile(encodedFilename);
    if (!encodedFile) {
        cout << "Error opening encoded file." << endl;
        return;
    }

    string encodedString;
    char bit;


    while (encodedFile.get(bit)) {
        encodedString += bit;
    }
    encodedFile.close();

    string decodedString;
    HuffmanNode* currentNode = root;


    for (size_t i = 0; i < encodedString.length(); i++) {
        if (encodedString[i] == '0') {
            currentNode = currentNode->left;
        } else {
            currentNode = currentNode->right;
        }


        if (currentNode->left == nullptr && currentNode->right == nullptr) {
            decodedString += currentNode->data;
            currentNode = root;
        }
    }


    ofstream decodedFile(decodedFilename);
    decodedFile << decodedString;
    decodedFile.close();
}


void showEncodedText(const string& outputFilename) {
    ifstream outputFile(outputFilename);
    if (!outputFile) {
        cout << "Error opening encoded file." << endl;
        return;
    }

    string encodedText;
    char ch;
    while (outputFile.get(ch)) {
        encodedText += ch;
    }
    outputFile.close();

    cout << "Encoded Text: " << endl;
    cout << encodedText << endl;
}


void showDecodedText(const string& decodedFilename) {
    ifstream decodedFile(decodedFilename);
    if (!decodedFile) {
        cout << "Error opening decoded file." << endl;
        return;
    }

    string decodedText;
    char ch;
    while (decodedFile.get(ch)) {
        decodedText += ch;
    }
    decodedFile.close();

    cout << "Decoded Text: " << endl;
    cout << decodedText << endl;
}

int main() {
    int choice;

    map<char, string> huffmanCodes;

    while(true){
    cout << "Choose an option:" << endl;
    cout << "1. Encode" << endl;
    cout << "2. Decode" << endl;
    cin >> choice;

    if (choice == 1) {

        encodeFile("input.txt", "output.txt", huffmanCodes);
        cout << "Encoding complete. Output written to output.txt." << endl;

        showEncodedText("output.txt");
    } else if (choice == 2) {

        map<char, int> frequencyMap;
        ifstream inputFile("input.txt");
        char ch;
        while (inputFile.get(ch)) {
            frequencyMap[ch]++;
        }
        inputFile.close();

        HuffmanNode* root = buildHuffmanTree(frequencyMap, huffmanCodes);

        decodeFile("output.txt", "decoded.txt", root);
        cout << "Decoding complete. Output written to decoded.txt." << endl;

        showDecodedText("decoded.txt");
    } else {
        cout << "Invalid choice." << endl;
    }
    }

    return 0;
}
