//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main(void) {
    int arr[100], n;
    int xorAll = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        xorAll ^= arr[i]; // XOR all elements in the array
    }

    // XOR numbers from 1 to n-1 (assuming numbers are from 1 to n-1 with one duplicate)
    for (int i = 1; i <= n - 1; i++) {
        xorAll ^= i;
    }

    printf("Repeated element is %d\n", xorAll);

    return 0;
}
