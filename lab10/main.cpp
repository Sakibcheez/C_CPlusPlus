#include <iostream>

using namespace std;

// Node structure for linked list
struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

// Function to insert elements into the linked list
void insert(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to merge two sorted linked lists into one sorted list
Node* mergeSortedLists(Node* list1, Node* list2) {
    Node* dummy = new Node(0);  // Dummy node to simplify the merge process
    Node* tail = dummy;  // Tail to build the new list

    // Merge the two lists using a two-pointer approach
    while (list1 && list2) {
        if (list1->data < list2->data) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    // Append remaining elements from either list
    if (list1) tail->next = list1;
    if (list2) tail->next = list2;

    Node* mergedList = dummy->next;  // Head of the merged list
    delete dummy;  // Delete the dummy node
    return mergedList;
}

int main() {
    int m, n;

    // Read the first sequence
    cin >> m;
    Node* list1 = nullptr;
    for (int i = 0; i < m; ++i) {
        int value;
        cin >> value;
        insert(list1, value);
    }

    // Read the second sequence
    cin >> n;
    Node* list2 = nullptr;
    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        insert(list2, value);
    }

    // Merge the two sorted lists
    Node* mergedList = mergeSortedLists(list1, list2);

    // Print the merged list
    printList(mergedList);

    return 0;
}
