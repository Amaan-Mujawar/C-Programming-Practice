/*
Problem Statement: Write a C program to print a right-aligned inverted triangle 
pattern of asterisks (*) based on user input.
*/

#include<stdio.h>

int main() {
    int i, j, k, n;

    i = n;

    printf("Enter the value for n: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        for ( k = 1; k <= i; k++)
            printf("   ");

        for ( j = n; j >= i; j--)
            printf(" * ");
        
        printf("\n");
    }
    return 0;
}