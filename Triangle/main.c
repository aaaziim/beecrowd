#include <stdio.h>

int main() {
    float A, B, C;

    // Read the input values
    scanf("%f %f %f", &A, &B, &C);

    // Check if the values can form a triangle using the triangle inequality theorem
    if ((A + B > C) && (A + C > B) && (B + C > A)) {
        // It's a triangle, calculate the perimeter
        float perimeter = A + B + C;
        printf("Perimetro = %.1f\n", perimeter);
    } else {
        // It's not a triangle, calculate the area of a trapezium
        float area = ((A + B) * C) / 2;
        printf("Area = %.1f\n", area);
    }

    return 0;
}
