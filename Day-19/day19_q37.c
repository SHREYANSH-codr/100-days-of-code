//Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // maximum of the two numbers
    max = (num1 > num2) ? num1 : num2;

    // find LCM by checking multiples
    while(1) {
        if(max % num1 == 0 && max % num2 == 0) {
            printf("LCM of %d and %d is: %d", num1, num2, max);
            break;
        }
        max++;
    }

    return 0;
}
