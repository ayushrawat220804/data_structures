## a linked list
is a linear data structure where elements (nodes) are not stored in contiguous memory locations like arrays. Instead, each node contains data and a pointer to the next node. Linked lists are used to overcome the limitations of arrays, especially in operations such as insertion, deletion, and dynamic memory allocation.

## Here are the key points about linked lists in C:


### 1. Node Structure
At the heart of a linked list lies the concept of a node. Each node contains two essential components:

Data: This is where the actual value or payload resides. It could be an integer, a character, a pointer, or any other data type.

Next Pointer: The next pointer (often named next) points to the next node in the list. It’s like a bridge connecting one node to the next.

## syntax for creating a node in linked list
```js
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

```js
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
```js
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
```js
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

&nbsp;
## Deletion at the beginnig of a node in singly linked list
```js
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

// Function to delete the first node
void deleteFirstNode(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
    printf("First node deleted successfully.\n");
}

// Example usage
int main() {
    struct Node* head = NULL; // Initialize an empty list
    insertAtBeginning(&head, 42); // Insert 42 at the beginning
    // Add more insertions as needed

    // Delete the first node
    deleteFirstNode(&head);

    // Print the updated list (if needed)
    // ...

    return 0;
}
```

&nbsp;
## Deletion at the end in singly linked list 
```js
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

// Function to delete the last node
void deleteEnd(struct Node** head) {
    struct Node* temp = *head;
    struct Node* previous = NULL;

    // If the list is empty, cannot delete
    if (*head == NULL) {
        printf("Linked List is empty. Nothing to delete.\n");
        return;
    }

    // If the list has only 1 node
    if (temp->next == NULL) {
        printf("%d deleted\n", (*head)->data);
        *head = NULL;
        free(temp);
        return;
    }

    // Traverse to the last node
    while (temp->next != NULL) {
        previous = temp;
        temp = temp->next;
    }

    // Update the second last node's next to NULL
    previous->next = NULL;

    // Delete the last node
    printf("%d deleted\n", temp->data);
    free(temp);
}

// Display the linked list
void display(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    // Create a sample linked list
    struct Node* head = NULL;
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);

    printf("Original linked list: ");
    display(head);

    // Delete the last node
    deleteEnd(&head);

    printf("Updated linked list: ");
    display(head);

    // Free memory
    // ...

    return 0;
}
```

&nbsp;
### Iterative Method:

To delete a node from the linked list, we need to do the following steps:
* Find the previous node of the node to be deleted.
* Change the next pointer of the previous node.
* Free memory for the node to be deleted.
Below is an example code snippet that demonstrates deletion of a specific node by value:
```js
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the beginning
void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Function to delete a node with a given key
void deleteNode(struct Node** head_ref, int key) {
    struct Node* temp = *head_ref;
    struct Node* prev = NULL;

    // If the head node itself needs to be deleted
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    // Search for the key to be deleted
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If key is not found
    if (temp == NULL) {
        printf("Value %d not found in the list.\n", key);
        return;
    }

    // Unlink the node from the linked list
    prev->next = temp->next;
    free(temp);
    printf("Value %d deleted successfully.\n", key);
}

// Display the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    printf("Original Linked List: ");
    printList(head);

    // Delete a node with value 1
    deleteNode(&head, 1);

    printf("Linked List after Deletion: ");
    printList(head);

    // Free memory (not shown in this snippet)
    return 0;
}
```

output : 
```js
Original Linked List: 2 3 1 7
Linked List after Deletion of 1: 2 3 7
```
The time complexity of this approach is O(n), where n represents the length of the given linked list, and the auxiliary space is O(1) since no extra space is required.

