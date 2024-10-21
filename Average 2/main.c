#include <stdio.h>

int main() {
    double A, B, C, MEDIA;

    // Reading three floating-point values
    scanf("%lf %lf %lf", &A, &B, &C);

    // Calculating the weighted average
    MEDIA = ((A * 2) + (B * 3) + (C * 5)) / 10.0;

    // Printing the result
    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}
