#include <stdio.h>

int main() {
    int number;
    int even_count = 0, odd_count = 0, positive_count = 0, negative_count = 0;

    // Loop to read 5 numbers
    for (int i = 0; i < 5; i++) {
        scanf("%d", &number);

        // Check if the number is even or odd
        if (number % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }

        // Check if the number is positive, negative, or zero
        if (number > 0) {
            positive_count++;
        } else if (number < 0) {
            negative_count++;
        }
    }

    // Output the counts
    printf("%d valor(es) par(es)\n", even_count);
    printf("%d valor(es) impar(es)\n", odd_count);
    printf("%d valor(es) positivo(s)\n", positive_count);
    printf("%d valor(es) negativo(s)\n", negative_count);

    return 0;
}
