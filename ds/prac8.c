// Write an algorithm and program to Implementation of stack using array. 8

#include <stdio.h>
#include <conio.h>
#define MAX 5

int stack[MAX], top = -1;

void push(int val) {
    if(top == MAX - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = val;
}

int pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
        return -1;
    } else
        return stack[top--];
}

void display() {
    int i;
    if(top == -1)
        printf("Stack is empty\n");
    else {
        printf("Stack elements: ");
        for(i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
}

void main() {
    int choice, val;
    clrscr();

    do {
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: printf("Enter value to push: ");
                    scanf("%d", &val);
                    push(val);
                    break;
            case 2: val = pop();
                    if(val != -1) printf("Popped value: %d\n", val);
                    break;
            case 3: display();
                    break;
        }
    } while(choice != 4);

    getch();
}
