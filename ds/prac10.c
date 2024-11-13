// Write an algorithm and program to Implementation of circular queue using array. 10

#include <stdio.h>
#include <conio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

void enqueue(int val) {
    if((rear + 1) % MAX == front)
        printf("Queue Overflow\n");
    else {
        if(front == -1) front = 0;
        rear = (rear + 1) % MAX;
        queue[rear] = val;
    }
}

int dequeue() {
    if(front == -1) {
        printf("Queue Underflow\n");
        return -1;
    } else {
        int val = queue[front];
        if(front == rear)
            front = rear = -1;
        else
            front = (front + 1) % MAX;
        return val;
    }
}

void display() {
    int i;
    if(front == -1)
        printf("Queue is empty\n");
    else {
        printf("Queue elements: ");
        for(i = front; i != rear; i = (i + 1) % MAX)
            printf("%d ", queue[i]);
        printf("%d\n", queue[rear]);
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
