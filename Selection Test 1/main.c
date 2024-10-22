#include <stdio.h>

int main() {
    int A, B, C, D;

    // Read the four integer values
    scanf("%d %d %d %d", &A, &B, &C, &D);

    // Check the conditions for accepted values
    if (B > C && D > A && (C + D) > (A + B) && C > 0 && D > 0 && A % 2 == 0) {
        printf("Valores aceitos\n"); // Accepted values
    } else {
        printf("Valores nao aceitos\n"); // Values not accepted
    }

    return 0;
}
