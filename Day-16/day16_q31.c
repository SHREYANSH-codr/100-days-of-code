//Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int num, i;
    int binary[32];  // To store binary digits (max for 32-bit int)
    int index = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Convert to binary by dividing by 2
    while (num > 0) {
        binary[index] = num % 2;
        num = num / 2;
        index++;
    }

    printf("Binary representation: ");
    // Print binary digits in reverse order
    for (i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
