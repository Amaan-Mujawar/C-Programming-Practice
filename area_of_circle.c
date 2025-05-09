/*
Problem Statement: Write a C program that takes the radius of a circle 
as input and calculates its area using the formula area = π * r².
*/

#include<stdio.h>

int main() {
    float radius, area;

    printf("\nEnter radius for circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    
    printf("\nArea of Circle is : %.2f. \n", area);
    return 0;
}