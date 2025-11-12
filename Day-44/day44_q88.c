//Q88: Replace spaces with hyphens in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // safe input

    // Remove newline if present
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    // Replace spaces with hyphens
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            str[i] = '-';
    }

    printf("Modified string: %s\n", str);

    return 0;
}
