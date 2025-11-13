//Q92: Find the first repeating lowercase alphabet in a string.

// Q92: Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str[200];
    int freq[26] = {0}; // To store frequency of each lowercase letter
    int i, found = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    // Remove trailing newline
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Process only lowercase alphabets
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {
                printf("First repeating lowercase alphabet: %c\n", ch);
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}