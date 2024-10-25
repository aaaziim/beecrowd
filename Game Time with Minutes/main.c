#include <stdio.h>

int main() {
    int startHour, startMinute, endHour, endMinute;
    int totalStartMinutes, totalEndMinutes, durationMinutes, durationHours, durationMins;

    // Read the start and end times in hours and minutes
    scanf("%d %d %d %d", &startHour, &startMinute, &endHour, &endMinute);

    // Convert start and end times into total minutes from 00:00
    totalStartMinutes = startHour * 60 + startMinute;
    totalEndMinutes = endHour * 60 + endMinute;

    // If the end time is less than the start time, it means the game spanned two days
    if (totalEndMinutes <= totalStartMinutes) {
        totalEndMinutes += 24 * 60;  // Add 24 hours in minutes to the end time
    }

    // Calculate the total duration in minutes
    durationMinutes = totalEndMinutes - totalStartMinutes;

    // Convert the total duration back into hours and minutes
    durationHours = durationMinutes / 60;
    durationMins = durationMinutes % 60;

    // Print the result in the required format
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationHours, durationMins);

    return 0;
}
