#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};

void insert1(struct node** head_ref, int newdata){
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data=newdata;
	newnode->next=*head_ref;
	//for updating the singly linkedlist
	*head_ref=newnode;
}

void insert2(struct node** head_ref2, int newdata2){
	struct node* newnode2 = (struct node*)malloc(sizeof(struct node));
	newnode2->data=newdata2;
	newnode2->next=NULL;
	// if linkedlist is empty then make new node as head
	if ((*head_ref2) == NULL){
		(*head_ref2)=newnode2;
		return;
	}
	// otherwise traverse it to the end of singly linked list 
	struct node* last = *head_ref2;
	while (last->next != NULL){
		last=last->next;
	}
	// updatae next of last node
	last->next=newnode2;
}

void insert3(struct node* prev, int newdata3){
	struct node* newnode3 = (struct node*)malloc(sizeof(struct node));
	newnode3->data=newdata3;
	newnode3->next = prev->next;
	prev->next = newnode3;
}

void print(struct node* n){
	while(n!=NULL){
		printf("%d ", n->data );
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
	second->data=20;
	second->next=third;
	third->data=30;
	third->next=NULL;
	
	printf("singly linked list before insertion:");
	print(head);//output : 10 20 30
	printf("\n\nsingly linked list after inserting at the front: ");
	insert1(&head,40);// 40 inserted at the front
	print(head);// output : 40 10 20 30
	printf("\n\nsingly linked list after inserting at the end: ");
	insert2(&head,50);
	print(head);
	printf("\n\nsingly linked list after inserting after a specific node position: ");
	insert3(second,60);
	print(head);
	
	
	return 0;
}
