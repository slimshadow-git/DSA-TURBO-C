// Write an algorithm and program to delete an element from an array. 2

#include <stdio.h>
#include <conio.h>

void main() {
    int arr[100], n, pos, i;
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    
    n--;

    printf("Array after deletion: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    getch();
}
