/*
Create a C program that prints a triangle of asterisks followed 
by a hash # on each line, increasing by row.
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
            printf(" * ");
            
        printf(" # \n");
    }
    return 0;
}