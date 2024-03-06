#include <stdio.h>

int stack[100]; // Array to store stack elements
int top = -1;   // Initialize top of the stack

void push(void) {
    if (top >= 100 - 1) {
        printf("\nSTACK Bhra huwa hai bhai");
    } else {
        int x;
        printf("koi bhi numb er dal bhai: ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}

void pop(void) {
    if (top <= -1) {
        printf("\nStack abhi khali hai bhai");
    } else {
        printf("\nabhi ye %d remove kiya hai bhai", stack[top]);
        top--;
    }
}

void display(void) {
    if (top >= 0) {
        printf("\nstack ke elements ye hai bhai:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    } else {
        printf("\nstack khali hai bhai.");
    }
}

int main() {
	int n;
    int choice;
    printf("\nstack ka size btao bhai jyda se jyda 100 tk (MAX=100): ");
    scanf("%d", &n);

    printf("\nSTACK OPERATIONS using BHAI_ARRAY ");
    printf("\n--------------------------------");
    printf("\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT");

    do {
        printf("\nouper wale options me se koi bhi ek number dal bhai: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\nexit hogya bhai");
                break;
            default:
                printf("\nsahi option dal bhai(1/2/3/4)");
        }
    } while (choice != 4);

    return 0;
}

