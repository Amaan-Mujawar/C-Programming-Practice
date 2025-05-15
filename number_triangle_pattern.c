/*
Problem Statement: Write a C program that prints a triangle of numbers where 
each row displays numbers from 1 to the row number.
*/

#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter the value for N: ");
    scanf("%d", &n);

    i = n;

    for (i = 0; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf(" %d ", j);
            
        printf("\n");
    }
    return 0;
}