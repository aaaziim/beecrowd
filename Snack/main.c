#include <stdio.h>

int main() {
    int code, quantity;
    float price;

    // Read input
    scanf("%d %d", &code, &quantity);

    // Determine the price based on the code
    switch (code) {
        case 1:
            price = 4.00;  // Hot dog
            break;
        case 2:
            price = 4.50;  // X-Salad
            break;
        case 3:
            price = 5.00;  // X-Bacon
            break;
        case 4:
            price = 2.00;  // Toast
            break;
        case 5:
            price = 1.50;  // Soda
            break;
        default:
            price = 0.0;
            break;
    }

    // Calculate and print total price
    printf("Total: R$ %.2f\n", price * quantity);

    return 0;
}
