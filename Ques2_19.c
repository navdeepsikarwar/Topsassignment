#include <stdio.h>

int main() {
    
    int customerId;
    char customerName[50];
    float unitConsumed, totalAmount;

    
    printf("Enter Customer ID: ");
    scanf("%d", &customerId);

    printf("Enter Customer Name: ");
    scanf("%s", customerName);

    printf("Enter Unit Consumed: ");
    scanf("%f", &unitConsumed);

    
    if (unitConsumed <= 350) {
        totalAmount = unitConsumed * 1.20;
    } else if (unitConsumed > 350 && unitConsumed <= 600) {
        totalAmount = unitConsumed * 1.50;
    } else if (unitConsumed > 600 && unitConsumed <= 800) {
        totalAmount = unitConsumed * 1.80;
    } else {
        totalAmount = unitConsumed * 2.00;
    }

   
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Unit Consumed: %.2f\n", unitConsumed);
    printf("Total Amount: %.2f\n", totalAmount);

    return 0;
}
