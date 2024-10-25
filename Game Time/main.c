#include <stdio.h>

int main() {
    int start, end, duration;

    // Read the start and end times
    scanf("%d %d", &start, &end);

    // Calculate the duration of the game
    if (start == end) {
        // If start and end times are the same, the game lasted 24 hours
        duration = 24;
    } else if (start < end) {
        // If start time is less than end time, just subtract
        duration = end - start;
    } else {
        // If start time is greater than end time, it means the game spanned two days
        duration = 24 - start + end;
    }

    // Print the result in the required format
    printf("O JOGO DUROU %d HORA(S)\n", duration);

    return 0;
}
