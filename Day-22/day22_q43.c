//Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int num, temp, digit, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  // store original number

    while(temp > 0) {
        digit = temp % 10;   // extract last digit

        // calculate factorial of the digit
        fact = 1;
        for(int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;         // add factorial to sum
        temp /= 10;          // remove last digit
    }

    if(sum == num)
        printf("%d is a Strong Number.", num);
    else
        printf("%d is not a Strong Number.", num);

    return 0;
}
