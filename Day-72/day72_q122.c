//Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

#include <stdio.h>

int main(void) {
    FILE *fp;
    char line[256];

    // Open the file in read mode
    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Contents of info.txt:\n");

    // Read lines until EOF
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);  // fgets() keeps the newline character
    }

    // Close the file
    fclose(fp);

    return 0;
}
