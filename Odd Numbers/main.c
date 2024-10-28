#include <stdio.h>

int main() {
    int X;

    // Read the integer X
    scanf("%d", &X);

    // Loop through numbers from 1 to X
    for (int i = 1; i <= X; i++) {
        // Check if the number is odd
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
