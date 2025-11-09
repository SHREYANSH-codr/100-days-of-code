//Q42: Write a program to check if a number is a perfect number.

#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // find sum of proper divisors
    for(i = 1; i <= num / 2; i++) {
        if(num % i == 0)
            sum += i;
    }

    // check if sum equals the number
    if(sum == num && num != 0)
        printf("%d is a Perfect Number.", num);
    else
        printf("%d is not a Perfect Number.", num);

    return 0;
}
