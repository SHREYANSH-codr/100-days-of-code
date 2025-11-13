//Q89: Count frequency of a given character in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Input error.\n");
        return 1;
    }
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') str[len - 1] = '\0';

    printf("Enter a character to find frequency: ");
    /* leading space in format skips any leftover newline/whitespace */
    if (scanf(" %c", &ch) != 1) {
        printf("Input error.\n");
        return 1;
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("Frequency of '%c' = %d\n", ch, count);
    return 0;
}
