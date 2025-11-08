//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input time in seconds
    scanf("input your time in seconds: %d", &totalSeconds);

    // Conversion
    hours = totalSeconds / 3600;          // 1 hour = 3600 seconds
    totalSeconds = totalSeconds % 3600;   // remaining seconds
    minutes = totalSeconds / 60;          // 1 minute = 60 seconds
    seconds = totalSeconds % 60;          // remaining seconds

    // Output in H:M:S format
    printf("%d:%d:%d", hours, minutes, seconds);

    return 0;
}