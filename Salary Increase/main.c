#include <stdio.h>

int main() {
    float salary, newSalary, raise;
    int percentage;

    // Read the current salary
    scanf("%f", &salary);

    // Determine the percentage and calculate the new salary and raise
    if (salary <= 400.00) {
        percentage = 15;
    } else if (salary <= 800.00) {
        percentage = 12;
    } else if (salary <= 1200.00) {
        percentage = 10;
    } else if (salary <= 2000.00) {
        percentage = 7;
    } else {
        percentage = 4;
    }

    // Calculate the raise and the new salary
    raise = salary * percentage / 100;
    newSalary = salary + raise;

    // Print the result
    printf("Novo salario: %.2f\n", newSalary);
    printf("Reajuste ganho: %.2f\n", raise);
    printf("Em percentual: %d %%\n", percentage);

    return 0;
}
