//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *input, *output;
    int ch;  // Use int to properly handle EOF

    // Open input file in read mode
    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    // Open output file in write mode
    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error: Cannot open output.txt\n");
        fclose(input);
        return 1;
    }

    // Read each character until EOF
    while ((ch = fgetc(input)) != EOF) {
        fputc(toupper((unsigned char)ch), output);
    }

    fclose(input);
    fclose(output);

    printf("Conversion to uppercase completed. Check output.txt\n");

    return 0;
}
