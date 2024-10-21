#include <stdio.h>

int main() {
    int A, B, C, D, DIFERENCA;

    // Reading four integer values
    scanf("%d %d %d %d", &A, &B, &C, &D);

    // Calculating the difference
    DIFERENCA = (A * B) - (C * D);

    // Printing the result
    printf("DIFERENCA = %d\n", DIFERENCA);

    return 0;
}
