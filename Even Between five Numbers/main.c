#include <stdio.h>

int main() {
    int number, even_count = 0;

    // Loop to read 5 numbers
    for (int i = 0; i < 5; i++) {
        scanf("%d", &number);

        // Check if the number is even
        if (number % 2 == 0) {
            even_count++;
        }
    }

    // Print the count of even values
    printf("%d valores pares\n", even_count);

    return 0;
}
