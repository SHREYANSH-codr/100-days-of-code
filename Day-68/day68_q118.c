//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main(void) {
    int arr[100], n;
    int expectedSum, actualSum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements (numbers from 0 to %d with one missing): ", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }

    // Sum of numbers from 0 to n
    expectedSum = n * (n + 1) / 2;

    int missingNumber = expectedSum - actualSum;

    printf("Missing number is %d\n", missingNumber);

    return 0;
}
