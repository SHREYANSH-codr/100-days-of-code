//Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

#include <stdio.h>

int main(void) {
    int arr[100], n, x;
    int low = 0, high, mid;
    int ceilIndex = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements (sorted order): ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the value of x: ");
    scanf("%d", &x);

    high = n - 1;

    // Binary search for ceil
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == x) {
            ceilIndex = mid;  // exact match found
            high = mid - 1;   // still check for earlier occurrence
        }
        else if (arr[mid] < x)
            low = mid + 1;
        else {
            ceilIndex = mid;  // possible ceil found
            high = mid - 1;   // search for smaller element >= x
        }
    }

    if (ceilIndex != -1)
        printf("Ceil of %d is %d at index %d\n", x, arr[ceilIndex], ceilIndex);
    else
        printf("No ceil found for %d (all elements smaller)\n", x);

    return 0;
}
