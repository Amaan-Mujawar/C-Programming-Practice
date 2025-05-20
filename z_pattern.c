/*
Problem Statement: Create a C program that prints a 'Z' shaped pattern using asterisks (*), where the size of 
the pattern is input by the user. It should validate that the size is 3 or greater.
*/

#include <stdio.h>

void printZPattern(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Print '*' for the top row, bottom row, and the diagonal from top-right to bottom-left
            if (i == 0 || i == size - 1 || j == size - i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int size;

    // Get the size of the pattern from the user
    printf("Enter the size of the 'Z' pattern (must be >= 3): ");
    scanf("%d", &size);

    // Validate the size input
    if (size < 3) {
        printf("Size must be 3 or greater.\n");
        return 1;
    }

    // Print the 'Z' pattern
    printZPattern(size);

    return 0;
}
