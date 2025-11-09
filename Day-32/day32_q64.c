//Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long num;
    int count[10] = {0};  // to store frequency of digits 0-9
    int digit, i, maxDigit = 0, maxCount = 0;

    printf("Enter a number: ");
    scanf("%ld", &num);

    if(num < 0)
        num = -num;  // handle negative numbers

    // count frequency of each digit
    while(num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // find the digit with maximum frequency
    for(i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit that occurs most: %d (occurs %d times)\n", maxDigit, maxCount);

    return 0;
}
