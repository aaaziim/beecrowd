#include <stdio.h>

int main() {
    double A, B, C;
    const double pi = 3.14159;

    // Reading the input values A, B, and C
    scanf("%lf %lf %lf", &A, &B, &C);

    // a) Area of the triangle (base A, height C)
    double area_triangle = (A * C) / 2.0;

    // b) Area of the circle with radius C
    double area_circle = pi * C * C;

    // c) Area of the trapezium (bases A and B, height C)
    double area_trapezium = ((A + B) * C) / 2.0;

    // d) Area of the square with side B
    double area_square = B * B;

    // e) Area of the rectangle with sides A and B
    double area_rectangle = A * B;

    // Printing the results with three decimal places
    printf("TRIANGULO: %.3lf\n", area_triangle);
    printf("CIRCULO: %.3lf\n", area_circle);
    printf("TRAPEZIO: %.3lf\n", area_trapezium);
    printf("QUADRADO: %.3lf\n", area_square);
    printf("RETANGULO: %.3lf\n", area_rectangle);

    return 0;
}
