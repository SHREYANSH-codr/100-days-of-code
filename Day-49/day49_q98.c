//Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char name[100];
    int i, len, lastSpace = -1;

    printf("Enter your full name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    // Remove trailing newline if present
    len = strlen(name);
    if (len > 0 && name[len - 1] == '\n')
        name[len - 1] = '\0';

    // Find the last space (before surname)
    for (i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            lastSpace = i;
            break;
        }
    }

    printf("Formatted name: ");

    // Print initials for all words except the surname
    for (i = 0; i < len; i++) {
        if ((i == 0 || name[i - 1] == ' ') && i < lastSpace && isalpha((unsigned char)name[i])) {
            printf("%c.", toupper(name[i]));
        }
    }

    // Print the surname (after the last space)
    if (lastSpace != -1)
        printf(" %s\n", &name[lastSpace + 1]);
    else
        printf("%s\n", name); // If only one name entered

    return 0;
}
