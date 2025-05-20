/*
Problem Statement: Write a C program to print a left-aligned triangle pattern using 
asterisk *, where the number of rows is based on user input.
*/

#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter the value for N: ");
    scanf("%d", &n);

    i = n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf(" * ");

        printf("\n");
    }
    return 0;
}