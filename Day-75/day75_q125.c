//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *fp;
    char filename[100];
    char text[1000];

    printf("Enter the filename to append to: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Clear input buffer before taking a line
    getchar(); // to consume leftover newline from previous input

    printf("Enter the text to append: ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        printf("Input error.\n");
        fclose(fp);
        return 1;
    }

    // Append the text to the file
    fprintf(fp, "%s", text);

    fclose(fp);

    printf("Text successfully appended to %s\n", filename);

    return 0;
}
