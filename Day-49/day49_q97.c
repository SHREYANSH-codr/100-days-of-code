//Q97: Print the initials of a name.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char name[100];
    int i;

    printf("Enter your full name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    // Remove trailing newline if present
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n')
        name[len - 1] = '\0';

    printf("Initials: ");

    // Print first character if it's a letter
    if (isalpha((unsigned char)name[0]))
        printf("%c", toupper(name[0]));

    // Check for spaces and print next character as initial
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && isalpha((unsigned char)name[i]))
            printf(".%c", toupper(name[i]));
    }

    printf(".\n");
    return 0;
}
