//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>

int main(void) {
    int arr1[100], arr2[100], merged[200];
    int m, n, i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter %d elements of first sorted array: ", m);
    for (int idx = 0; idx < m; idx++)
        scanf("%d", &arr1[idx]);

    printf("Enter size of second array: ");
    scanf("%d", &n);
    printf("Enter %d elements of second sorted array: ", n);
    for (int idx = 0; idx < n; idx++)
        scanf("%d", &arr2[idx]);

    // Merge the two sorted arrays
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    // Copy remaining elements
    while (i < m)
        merged[k++] = arr1[i++];
    while (j < n)
        merged[k++] = arr2[j++];

    // Print merged array
    printf("Merged sorted array: ");
    for (int idx = 0; idx < k; idx++) {
        if (idx != k - 1)
            printf("%d, ", merged[idx]);
        else
            printf("%d", merged[idx]);
    }
    printf("\n");

    return 0;
}
