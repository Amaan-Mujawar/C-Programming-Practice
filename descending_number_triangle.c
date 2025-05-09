/*
Problem Statement: Create a C program to print a triangle of numbers in descending 
order from n to 1, where each row shows decreasing number of elements.
*/

#include<stdio.h>

int main() {
    int i, j, n;

    i = n;

    printf("Enter the value for n: ");
    scanf("%d", &n);

    for ( i = n; i >= 1; i--)
    {
        for ( j = 1; j <= i; j++)
            printf(" %d ", j);
        
        printf("\n");
    }
    return 0;
}