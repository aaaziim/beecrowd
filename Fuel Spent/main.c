#include <stdio.h>

int main() {
    int time, speed;
    double distance, fuel_needed;

    // Reading the input values: time spent (in hours) and average speed (in km/h)
    scanf("%d %d", &time, &speed);

    // Calculating the distance traveled
    distance = time * speed;

    // Calculating the fuel needed (the car does 12 km/L)
    fuel_needed = distance / 12.0;

    // Output the result with three decimal places
    printf("%.3lf\n", fuel_needed);

    return 0;
}
