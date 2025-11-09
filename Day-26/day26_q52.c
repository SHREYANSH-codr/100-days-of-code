/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>

int main() {
    int i, j;

    // 1st group: 1 star
    printf("*\n\n");

    // 2nd group: 3 stars
    for(i = 1; i <= 3; i++)
        printf("*\n");
    printf("\n");

    // 3rd group: 5 stars
    for(i = 1; i <= 5; i++)
        printf("*\n");
    printf("\n");

    // 4th group: 3 stars
    for(i = 1; i <= 3; i++)
        printf("*\n");
    printf("\n");

    // 5th group: 1 star
    printf("*\n");

    return 0;
}
