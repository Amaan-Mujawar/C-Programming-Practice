/*
Problem Statement: Develop a C program to print a pattern where each 
row starts with an asterisk (*) followed by increasing numbers 
starting from 1, up to the row index.
*/

#include <stdio.h>

int main()
{
    int i, j, n;
    i = n;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf(" * ");
        for (j = 1; j <= i - 1; j++)
            printf(" %d ", j);
        printf("\n");
    }
    return 0;
}