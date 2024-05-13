#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int count = 0;

struct stack{
	int item[MAX];
	int top;
};

typedef struct stack st;

void createemptystack(st *s){
	s->top=-1;
}
