//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include <stdio.h>

int main(void) {
    FILE *fp;
    char filename[100];
    char ch;

    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try to open the file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File '%s' does not exist.\n", filename);
        return 1;
    }

    printf("Contents of %s:\n", filename);

    // Read and display file content
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}