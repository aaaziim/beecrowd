#include <stdio.h>

int main() {
    int days;
    scanf("%d", &days); // Read the age in days

    // Calculate years, months, and days
    int years = days / 365;              // Calculate the number of complete years
    days %= 365;                         // Update days to remaining days after full years
    int months = days / 30;              // Calculate the number of complete months
    days %= 30;                          // Update days to remaining days after full months

    // Output the results
    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);

    return 0;
}
