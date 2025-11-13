//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>

int main(void) {
    FILE *fp;
    int num, sum = 0, count = 0;
    double average;

    // Open the file in read mode
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: Cannot open numbers.txt\n");
        return 1;
    }

    // Read integers until EOF
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in the file.\n");
        return 0;
    }

    average = (double)sum / count;

    printf("Sum: %d\n", sum);
    printf("Average: %.2lf\n", average);

    return 0;
}
