//Q93: Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str1[200], str2[200];
    int freq[26] = {0};
    int i;

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

    // Count character frequencies for both strings (case-insensitive)
    for (i = 0; str1[i] != '\0'; i++) {
        char ch = tolower((unsigned char)str1[i]);
        if (ch >= 'a' && ch <= 'z')
            freq[ch - 'a']++;
    }

    for (i = 0; str2[i] != '\0'; i++) {
        char ch = tolower((unsigned char)str2[i]);
        if (ch >= 'a' && ch <= 'z')
            freq[ch - 'a']--;
    }

    // Check if all frequencies are zero
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("The strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams of each other.\n");
    return 0;
}
