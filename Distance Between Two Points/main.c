#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distance;

    // Reading the coordinates of the two points
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    // Calculating the distance between the two points
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output the result with four decimal places
    printf("%.4lf\n", distance);

    return 0;
}
