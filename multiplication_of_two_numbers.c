/*
Problem Statement: Create a C program that multiplies two float numbers entered by the user 
and displays the result.
*/

#include<stdio.h>

int main() {
    float a, b, c;

    printf("\nEnter the value of a: ");
    scanf("%f", &a);

    printf("\nEnter the value of b: ");
    scanf("%f", &b);

    c = a * b;

    printf("\nThe Multiplication of %f and %f is %f. \n", a, b, c);
    return 0;
}