/*
 Program: Operators in C
 Description: Demonstrates arithmetic, relational and logical operators
 Author: Gajanan Lakade
*/

#include <stdio.h>

int main(void) {
    int a = 10, b = 5;

    /* Arithmetic Operators */
    printf("Addition: %d\n", a + b); //Addition of two numbers
    printf("Subtraction: %d\n", a - b); //Subtraction of two numbers
    printf("Multiplication: %d\n", a * b); //Multiplication of two numbers
    printf("Division: %d\n", a / b); //Division of two numbers

    /* Relational Operators */
    printf("a > b : %d\n", a > b);
    printf("a == b : %d\n", a == b);

    /* Logical Operators */
    printf("(a > b && b > 0) : %d\n", (a > b && b > 0));
    printf("(a < b || b > 0) : %d\n", (a < b || b > 0));

    return 0;
}
