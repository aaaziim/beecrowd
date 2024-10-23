#include <stdio.h>

int main() {
    float x, y;

    // Read input for coordinates x and y
    scanf("%f %f", &x, &y);

    // Check the position of the point and print the corresponding output
    if (x == 0.0 && y == 0.0) {
        printf("Origem\n");
    } else if (x == 0.0) {
        printf("Eixo Y\n");
    } else if (y == 0.0) {
        printf("Eixo X\n");
    } else if (x > 0 && y > 0) {
        printf("Q1\n");  // First quadrant
    } else if (x < 0 && y > 0) {
        printf("Q2\n");  // Second quadrant
    } else if (x < 0 && y < 0) {
        printf("Q3\n");  // Third quadrant
    } else if (x > 0 && y < 0) {
        printf("Q4\n");  // Fourth quadrant
    }

    return 0;
}
