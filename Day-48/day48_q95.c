//Q95: Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[200], str2[200], temp[400];

    printf("Enter first string: ");
    if (fgets(str1, sizeof(str1), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    printf("Enter second string: ");
    if (fgets(str2, sizeof(str2), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    // Remove trailing newlines if present
    size_t len1 = strlen(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n')
        str1[len1 - 1] = '\0';

    size_t len2 = strlen(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n')
        str2[len2 - 1] = '\0';

    // If lengths differ, they can't be rotations
    if (strlen(str1) != strlen(str2)) {
        printf("The strings are NOT rotations of each other.\n");
        return 0;
    }

    // Concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL)
        printf("The strings ARE rotations of each other.\n");
    else
        printf("The strings are NOT rotations of each other.\n");

    return 0;
}
