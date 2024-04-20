#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to traverse and print the linked list
void traverseLinkedList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    // Create nodes
    Node* first = new Node{10, NULL};
    Node* second = new Node{20, NULL};
    Node* third = new Node{30, NULL};

    // Link nodes
    first->next = second;
    second->next = third;

    // Head points to the first node
    Node* head = first;

    // Traverse and print the linked list
    cout << "Linked List: ";
    traverseLinkedList(head);

    // Clean up memory
    delete first;
    delete second;
    delete third;

    return 0;
}

