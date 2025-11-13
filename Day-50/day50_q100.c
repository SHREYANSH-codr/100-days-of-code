//Q100: Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];
    int len, i, j, k;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    // Remove trailing newline if present
    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';
    len = strlen(str);

    printf("All substrings are:\n");

    // Generate and print all substrings
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            // Print substring from str[i] to str[j]
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
