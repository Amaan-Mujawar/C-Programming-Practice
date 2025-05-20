/*
Problem Statement: Create a C program to print a triangle pattern of 
asterisks (*) and hashes (#) where the boundary elements are * and 
the inner elements are #, except the last row which is fully made of *.
*/

#include<stdio.h>

int main() {
    int i, j, n;

    i = n;

    printf("Enter the value for n: ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <= i; j++){
            if (j == 0 || i == j || i == n-1)
            {
                printf(" * ");
            }
            else
            {
                printf(" # ");
            }
            
        }
        printf("\n");
    }
    return 0;
}