//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n",
           num1 + num2, num1 - num2, num1 * num2, num1 / num2);

    return 0;
}