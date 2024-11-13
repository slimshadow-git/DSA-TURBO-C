// Write an algorithm and program to insert an item into double linked list. 6

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

void insertFront(struct Node **head, int val) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = *head;
    if(*head)
        (*head)->prev = newNode;
    *head = newNode;
}

void display(struct Node *node) {
    while(node) {
        printf("%d ", node->data);
        node = node->next;
    }
}

void main() {
    struct Node *head = NULL;
    clrscr();

    insertFront(&head, 10);
    insertFront(&head, 20);
    insertFront(&head, 30);

    printf("Doubly linked list: ");
    display(head);

    getch();
}

