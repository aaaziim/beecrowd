#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;

    // Reading the input values a, b, and c
    scanf("%d %d %d", &a, &b, &c);

    // Using the formula to calculate the greatest of a and b first
    int maior_ab = (a + b + abs(a - b)) / 2;

    // Now comparing the result of the greatest between a and b with c
    int maior_abc = (maior_ab + c + abs(maior_ab - c)) / 2;

    // Output the result with the required format
    printf("%d eh o maior\n", maior_abc);

    return 0;
}
