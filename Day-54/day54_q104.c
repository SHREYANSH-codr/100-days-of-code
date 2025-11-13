//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2; // Sum of 1 to n
    int leftSum = 0;
    int x = -1;

    for (int i = 1; i <= n; i++) {
        leftSum += i; // sum from 1 to i
        int rightSum = totalSum - leftSum + i; // sum from i to n

        if (leftSum == rightSum) {
            x = i;
            break; // since at most one pivot exists
        }
    }

    if (x != -1)
        printf("Pivot integer is %d\n", x);
    else
        printf("No pivot integer found (-1)\n");

    return 0;
}
