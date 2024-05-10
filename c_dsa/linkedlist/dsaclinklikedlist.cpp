#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	node* next;
	node* prev;
};
void insert(struct node** head_ref,int newdata){
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data=newdata;
	newnode->next=*head_ref;
	newnode->prev=NULL;
	if ((*head_ref) != NULL){
		((*head_ref)->prev = newnode);
		
	}
	else
	((*head_ref = newnode));
}
void print(struct node* n){
	if (n==NULL){
		printf("list is empty:");
	}
	else
		while(n!=NULL){
			printf("%d ", n->data);
			n=n->next;
		}
}
int main(){
	head = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	
	print(head);
	return 0;
}

