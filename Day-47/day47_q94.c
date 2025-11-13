//Q94: Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str[200];
    char word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    // Remove trailing newline if present
    size_t slen = strlen(str);
    if (slen > 0 && str[slen - 1] == '\n')
        str[slen - 1] = '\0';

    while (1) {
        // If current char is alphabetic, add to current word
        if (isalpha((unsigned char)str[i])) {
            word[j++] = str[i];
        } 
        else {
            // Word ended
            word[j] = '\0';
            len = strlen(word);

            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }
            j = 0; // Reset word index
        }

        // Break after the null terminator is processed
        if (str[i] == '\0')
            break;

        i++;
    }

    if (maxLen > 0)
        printf("Longest word: %s (Length: %d)\n", longest, maxLen);
    else
        printf("No valid word found.\n");

    return 0;
}
