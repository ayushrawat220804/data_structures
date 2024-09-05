// inserting a node at specified possition
#include <stdio.h>
// lappu sa dsa
insert_after(struct node* head, int x, int info)
{
	struct node *ptr *new;
	new = (struct node*) malloc(sizeof(struct node));
	new->data=info;
	ptr = head;
	while(ptr->data!=x&&ptr!=null)
	{
		ptr=ptr->next;
	}
	if(ptr->data==x)
	{
		new->next=ptr->next;
		ptr->next=new;
	}
	return head;
}

// note book for c dsa  GS BALUJA


