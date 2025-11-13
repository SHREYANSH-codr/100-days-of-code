//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

#include <stdio.h>

int main(void) {
    FILE *fp;
    char name[100];
    int age;

    // Open file in write mode
    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Take user input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline if present
    int len = 0;
    while (name[len] != '\0') len++;
    if (len > 0 && name[len - 1] == '\n') name[len - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write data to file
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    // Close the file
    fclose(fp);

    printf("Data successfully saved to info.txt\n");

    return 0;
}
