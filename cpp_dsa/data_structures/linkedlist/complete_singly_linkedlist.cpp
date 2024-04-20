#include <iostream>
#include <stdlib.h>
using namespace std;
struct node{
	int data;
	struct node* next;
};
void print(struct node* n){
	while (n != NULL){
		cout << " " << n->data;
		n = n->next;
	}
}
void insertatbeginning(struct node** head_ref, int newdata){
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data= newdata;
	newnode->next=*head_ref;
	*head_ref = newnode;
}
void insertatend(struct node** head, int newdata) {
    struct node* newnode = new node;
    newnode->data = newdata;
    newnode->next = NULL;
    if (head == NULL) {
        // If the list is empty, make the new node the head
        *head = newnode;
    } else {
        // Traverse to the last node
        node* temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        // Insert the new node at the end
        temp->next = newnode;
    }
}
void insertatrandom(struct node** head_ref, int newdata, int position){
    node* newnode = new node;
    newnode->data = newdata;
    if (position == 0) {
        // Insert at the beginning
        newnode->next = *head_ref;
        *head_ref = newnode;
        return;
    }
    node* current = *head_ref;
    for (int i = 0; i < position - 1 && current != NULL; ++i)
        current = current->next;
    if (current == NULL) {
        // Position is beyond the end of the list
        cout << "Invalid position. Insertion failed." << endl;
        delete newnode;
        return;
    }
    newnode->next = current->next;
    current->next = newnode;
}
int main (){
	struct node* head = NULL;
	struct node* second = NULL;
	struct node* third = NULL;
	head = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	head->data=102;
	head->next = second;
	second->data=23;
	second->next= third;
	third->data=324;
	third->next=NULL;
	cout<<"singly linkedlist elements are:";
	print(head);
	cout<<"\n\nafter inserting in the front elements are:";
	insertatbeginning(&head, 33);
	print(head);
	cout<<"\n\nafter inserting at the end, elements are: ";
	insertatend(&head, 273);
	print(head);
	cout<<"\n\nafter inserting elements at random position in the singly linked list: ";
	insertatrandom(&head,2344,3);// position 3
	insertatrandom(&head,32432,6);// position 6
	insertatrandom(&head,777,0);// position 0
	print(head);
}
