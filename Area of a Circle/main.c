#include <stdio.h>

int main() {
    double R, A;
    const double pi = 3.14159;

    // Reading the radius
    scanf("%lf", &R);

    // Calculating the area of the circle
    A = pi * R * R;

    // Printing the result with 4 decimal places
    printf("A=%.4lf\n", A);

    return 0;
}
