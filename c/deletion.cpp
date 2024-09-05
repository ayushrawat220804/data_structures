// deletion if the first node 
#include <stdio.h>
// lappu sa dsa
delfirst(struct node *head)
{
	struct node*ptr;
	if(head==null)
	printf("linked list is empty")
	else {
		ptr = head;
		head = head->next;
		free(ptr);
	}
	return head;
}


