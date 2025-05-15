/*
Problem Statement: Write a C program to print a triangle of numbers from 1 
to the current row number, followed by 1 at the end of each line.
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
            
        printf(" 1 \n");
    }
    return 0;
}