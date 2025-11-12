//Q72: Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int a[10][10];
    int rows, cols, i, j, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];   // add each element to sum
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
