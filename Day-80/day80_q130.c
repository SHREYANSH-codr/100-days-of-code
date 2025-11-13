//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main(void) {
    FILE *fp;
    struct Student s;
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Open file in write mode
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Input and write student records
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number, marks for student %d: ", i + 1);
        scanf("%s %d %f", s.name, &s.roll, &s.marks);
        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);

    // Open file in read mode
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nStudent Records:\n");

    // Read and display student records
    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);

    return 0;
}
