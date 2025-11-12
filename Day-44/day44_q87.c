//Q87: Count spaces, digits, and special characters in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int i, spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // safe input method

    // Remove newline if present
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            spaces++;
        else if (isdigit((unsigned char)str[i]))
            digits++;
        else if (!isalpha((unsigned char)str[i]))  // not a letter
            special++;
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
