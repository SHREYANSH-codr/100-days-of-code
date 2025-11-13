//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    int n;

    printf("Enter a string: ");
    if (fgets(s, sizeof(s), stdin) == NULL) {
        printf("Input error.\n");
        return 1;
    }

    // Remove trailing newline if present
    n = strlen(s);
    if (n > 0 && s[n - 1] == '\n')
        s[n - 1] = '\0';

    n = strlen(s);
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        int visited[256] = {0}; // ASCII character set
        int length = 0;

        for (int j = i; j < n; j++) {
            if (visited[(unsigned char)s[j]])
                break; // character repeated
            visited[(unsigned char)s[j]] = 1;
            length++;
        }

        if (length > maxLen)
            maxLen = length;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
