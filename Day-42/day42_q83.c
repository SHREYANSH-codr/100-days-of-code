//Q83: Count vowels and consonants in a string.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[500];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    if (!fgets(str, sizeof(str), stdin)) return 0;  // safe input

    // remove trailing newline if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') str[len - 1] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str[i];
        if (isalpha(ch)) {
            char lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' ||
                lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
