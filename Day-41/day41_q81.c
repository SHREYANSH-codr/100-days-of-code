//Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);  // or use fgets(str, sizeof(str), stdin);

    // Count characters manually
    for(i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("Number of characters in the string = %d\n", count);

    return 0;
}
