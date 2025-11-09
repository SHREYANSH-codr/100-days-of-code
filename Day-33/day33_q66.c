//Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, i, key, pos;
    int arr[100];

    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    printf("Enter %d elements in ascending order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    // find position to insert
    for(pos = 0; pos < n; pos++) {
        if(arr[pos] > key)
            break;
    }

    // shift elements to make space
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // insert element
    arr[pos] = key;
    n++;  // increase array size

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
