// Write an algorithm and program to multiply two matrix A and B. 4
#include <stdio.h>
#include <conio.h>

void main() {
    int A[2][2], B[2][2], C[2][2], i, j, k;
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
        for(j = 0; j < 2; j++) {
            C[i][j] = 0;
            for(k = 0; k < 2; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    printf("Resultant matrix C (A * B):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    getch();
}
