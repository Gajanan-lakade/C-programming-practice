/*
 Program: Data Types in C
 Description: Demonstrates different basic data types
 Author: Gajanan Lakade
*/

#include <stdio.h>

int main(void) {
    int age = 25;
    float temperature = 36.5;
    char grade = 'A';
    double distance = 12345.6789;

    printf("Age: %d\n", age);
    printf("Temperature: %.1f\n", temperature);
    printf("Grade: %c\n", grade);
    printf("Distance: %.4lf\n", distance);

    return 0;
}
