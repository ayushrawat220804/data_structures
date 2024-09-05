#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* next;
	struct node* prev;
};
void insertatbeginning(struct node** head_ref, int newdata){
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data=newdata;
	newnode->next=*head_ref;
	newnode->prev=NULL;
	if ((*head_ref)==NULL){
		newnode->next=NULL;
		newnode->prev=NULL;
		(*head_ref)=newnode;
	}
	else {
		newnode->next= (*head_ref);
		newnode->prev=NULL;
		(*head_ref)->prev= newnode;
		(*head_ref)= newnode;
	}
}
void print(struct node* n){
	if (n==NULL){
		printf("linkedlist is empty...\n");
	}
	while (n!= NULL){
		printf("%d ", n->data);
		n=n->next;
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
	head->prev=NULL;
	second->data=20;
	second->next=third;
	second->prev=head;
	third->data=30;
	third->next=NULL;
	third->prev=second;
	
	printf("linkedlist before insertion: ");
	print(head);
	insertatbeginning(&head,40);
	printf("\nlinkedlist after insertion 40 at the front: ");
	print(head);
	printf("\nlinkedlist after insertion 50 at the end: ");
	
	
	return 0;
}
