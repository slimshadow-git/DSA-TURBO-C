// Write an algorithm and program to add two matrix A and B. 3

#include <stdio.h>
#include <conio.h>

void main() {
    int A[2][2], B[2][2], C[2][2], i, j;
    clrscr();

    printf("Enter elements of matrix A (2x2):\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of matrix B (2x2):\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &B[i][j]);

    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            C[i][j] = A[i][j] + B[i][j];

    printf("Resultant matrix C (A + B):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    getch();
}
