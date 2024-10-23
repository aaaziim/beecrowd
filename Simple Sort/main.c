#include <stdio.h>

int main() {
    int N, remainder;
    int notes100, notes50, notes20, notes10, notes5, notes2, notes1;

    // Reading the input value
    scanf("%d", &N);

    // Display the input value
    printf("%d\n", N);

    // Calculating the number of each banknote
    notes100 = N / 100;
    remainder = N % 100;

    notes50 = remainder / 50;
    remainder = remainder % 50;

    notes20 = remainder / 20;
    remainder = remainder % 20;

    notes10 = remainder / 10;
    remainder = remainder % 10;

    notes5 = remainder / 5;
    remainder = remainder % 5;

    notes2 = remainder / 2;
    remainder = remainder % 2;

    notes1 = remainder;

    // Printing the number of each banknote
    printf("%d nota(s) de R$ 100,00\n", notes100);
    printf("%d nota(s) de R$ 50,00\n", notes50);
    printf("%d nota(s) de R$ 20,00\n", notes20);
    printf("%d nota(s) de R$ 10,00\n", notes10);
    printf("%d nota(s) de R$ 5,00\n", notes5);
    printf("%d nota(s) de R$ 2,00\n", notes2);
    printf("%d nota(s) de R$ 1,00\n", notes1);

    return 0;
}
