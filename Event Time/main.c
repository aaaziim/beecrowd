#include <stdio.h>

int main() {
    int start_day, start_hour, start_minute, start_second;
    int end_day, end_hour, end_minute, end_second;

    // Read start date and time
    scanf("Dia %d", &start_day);
    scanf("%d : %d : %d", &start_hour, &start_minute, &start_second);

    // Read end date and time
    scanf("Dia %d", &end_day);
    scanf("%d : %d : %d", &end_hour, &end_minute, &end_second);

    // Convert start and end times into seconds
    int start_total_seconds = start_day * 86400 + start_hour * 3600 + start_minute * 60 + start_second;
    int end_total_seconds = end_day * 86400 + end_hour * 3600 + end_minute * 60 + end_second;

    // Calculate the difference in seconds
    int duration_seconds = end_total_seconds - start_total_seconds;

    // Convert the total seconds difference back into days, hours, minutes, and seconds
    int days = duration_seconds / 86400;
    duration_seconds %= 86400;
    int hours = duration_seconds / 3600;
    duration_seconds %= 3600;
    int minutes = duration_seconds / 60;
    int seconds = duration_seconds % 60;

    // Output the result
    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", seconds);

    return 0;
}
