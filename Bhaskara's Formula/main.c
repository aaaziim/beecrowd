#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C, D, R1, R2;

    // Read the coefficients A, B, and C
    scanf("%lf %lf %lf", &A, &B, &C);

    // Calculate the discriminant
    D = (B * B) - (4 * A * C);

    // Check for impossible conditions
    if (A == 0 || D < 0) {
        printf("Impossivel calcular\n");
    } else {
        // Calculate the roots using Bhaskara's formula
        R1 = (-B + sqrt(D)) / (2 * A);
        R2 = (-B - sqrt(D)) / (2 * A);

        // Print the roots with 5 digits after the decimal point
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }

    return 0;
}
