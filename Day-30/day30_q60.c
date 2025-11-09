//Q60: Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int posCount = 0, negCount = 0, zeroCount = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] > 0)
            posCount++;
        else if(arr[i] < 0)
            negCount++;
        else
            zeroCount++;
    }

    printf("Positive elements = %d\n", posCount);
    printf("Negative elements = %d\n", negCount);
    printf("Zero elements     = %d\n", zeroCount);

    return 0;
}