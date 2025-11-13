//Q91: Remove all vowels from a string.

// Q91: Remove all vowels from a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str[200], result[200];
    int i, j = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    // Remove trailing newline from fgets
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    // Copy only non-vowel characters to result
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower((unsigned char)str[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("String after removing vowels: %s\n", result);
    return 0;
}