#include <stdio.h>
#include <stdlib.h>

// Define the structure for a singly linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the end
void insertAtEnd(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = NULL; // New node will be the last node

    if (*head == NULL) {
        // If list is empty, make the new node the head
        *head = newNode;
    } else {
        // Traverse to the last node
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        // Set the last node's next pointer to the new node
        current->next = newNode;
    }
}

// Example usage
int main() {
    struct Node* head = NULL; // Initialize an empty list
    insertAtEnd(&head, 10); // Insert 10 at the end
    insertAtEnd(&head, 20); // Insert 20 at the end
    // Add more insertions as needed
    return 0;
}
