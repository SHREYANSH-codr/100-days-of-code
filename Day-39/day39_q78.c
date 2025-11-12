//Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int a[10][10];
    int rows, cols, i, j, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("Matrix must be square to find main diagonal sum.\n");
        return 0;
    }

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate sum of main diagonal elements
    for(i = 0; i < rows; i++) {
        sum += a[i][i];
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
