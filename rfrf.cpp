#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to delete last occurrence of key
void deleteLastOccurrence(Node*& head, int key) {
    if (!head) return;  // Empty list

    Node* temp = head;
    Node* lastOccurPrev = nullptr; // Pointer to the node *before* last occurrence
    Node* prev = nullptr; // Pointer to the previous node during traversal

    // Traverse the list
    while (temp) {
        if (temp->data == key) {
            lastOccurPrev = prev;
        }
        prev = temp;
        temp = temp->next;
    }

    // No occurrence found
    if (!lastOccurPrev && head->data != key) {
        cout << "Key not found in the list.\n";
        return;
    }

    // If last occurrence is at head
    if (!lastOccurPrev) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
    } else {
        Node* toDelete = lastOccurPrev->next;
        lastOccurPrev->next = toDelete->next;
        delete toDelete;
    }
}

// Helper function to print list
void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Example usage
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(2);

    cout << "Original list: ";
    printList(head);

    deleteLastOccurrence(head, 2);

    cout << "List after deleting last occurrence of 2: ";
    printList(head);

    return 0;
}
