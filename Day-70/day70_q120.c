//Q120: Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char str[1000];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Input error.\n");
        return 1;
    }

    // Remove trailing newline
    int n = strlen(str);
    if (n > 0 && str[n - 1] == '\n') str[n - 1] = '\0';

    int newSentence = 1; // flag to mark start of sentence

    for (int i = 0; str[i] != '\0'; i++) {
        if (newSentence && isalpha((unsigned char)str[i])) {
            str[i] = toupper((unsigned char)str[i]);
            newSentence = 0;
        } else {
            str[i] = tolower((unsigned char)str[i]);
        }

        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            newSentence = 1; // next character should start new sentence
        }
    }

    printf("Sentence case: %s\n", str);
    return 0;
}
