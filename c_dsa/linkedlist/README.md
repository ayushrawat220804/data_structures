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




