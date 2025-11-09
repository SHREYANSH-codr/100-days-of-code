/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main() {
    int i, j, space;

    // Upper half of diamond
    for(i = 1; i <= 4; i++) {
        for(space = i; space < 4; space++)      // print leading spaces
            printf(" ");
        for(j = 1; j <= (2 * i - 1); j++)       // print stars
            printf("*");
        printf("\n");
    }

    // Lower half of diamond
    for(i = 3; i >= 1; i--) {
        for(space = 3; space >= i; space--)     // print leading spaces
            printf(" ");
        for(j = 1; j <= (2 * i - 1); j++)       // print stars
            printf("*");
        printf("\n");
    }

    return 0;
}
