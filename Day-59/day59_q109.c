//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main(void) {
    int arr[100], n, k;
    int maxSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the value of k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid subarray size.\n");
        return 0;
    }

    // Compute the sum of the first window of size k
    for (int i = 0; i < k; i++)
        maxSum += arr[i];

    int windowSum = maxSum;

    // Slide the window through the array
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("Maximum sum of subarrays of size %d is %d\n", k, maxSum);

    return 0;
}
