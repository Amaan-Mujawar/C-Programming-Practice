/*
Problem Statement: Write a C program to print a number triangle where each 
row prints numbers in reverse order from the current row number down to 1.
*/

#include<stdio.h>

int main() {
    int i, j, n;

    i = n;

    printf("Enter the value for n: ");
    scanf("%d", &n);

    for ( i = 0; i <= n; i++)
    {
        for ( j = i; j >= 1; j--)
            printf(" %d ", j);
        printf("\n");
    }
    return 0;
}