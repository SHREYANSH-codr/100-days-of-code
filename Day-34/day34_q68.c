// Q68: Delete an element from an array.


#include <stdio.h>

int main() {
    int arr[100], n, pos, i;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position to delete
    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // Check for valid position
    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        // Shift elements left to delete
        for(i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Reduce array size

        // Display updated array
        printf("Array after deletion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}