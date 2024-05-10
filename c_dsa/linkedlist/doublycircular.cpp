#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* next;
	struct node* prev;
};
void insert1(struct node** head_ref1, int newdata1) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = newdata1;
    // If the linked list is empty, create a single node circular linked list
    if ((*head_ref1) == NULL) {
        newnode->next = newnode->prev = newnode;
        (*head_ref1) = newnode;
        return;
    }
    // If the linked list is not empty, insert newnode before head_ref1
    newnode->next = (*head_ref1);
    newnode->prev = (*head_ref1)->prev;
    (*head_ref1)->prev->next = newnode;
    (*head_ref1)->prev = newnode;

    // Move head_ref1 to point to the new node
    (*head_ref1) = newnode;
}
void insert2(struct node** head_ref,int newdata){
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data=newdata;
	newnode->next=(*head_ref);
	newnode->prev=NULL;
	if ((*head_ref) != NULL){
		((*head_ref)->prev = newnode);	
	}
	else
	((*head_ref = newnode));
	struct node* last = *head_ref;
	while ( last->next != *head_ref){
		last = last->next;
	}	
	last->next=newnode;
}
//void insert3(struct node** head_ref3, int newdata){
//	struct node* newnode = (struct node*)malloc(sizeof(struct node));
//	newnode->data=newdata;
//	
//	
//}
// Function to print the doubly circular linked list
void print(struct node* n) {
    if (n == NULL) {
        printf("List is empty.\n");
    } else {
        struct node* current = n;
        do {
            printf("%d ", current->data);
            current = current->next;
        } while (current != n);
        printf("\n");
    }
}

int main(){
	struct node* head = NULL;
	struct node* second = NULL;
	struct node* third = NULL;
	
	head = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	
	head->data=10;
	head->next=second;
	head->prev=third;
	
	second->data=20;
	second->next=third;
	second->prev=head;
	
	third->data=30;
	third->next=head;
	third->prev=second;
	
	print(head);
	insert1(&head, 43);
	insert2(&head, 40);
	insert2(&head, 34);
	print(head);
	return 0;
}

