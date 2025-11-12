//Q76: Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int a[10][10];
    int rows, cols, i, j, symmetric = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // For symmetric matrix, rows must be equal to columns
    if (rows != cols) {
        printf("Matrix is not symmetric (not a square matrix).\n");
        return 0;
    }

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check if matrix is equal to its transpose
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric)
        printf("Matrix is symmetric.\n");
    else
        printf("Matrix is not symmetric.\n");

    return 0;
}
