#include <stdio.h>

int main() {
    int distance;
    float fuel, consumption;

    // Reading the input values: total distance and fuel consumption
    scanf("%d %f", &distance, &fuel);

    // Calculating the average consumption
    consumption = distance / fuel;

    // Output the result with three decimal places followed by "km/l"
    printf("%.3f km/l\n", consumption);

    return 0;
}
