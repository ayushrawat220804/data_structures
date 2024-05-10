#include <iostream>
#include <stdlib.h>
using namespace std;
struct node {
    int data;
    node* next;
    node* prev;
};

void print(node* n) {
    while (n != NULL) {
        std::cout << n->data << " ";
        n = n->next;
    }
    std::cout << "\n"; // Add a newline after printing the list
}

int main() {
    node* head = new node;
    node* second = new node;
    node* third = new node;

    head->data = 10;
    head->next = second;
    head->prev = third;

    second->data = 20;
    second->next = third;
    second->prev = head;

    third->data = 30;
    third->next = head;
    third->prev = second;

    print(head);

    // Clean up memory (not shown in this example)
    delete head;
    delete second;
    delete third;

    return 0;
}

