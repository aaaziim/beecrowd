#include <stdio.h>

int main() {
    int X;

    // Read the integer X
    scanf("%d", &X);

    // Adjust X to the next odd number if it's even
    if (X % 2 == 0) {
        X++;
    }

    // Print the next six odd numbers
    for (int i = 0; i < 6; i++) {
        printf("%d\n", X);
        X += 2;  // Move to the next odd number
    }

    return 0;
}
