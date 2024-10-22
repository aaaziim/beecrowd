#include <stdio.h>
#include <math.h>

int main() {
    double radius, volume;
    const double pi = 3.14159;

    // Reading the radius of the sphere
    scanf("%lf", &radius);

    // Calculating the volume of the sphere using the formula (4/3) * pi * R^3
    volume = (4.0/3) * pi * pow(radius, 3);

    // Output the result with three decimal places
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
