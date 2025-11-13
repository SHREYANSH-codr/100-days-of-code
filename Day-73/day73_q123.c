//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *fp;
    char filename[100], ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    printf("Enter filename to read: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (isspace((unsigned char)ch))
            inWord = 0;
        else if (!inWord) {
            words++;
            inWord = 1;
        }
    }

    // If file is not empty and last line does not end with newline, count the last line
    if (characters > 0 && ch != '\n')
        lines++;

    fclose(fp);

    printf("Characters: %d\nWords: %d\nLines: %d\n", characters, words, lines);

    return 0;
}
