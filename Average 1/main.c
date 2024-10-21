#include <stdio.h>

int main() {
    double A, B, MEDIA;

    // Reading two floating-point values
    scanf("%lf %lf", &A, &B);

    // Calculating the weighted average
    MEDIA = ((A * 3.5) + (B * 7.5)) / 11.0;

    // Printing the result with 5 decimal places
    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}
