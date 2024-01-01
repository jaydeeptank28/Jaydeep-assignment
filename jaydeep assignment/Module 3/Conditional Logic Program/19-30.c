#include <stdio.h>

int main() {
    int customerID, unitConsumed;
    char customerName[50];

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf("%s", customerName);

    printf("Enter Units Consumed: ");
    scanf("%d", &unitConsumed);

    // Calculate electricity bill based on charge rates
    double chargePerUnit;

    if (unitConsumed <= 350)
	{
        chargePerUnit = 1.20;
    } 
	else if (unitConsumed > 350 && unitConsumed <= 600) 
	{
        chargePerUnit = 1.50;
    } 
	else if (unitConsumed > 600 && unitConsumed <= 800) 
	{
        chargePerUnit = 1.80;
    } 
	else 
	{
        chargePerUnit = 2.0;
    }

    // Calculate total amount
    double totalAmount = unitConsumed * chargePerUnit;

    // Apply surcharge if total amount exceeds Rs. 800
    if (totalAmount > 800) {
        double surcharge = 0.18 * totalAmount;
        totalAmount += surcharge;
    }

    // Ensure minimum bill is Rs. 256
    if (totalAmount < 256) {
        totalAmount = 256;
    }

    // Display the bill
    printf("\n\tElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitConsumed);
    printf("Charge per Unit: %.2lf\n", chargePerUnit);
    printf("Total Amount: %.2lf\n", totalAmount);

}

