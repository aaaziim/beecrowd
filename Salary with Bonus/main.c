#include <stdio.h>

int main() {
    char name[100]; // To store the seller's name
    double fixed_salary, total_sales, total_salary;

    // Reading the seller's name, fixed salary, and total sales
    fgets(name, sizeof(name), stdin); // Read the seller's name
    scanf("%lf", &fixed_salary);
    scanf("%lf", &total_sales);

    // Calculating the total salary with a 15% commission on total sales
    total_salary = fixed_salary + (0.15 * total_sales);

    // Printing the result
    printf("TOTAL = R$ %.2lf\n", total_salary);

    return 0;
}
