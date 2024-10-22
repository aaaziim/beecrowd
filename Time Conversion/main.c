#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the duration in seconds

    // Calculate hours, minutes, and seconds
    int hours = N / 3600;        // 1 hour = 3600 seconds
    int minutes = (N % 3600) / 60; // 1 minute = 60 seconds
    int seconds = N % 60;       // Remaining seconds

    // Print the result in the format hours:minutes:seconds
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
