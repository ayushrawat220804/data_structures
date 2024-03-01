## a linked list
is a linear data structure where elements (nodes) are not stored in contiguous memory locations like arrays. Instead, each node contains data and a pointer to the next node. Linked lists are used to overcome the limitations of arrays, especially in operations such as insertion, deletion, and dynamic memory allocation.

## Here are the key points about linked lists in C:


### 1. Node Structure
At the heart of a linked list lies the concept of a node. Each node contains two essential components:

Data: This is where the actual value or payload resides. It could be an integer, a character, a pointer, or any other data type.

Next Pointer: The next pointer (often named next) points to the next node in the list. It’s like a bridge connecting one node to the next.

## syntax for creating a node in linked list
```
struct Node {
    int data;
    struct Node* next;
};
```
### 2. Types of Linked Lists:

**a: Singly Linked List**:

each node points only to the next node.

Traversing the list involves following the ```next``` pointers sequentially.

The last node’s ```next``` pointer is typically set to ```NULL```. 

&nbsp;

**b: Doubly Linked List**:

Each node in a doubly linked list has pointers to both the next and previous nodes.

Allows bidirectional traversal (forward and backward).

Requires more memory due to the additional pointer.

&nbsp;

**c: Circular Linked List**:

Similar to a singly linked list, but the last node points back to the first node.

Useful for applications like round-robin scheduling.

&nbsp;

### 3. Basic Operations

**a. Insertion**

Adding a new node to the list.

Common insertion points:

At the beginning: Create a new node and update the next pointer to the current head.

At the end: Traverse the list until you reach the last node, then add the new node.

After a specific node: Insert a node after a given node.

**b. Deletion**

Removing a node from the list.

Common deletion scenarios:

**By value**: Search for the node with a specific value and remove it.

**By position**: Remove the node at a particular position (e.g., the 3rd node).

**Deleting the entire list**: Free memory for all nodes.

**c. Traversal**
Visiting each node sequentially.
Useful for printing the data or performing other operations.

&nbsp;

## Traversing

Traversing in the context of data structures refers to systematically visiting every element within a data structure. It involves accessing each element at least once. Here are some key points about traversing:

### Purpose of Traversing:

Traversing allows us to:

Display every element in the data structure.

Perform operations on individual elements.

It is also known as **iterating** over the data structure.

**Examples of Traversing**:

**Linked List Traversing**:

**In a linked list**, we traverse from the head node to the last node, visiting each node along the way.

This traversal helps us perform operations on the nodes (e.g., printing data or searching for a specific value).

&nbsp;

## Insertion in Singly linkedlist:
**insertion at the beginning of a singly linked list in C**:

1. Create a New Node:

   * Allocate memory for a new node using malloc.

   * Set the new node’s data field with the desired value.

2. Update Pointers:

   * Set the new node’s next pointer to the current head of the list.

   * Update the head pointer to point to the new node.

```
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a singly linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the beginning
void insertAtBeginning(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}

// Example usage
int main() {
    struct Node* head = NULL; // Initialize an empty list
    insertAtBeginning(&head, 42); // Insert 42 at the beginning
    // Add more insertions as needed
    return 0;
}
```
**In this example, ```insertAtBeginning``` inserts a new node with data ```42``` at the beginning of the list**.

&nbsp;

**Insertion at the end of a singly linked list**

Adding a new node at the end involves the following steps:

1. Traverse to the Last Node:

   * Start at the head of the list.

   * Move through the list until you reach the last node (i.e., the node whose next pointer is NULL).

2. Create a New Node:

   * Allocate memory for a new node using malloc.

   * Set the new node’s data field with the desired value.

3. Update Pointers:

   * Set the last node’s next pointer to point to the new node.

   * Make sure the new node’s next pointer is NULL (since it’s the last node).

4. Example Code (Insertion at the End):
```
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
```
**In this example, ```insertAtEnd``` inserts new nodes with data ```10``` and ```20``` at the end of the list.**

&nbsp;

## Insert a new node after a specific node in a singly linked list using c,

1. Traverse to the Desired Node:

   * Start at the head of the list.

   * Move through the list until you find the node after which you want to insert the new node.

2. Create a New Node:

   * Allocate memory for a new node using malloc.

   * Set the new node’s data field with the desired value.

3. Update Pointers:

   * Set the new node’s next pointer to the next node (the one after which you want to insert).

   * Update the previous node’s next pointer to point to the new node.

4. **Example Code** (Insertion After a Specific Node):
```
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a singly linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node after a specific node
void insertAfterNode(struct Node* prevNode, int newData) {
    if (prevNode == NULL) {
        printf("Previous node cannot be NULL.\n");
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// Example usage
int main() {
    struct Node* head = NULL; // Initialize an empty list
    // Add nodes and perform insertions as needed
    // Example: Insert 42 after the second node (value 2)
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 2;
    head->next->next = NULL;

    insertAfterNode(head->next, 42);

    // Print the updated linked list
    struct Node* current = head;
    while (current) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    // Free memory (not shown in this simplified example)
    return 0;
}
```
**In this example**, we insert a new node with data ```42``` after the second node (value ```2```).





