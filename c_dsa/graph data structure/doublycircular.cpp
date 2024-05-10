#include <iostream>
#include <stdlib.h>
using namespace std;

// programme for doubly circular linked list 
struct node {
	int data;
	node* next;
	node* prev;
};
void insert(struct node** headref, int newdata) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = newdata;
    newnode->next = *headref;
    newnode->prev = NULL;

    if ((*headref) != NULL) {
        newnode->prev = (*headref)->prev; // Link new node to the last node
        (*headref)->prev->next = newnode; // Link last node to the new node
        (*headref)->prev = newnode;       // Link first node to the new node
    } else {
        newnode->next = newnode; // Point to itself if it's the only node
        newnode->prev = newnode;
    }

    (*headref) = newnode; // Update head reference to the new node
}

void print(struct node* n){
	if ( n == NULL ){
		cout << " empty list\n";
		return;
	}
	node* current = n;
	do{
		cout << current->data << " ";
		current = current->next;
	}
	while(current != n);
	cout << "\n";

}
int main(){
	struct node* head = NULL;
	struct node* second = NULL;
	struct node* third = NULL;
	
	head = (struct node*)malloc(sizeof (struct node));
	second = (struct node*)malloc(sizeof (struct node));
	third = (struct node*)malloc(sizeof (struct node));
	
	head->data=10;
	head->next=second;
	head->prev=third;
	
	second->data=20;
	second->next=third;
	second->prev=head;
	
	third->data=30;
	third->next=head;
	third->prev=second;
	
	insert(&head, 40);
	
	print(head);
	delete head;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	rohit main aaya tha tu soya tha 
	mera naam sarvesh h 
	mere room me aa jana game khelne
	theek h na !!!!28
	delete second;
	delete third;
	
	return 0;
}
