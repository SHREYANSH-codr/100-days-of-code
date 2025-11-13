//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char date[20];
    int day, month, year;
    const char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date (dd/mm/yyyy): ");
    if (fgets(date, sizeof(date), stdin) == NULL) {
        fprintf(stderr, "Input error.\n");
        return 1;
    }

    // Parse the date into integers
    if (sscanf(date, "%d/%d/%d", &day, &month, &year) != 3) {
        printf("Invalid date format! Use dd/mm/yyyy.\n");
        return 1;
    }

    // Validate month range
    if (month < 1 || month > 12) {
        printf("Invalid month number!\n");
        return 1;
    }

    printf("Formatted date: %02d-%s-%04d\n", day, months[month - 1], year);
    return 0;
}
