#include <stdio.h>

int main() {
    double value;
    scanf("%lf", &value); // Read the monetary value

    // Convert the value to an integer number of cents
    int totalCents = (int)(value * 100 + 0.5); // Rounding to nearest cent

    // Denominations of notes and coins
    int notes[6] = {10000, 5000, 2000, 1000, 500, 200}; // in cents
    double noteValues[6] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00};

    int coins[6] = {100, 50, 25, 10, 5, 1}; // in cents
    double coinValues[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    // Calculate the number of notes
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int count = totalCents / notes[i];
        totalCents %= notes[i]; // Update totalCents to remaining amount
        printf("%d nota(s) de R$ %.2f\n", count, noteValues[i]);
    }

    // Calculate the number of coins
    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int count = totalCents / coins[i];
        totalCents %= coins[i]; // Update totalCents to remaining amount
        printf("%d moeda(s) de R$ %.2f\n", count, coinValues[i]);
    }

    return 0;
}
