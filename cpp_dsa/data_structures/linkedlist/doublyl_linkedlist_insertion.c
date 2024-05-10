#include <iostream>
#include <stdlib.h>
using namespace std;
struct node{
	int data;
	struct node* next;
	struct node* prev;
};
void insert1(struct node** head_ref , int newdata){
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data= newdata;
	newnode->next=*head_ref;
	newnode->prev=NULL;
	if ((*head_ref) != NULL){
		(*head_ref)-> prev = newnode;
	}
	((*head_ref) = newnode);
}
void print(struct node* n){
	while ( n!= NULL){
		cout << " " << n->data;
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
	
	print(head);
	insert1(&head , 324);
	cout << "\n";
	print(head);
	
	return 0;
}
