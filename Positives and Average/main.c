#include <stdio.h>

int main() {
    float number, sum = 0.0;
    int positive_count = 0;

    // Loop to read 6 numbers
    for (int i = 0; i < 6; i++) {
        scanf("%f", &number);

        // Check if the number is positive
        if (number > 0) {
            positive_count++;
            sum += number;
        }
    }

    // Calculate the average of positive numbers
    float average = sum / positive_count;

    // Print results
    printf("%d valores positivos\n", positive_count);
    printf("%.1f\n", average);

    return 0;
}
