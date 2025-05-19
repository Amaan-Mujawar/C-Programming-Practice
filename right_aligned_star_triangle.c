/*
Problem Statement: Write a C program to print a right-aligned triangle 
pattern of asterisks (*), based on user input for height.
*/

#include<stdio.h>

int main() {
    int i, j, k, n;

    i = n;

    printf("Enter the value for n: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        for ( k = 1; k <= n-i; k++)
            printf("   ");

        for ( j = 1; j <= i; j++)
            printf(" * ");
            
        printf("\n");
    }
    return 0;
}