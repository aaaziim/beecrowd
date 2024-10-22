#include <stdio.h>

int main() {
    int code1, code2, units1, units2;
    float price1, price2, total;

    // Reading first product details: code1, units1, price1
    scanf("%d %d %f", &code1, &units1, &price1);

    // Reading second product details: code2, units2, price2
    scanf("%d %d %f", &code2, &units2, &price2);

    // Calculate total amount to be paid
    total = (units1 * price1) + (units2 * price2);

    // Output result with the correct format
    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
