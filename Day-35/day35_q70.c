//Q70: Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int arr[100], n, k, i;
    int temp[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    // In case k > n
    k = k % n;

    // Copy last k elements to temp
    for(i = 0; i < k; i++)
        temp[i] = arr[n - k + i];

    // Shift the remaining elements to the right
    for(i = n - 1; i >= k; i--)
        arr[i] = arr[i - k];

    // Copy back temp to beginning
    for(i = 0; i < k; i++)
        arr[i] = temp[i];

    printf("Array after rotating right by %d positions:\n", k);
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
