//Q69: Find the second largest element in an array.

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int largest, second;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    if (arr[0] > arr[1]) {
        largest = arr[0];
        second = arr[1];
    } else {
        largest = arr[1];
        second = arr[0];
    }

    for(i = 2; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("Second largest element = %d\n", second);
    return 0;
}
