/*
Problem Statement: Create a simple C program that prints "Hello, World!" 
and then reads and prints a string entered by the user.
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    printf("Hello, World!\n");
    scanf("%s", &s);
    printf("%s \n", s);
    return 0;
}