#include <stdio.h>

int main() {
    int month;
    scanf("%d", &month);

    // Array of month names
    const char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    // Output the corresponding month
    if (month >= 1 && month <= 12) {
        printf("%s\n", months[month - 1]);
    }

    return 0;
}
