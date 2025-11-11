//Q67: Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int arr[100], n, pos, element, i;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position and new element
    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);
    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Check valid position
    if(pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to right
        for(i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }

        // Insert new element
        arr[pos - 1] = element;
        n++;

        // Display updated array
        printf("Array after insertion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
