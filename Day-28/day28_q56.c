//Q56: Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];  // array declaration with max size 100

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   // reading elements
    }

    printf("Elements of the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // printing elements
    }

    return 0;
}
