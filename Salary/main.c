#include <stdio.h>

int main() {
    int number, worked_hours;
    double amount_per_hour, salary;

    // Reading the employee's number, worked hours, and amount per hour
    scanf("%d", &number);
    scanf("%d", &worked_hours);
    scanf("%lf", &amount_per_hour);

    // Calculating the salary
    salary = worked_hours * amount_per_hour;

    // Printing the results
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", salary);

    return 0;
}
