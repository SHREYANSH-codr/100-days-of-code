// Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main(void) {
    char str[200];
    char *wordStart = NULL;
    int i;

    printf("Enter a sentence: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    // Remove trailing newline if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    for (i = 0; i <= strlen(str); i++) {
        // Detect word start
        if (!isspace((unsigned char)str[i]) && wordStart == NULL) {
            wordStart = &str[i];
        }
        // Detect word end or string end
        else if ((isspace((unsigned char)str[i]) || str[i] == '\0') && wordStart != NULL) {
            reverseWord(wordStart, &str[i - 1]);
            wordStart = NULL;
        }
    }

    printf("Sentence after reversing each word:\n%s\n", str);
    return 0;
}
