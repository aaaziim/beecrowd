#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the integer value

    // Array of banknote denominations
    int banknotes[] = {100, 50, 20, 10, 5, 2, 1};
    int quantity[7] = {0}; // To hold the quantity of each banknote

    // Calculate the quantity of each banknote
    for (int i = 0; i < 7; i++) {
        quantity[i] = N / banknotes[i]; // Number of banknotes of this denomination
        N %= banknotes[i]; // Remaining amount after using this denomination
    }

    // Print the result
    printf("%d\n", N + (N > 0 ? banknotes[0] : 0)); // Print the original value

    for (int i = 0; i < 7; i++) {
        printf("%d nota(s) de R$ %.2f\n", quantity[i], (float)banknotes[i]);
    }

    return 0;
}
