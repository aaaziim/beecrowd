#include <stdio.h>

int main() {
    int a, b, c;
    int x, y, z;

    // Read the input values
    scanf("%d %d %d", &a, &b, &c);

    // Initialize x, y, z with the input values a, b, c
    x = a;
    y = b;
    z = c;

    // Sorting using if-else conditions
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }
    if (x > z) {
        int temp = x;
        x = z;
        z = temp;
    }
    if (y > z) {
        int temp = y;
        y = z;
        z = temp;
    }

    // Print the values in ascending order
    printf("%d\n%d\n%d\n", x, y, z);

    // Print a blank line
    printf("\n");

    // Print the original values
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
