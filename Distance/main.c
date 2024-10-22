#include <stdio.h>

int main() {
    int distance, time;

    // Reading the distance value
    scanf("%d", &distance);

    // Calculating the time it takes for car Y to be ahead of car X by the given distance
    // Since car Y is 1 km ahead of car X every 2 minutes, time is calculated as distance * 2
    time = distance * 2;

    // Output the result with the message "minutos"
    printf("%d minutos\n", time);

    return 0;
}
