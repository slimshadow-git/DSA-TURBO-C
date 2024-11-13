// Write an algorithm and program to delete an item from double linked list. 7
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

void deleteNode(struct Node **head, int key) {
    struct Node *temp = *head;
    while(temp && temp->data != key)
        temp = temp->next;
    if(!temp) return;

    if(temp->prev)
        temp->prev->next = temp->next;
    else
        *head = temp->next;
    if(temp->next)
        temp->next->prev = temp->prev;
    
    free(temp);
}

void display(struct Node *node) {
    while(node) {
        printf("%d ", node->data);
        node = node->next;
    }
}

void main() {
    struct Node *head = NULL, *second = NULL, *third = NULL;
    clrscr();

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1; head->next = second; head->prev = NULL;
    second->data = 2; second->next = third; second->prev = head;
    third->data = 3; third->next = NULL; third->prev = second;

    printf("Original list: ");
    display(head);

    deleteNode(&head, 2);

    printf("\nList after deletion: ");
    display(head);

    getch();
}
