// Write an algorithm and program to Implementation of binary search tree using array. 11
#include <stdio.h>
#include <conio.h>

#define MAX 15

int bst[MAX];

// Function to initialize the binary search tree array
void initTree() {
    int i;
    for(i = 0; i < MAX; i++)
        bst[i] = -1;  // Initialize all elements as empty
}

// Function to insert a value into the binary search tree
void insert(int val) {
    int i = 0;
    while(i < MAX) {
        if(bst[i] == -1) {  // Insert at the first empty position found
            bst[i] = val;
            return;
        } else if(val < bst[i])  // Move to the left child
            i = 2 * i + 1;
        else  // Move to the right child
            i = 2 * i + 2;
    }
    printf("Tree is full\n");
}

// Function for in-order traversal of the binary search tree
void inorder(int i) {
    if(i >= MAX || bst[i] == -1)
        return;
    inorder(2 * i + 1);      // Visit left child
    printf("%d ", bst[i]);   // Visit node
    inorder(2 * i + 2);      // Visit right child
}

void main() {
    int choice, val;
    clrscr();  // Clear the screen (Turbo C specific)

    initTree();

    do {
        printf("1. Insert\n2. In-order Traversal\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: 
                printf("Enter value to insert: ");
                scanf("%d", &val);
                insert(val);
                break;
            case 2: 
                printf("In-order traversal: ");
                inorder(0);
                printf("\n");
                break;
        }
    } while(choice != 3);

    getch();  // Wait for keypress (Turbo C specific)
}

