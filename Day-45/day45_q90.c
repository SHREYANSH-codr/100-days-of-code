//Q90: Toggle case of each character in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str[200];

    printf("Enter a string: ");
    if (fgets(str, sizeof str, stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') str[len - 1] = '\0';

    for (size_t i = 0; str[i] != '\0'; ++i) {
        unsigned char c = (unsigned char) str[i];
        if (islower(c))
            str[i] = (char) toupper(c);
        else if (isupper(c))
            str[i] = (char) tolower(c);
    }

    printf("Toggled case string: %s\n", str);
    return 0;
}
