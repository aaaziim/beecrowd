#include <stdio.h>

int main() {
    double salary, tax = 0.0;

    // Read the input salary
    scanf("%lf", &salary);

    // Calculate tax based on the given salary ranges
    if (salary <= 2000.00) {
        printf("Isento\n");
    } else if (salary <= 3000.00) {
        tax = (salary - 2000.00) * 0.08;
        printf("R$ %.2lf\n", tax);
    } else if (salary <= 4500.00) {
        tax = (1000.00 * 0.08) + (salary - 3000.00) * 0.18;
        printf("R$ %.2lf\n", tax);
    } else {
        tax = (1000.00 * 0.08) + (1500.00 * 0.18) + (salary - 4500.00) * 0.28;
        printf("R$ %.2lf\n", tax);
    }

    return 0;
}
