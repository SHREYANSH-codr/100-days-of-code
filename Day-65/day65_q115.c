//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000], t[1000];
    int countS[26] = {0}, countT[26] = {0};

    printf("Enter first string: ");
    if (fgets(s, sizeof(s), stdin) == NULL) {
        printf("Input error.\n");
        return 1;
    }
    printf("Enter second string: ");
    if (fgets(t, sizeof(t), stdin) == NULL) {
        printf("Input error.\n");
        return 1;
    }

    // Remove trailing newlines
    int n = strlen(s);
    if (n > 0 && s[n - 1] == '\n') s[n - 1] = '\0';
    n = strlen(t);
    if (n > 0 && t[n - 1] == '\n') t[n - 1] = '\0';

    // Count frequency of each character in s
    for (int i = 0; s[i] != '\0'; i++)
        countS[s[i] - 'a']++;

    // Count frequency of each character in t
    for (int i = 0; t[i] != '\0'; i++)
        countT[t[i] - 'a']++;

    // Compare counts
    int isAnagram = 1;
    for (int i = 0; i < 26; i++) {
        if (countS[i] != countT[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}
