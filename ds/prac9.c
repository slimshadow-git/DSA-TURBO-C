// Write an algorithm and program to Implementation of queue using array. 9

#include <stdio.h>
#include <conio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

void enqueue(int val) {
    if(rear == MAX - 1)
        printf("Queue Overflow\n");
    else {
        if(front == -1) front = 0;
        queue[++rear] = val;
    }
}

int dequeue() {
    if(front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return -1;
    } else
        return queue[front++];
}

void display() {
    int i;
    if(front == -1 || front > rear)
        printf("Queue is empty\n");
    else {
        printf("Queue elements: ");
        for(i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

void main() {
    int choice, val;
    clrscr();

    do {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: printf("Enter value to enqueue: ");
                    scanf("%d", &val);
                    enqueue(val);
                    break;
            case 2: val = dequeue();
                    if(val != -1) printf("Dequeued value: %d\n", val);
                    break;
            case 3: display();
                    break;
        }
    } while(choice != 4);

    getch();
}
