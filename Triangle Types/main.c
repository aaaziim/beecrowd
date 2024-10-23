#include <stdio.h>

int main() {
    double A, B, C, temp;

    // Read the three sides
    scanf("%lf %lf %lf", &A, &B, &C);

    // Sort A, B, C in descending order, ensuring A is the largest
    if (A < B) {
        temp = A;
        A = B;
        B = temp;
    }
    if (A < C) {
        temp = A;
        A = C;
        C = temp;
    }
    if (B < C) {
        temp = B;
        B = C;
        C = temp;
    }

    // Check if the sides form a triangle
    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        // Check if it's a right triangle
        if (A * A == B * B + C * C) {
            printf("TRIANGULO RETANGULO\n");
        }
        // Check if it's an obtuse triangle
        if (A * A > B * B + C * C) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        // Check if it's an acute triangle
        if (A * A < B * B + C * C) {
            printf("TRIANGULO ACUTANGULO\n");
        }

        // Check if it's an equilateral triangle
        if (A == B && B == C) {
            printf("TRIANGULO EQUILATERO\n");
        }
        // Check if it's an isosceles triangle
        else if (A == B || B == C || A == C) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
