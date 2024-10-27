#include <stdio.h>

int main() {
    float number;
    int positive_count = 0;

    // Loop to read 6 numbers
    for (int i = 0; i < 6; i++) {
        scanf("%f", &number);

        // Check if the number is positive
        if (number > 0) {
            positive_count++;
        }
    }

    // Print the total number of positive values
    printf("%d valores positivos\n", positive_count);

    return 0;
}
