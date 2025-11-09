//Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        digit = num % 10;     // extract last digit
        sum += digit;         // add to sum
        num /= 10;            // remove last digit
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
